package clasesobjetos.oxxo;

public class Oxxo {
    public static void main(String[] args) {
        var producto1 = new Producto(10, "Sabritas", 50, 15, 500);
        var cliente1 = new Cliente(1, "Juan", 1000);
        cliente1.comprar(producto1);
    }
}
