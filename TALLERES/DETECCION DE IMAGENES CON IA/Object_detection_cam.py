# Importamos las librerías necesarias para el procesamiento de video y detección de objetos
import mediapipe as mp  # Librería MediaPipe para procesar imágenes y videos, enfocada en visión por computadora
from mediapipe.tasks.python import vision  # Módulo de MediaPipe para tareas de visión
from mediapipe.tasks.python import BaseOptions  # Clase de MediaPipe para definir opciones básicas de configuración
import cv2  # OpenCV para manipulación de imágenes y videos

# Configuración de las opciones del detector de objetos
options = vision.ObjectDetectorOptions(
    base_options=BaseOptions(
        model_asset_path="modules/litefloat32.tflite"
    ),  # Ruta al modelo de detección de objetos pre-entrenado
    max_results=10,  # Máximo número de detecciones a mostrar por cuadro
    score_threshold=0.2,  # Umbral de confianza; solo se consideran objetos con una confianza superior a este valor
    running_mode=vision.RunningMode.VIDEO  # Modo de ejecución en video, para analizar cada cuadro en tiempo real
)

# Creación del detector de objetos usando las opciones configuradas
detector = vision.ObjectDetector.create_from_options(options)

# Usamos la cámara de la laptop para capturar video (0 es el índice de la cámara predeterminada)
cap = cv2.VideoCapture(0)

# Procesamos cada cuadro en el video de la cámara en tiempo real
while cap.isOpened():
    ret, frame = cap.read()  # Leer un cuadro de la cámara
    if not ret:
        break  # Salir del bucle si no hay más cuadros o si ocurre un error de lectura

    # Convertir el cuadro de formato BGR a RGB, que es compatible con MediaPipe
    frame_rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
    # Convertir el cuadro RGB a un formato de imagen compatible con MediaPipe
    frame_rgb = mp.Image(image_format=mp.ImageFormat.SRGB, data=frame_rgb)

    # Calcular la marca de tiempo en milisegundos para el cuadro actual
    frame_timestamp_ms = int(cap.get(cv2.CAP_PROP_POS_MSEC))

    # Detectar objetos en el cuadro actual usando el detector configurado
    detection_result = detector.detect_for_video(frame_rgb, frame_timestamp_ms)
    
    # Procesar cada detección de objeto en el cuadro
    for detection in detection_result.detections:
        bbox = detection.bounding_box  # Extraer el cuadro delimitador del objeto detectado
        bbox_x, bbox_y, bbox_w, bbox_h = bbox.origin_x, bbox.origin_y, bbox.width, bbox.height

        # Extraer la categoría del objeto detectado y su puntuación de confianza
        category = detection.categories[0]
        score = category.score * 100  # Convertir la puntuación de confianza a porcentaje
        category_name = category.category_name  # Nombre de la categoría del objeto detectado

        # Dibujar un rectángulo de fondo para el texto de categoría y confianza
        cv2.rectangle(frame, (bbox_x, bbox_y), (bbox_x + bbox_w, bbox_y - 30), (100, 255, 0), -1)
        # Dibujar el cuadro delimitador alrededor del objeto detectado
        cv2.rectangle(frame, (bbox_x, bbox_y), (bbox_x + bbox_w, bbox_y + bbox_h), (100, 255, 0), 2)

        # Agregar texto con el nombre de la categoría y la confianza del objeto detectado
        cv2.putText(
            frame,
            f"{category_name}:{score:.2f}%",  # Texto que muestra la categoría y el porcentaje de confianza
            (bbox_x + 5, bbox_y - 5),  # Posición del texto
            cv2.FONT_HERSHEY_SIMPLEX,  # Tipo de fuente
            0.6,  # Tamaño de la fuente
            (255, 255, 255),  # Color del texto en blanco
            2  # Grosor de la línea del texto
        )

    # Mostrar el cuadro actual con las detecciones en una ventana
    cv2.imshow('Video', frame)
    if cv2.waitKey(1) & 0xFF == 27:  # Si se presiona la tecla 'Esc', se termina el bucle de reproducción del video
        break

# Liberar el objeto de captura de video y cerrar todas las ventanas
cap.release()
cv2.destroyAllWindows()
