package clasesobjetos.oxxo;

public class Proveedor {

    private int idProveedor;
    private String nombre;
    private int saldo;

    public Proveedor(
            int idProveedor,
            String nombre,
            int saldo
    ) {
        this.idProveedor = idProveedor;
        this.nombre = nombre;
        this.saldo = saldo;
    }


    public int getIdProveedor() {
        return idProveedor;
    }

    public void setIdProveedor(int idProveedor) {
        this.idProveedor = idProveedor;
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
