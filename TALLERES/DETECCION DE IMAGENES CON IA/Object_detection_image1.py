# Importamos las librerías necesarias
import mediapipe as mp  # Librería de MediaPipe para procesar imágenes y videos
from mediapipe.tasks.python import vision  # Módulo específico de visión para detección de objetos
from mediapipe.tasks.python import BaseOptions  # Módulo de opciones básicas de MediaPipe
import cv2  # Librería de OpenCV para procesamiento de imágenes

# Configuración de las opciones del detector de objetos
options = vision.ObjectDetectorOptions(
    base_options=BaseOptions(
        model_asset_path="modules/litefloat32.tflite"
    ),  # Ruta al modelo de detección de objetos
    max_results=10,  # Número máximo de resultados de detección de objetos a mostrar
    score_threshold=0.2,  # Umbral de confianza para considerar una detección válida
    running_mode=vision.RunningMode.IMAGE  # Modo de ejecución: en este caso, detección en una imagen
)

# Creación del detector de objetos utilizando las opciones configuradas
detector = vision.ObjectDetector.create_from_options(options)

# Leer la imagen de entrada desde la ruta especificada
image = cv2.imread("images/imagen2.jpg")
# Convertir la imagen de BGR (formato de OpenCV) a RGB (formato requerido por MediaPipe)
image_rgb = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
# Convertir la imagen a un formato compatible con MediaPipe para procesamiento
image_rgb = mp.Image(image_format=mp.ImageFormat.SRGB, data=image_rgb)

# Detectar objetos en la imagen
detection_result = detector.detect(image_rgb)

# Procesar cada detección de objeto en la imagen
for detection in detection_result.detections:
    print(detection)  # Imprimir los resultados de detección de cada objeto

    # Extraer las coordenadas y dimensiones del cuadro delimitador (bounding box) de cada objeto
    bbox = detection.bounding_box
    bbox_x, bbox_y, bbox_w, bbox_h = bbox.origin_x, bbox.origin_y, bbox.width, bbox.height

    # Extraer la categoría del objeto detectado y su confianza
    category = detection.categories[0]
    score = category.score * 100  # Convertir la confianza a porcentaje
    category_name = category.category_name  # Nombre de la categoría del objeto

    # Dibujar un rectángulo de fondo para el texto de categoría y confianza
    cv2.rectangle(image, (bbox_x, bbox_y), (bbox_x + bbox_w, bbox_y - 30), (100, 255, 0), -1)
    # Dibujar el cuadro delimitador alrededor del objeto detectado
    cv2.rectangle(image, (bbox_x, bbox_y), (bbox_x + bbox_w, bbox_y + bbox_h), (100, 255, 0), 2)

    # Añadir el texto con el nombre de la categoría y la confianza sobre el objeto detectado
    cv2.putText(
        image,
        f"{category_name}:{score:.2f}%",  # Texto de categoría y confianza
        (bbox_x + 5, bbox_y - 5),  # Coordenadas de posición del texto
        cv2.FONT_HERSHEY_SIMPLEX,  # Fuente del texto
        0.6,  # Tamaño de la fuente
        (255, 255, 255),  # Color del texto en blanco
        2  # Grosor de la línea del texto
    )

# Mostrar la imagen con los objetos detectados y etiquetados
cv2.imshow("Image", image)
cv2.waitKey(0)  # Esperar a que el usuario presione una tecla para cerrar la imagen
cv2.destroyAllWindows()  # Cerrar todas las ventanas de OpenCV
