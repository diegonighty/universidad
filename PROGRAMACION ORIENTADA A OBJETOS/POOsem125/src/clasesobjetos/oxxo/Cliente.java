package clasesobjetos.oxxo;

public class Cliente {

    private int idCliente;
    private String nombre;
    private int saldo;

    public Cliente(int idCliente, String nombre, int saldo) {
        this.idCliente = idCliente;
        this.nombre = nombre;
        this.saldo = saldo;
    }

    public void comprar(final Producto producto) {
        producto.decrementaExistencia();
        producto.incrementaVentas(producto.getPrecio());
        decrementaSaldo(producto.getPrecio());
    }

    public void decrementaSaldo(int saldo) {
        this.saldo -= saldo;
    }

    public int getIdCliente() {
        return idCliente;
    }

    public void setIdCliente(int idCliente) {
        this.idCliente = idCliente;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public int getSaldo() {
        return saldo;
    }

    public void setSaldo(int saldo) {
        this.saldo = saldo;
    }
}
