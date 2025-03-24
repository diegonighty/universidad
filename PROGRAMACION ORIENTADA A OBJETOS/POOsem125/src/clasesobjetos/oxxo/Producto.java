package clasesobjetos.oxxo;

public class Producto {
    private int clave;
    private String descripcion;
    private int precio;
    private int existencia;
    private int ventas;

    public Producto(int clave, String descripcion, int precio, int existencia, int ventas) {
        this.clave = clave;
        this.descripcion = descripcion;
        this.precio = precio;
        this.existencia = existencia;
        this.ventas = ventas;
    }

    public void decrementaExistencia() {
        this.existencia--;
    }

    public void incrementaExistencia() {
        this.existencia--;
    }

    public void incrementaVentas(int ventas) {
        this.ventas += ventas;
    }

    public int getClave() {
        return clave;
    }

    public void setClave(int clave) {
        this.clave = clave;
    }

    public String getDescripcion() {
        return descripcion;
    }

    public void setDescripcion(String descripcion) {
        this.descripcion = descripcion;
    }

    public int getPrecio() {
        return precio;
    }

    public void setPrecio(int precio) {
        this.precio = precio;
    }

    public int getExistencia() {
        return existencia;
    }

    public void setExistencia(int existencia) {
        this.existencia = existencia;
    }

    public int getVentas() {
        return ventas;
    }

    public void setVentas(int ventas) {
        this.ventas = ventas;
    }
}
