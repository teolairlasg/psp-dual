package ej09_contadorHilos;

public class Contador {

	private int numero;
	
	public Contador(int numero) {
		super();
		this.numero = numero;
	}
	public void incrementar() {
		synchronized (this) {
			numero++;			
		}
	}
	public synchronized void decrementar() {
			numero--;
	}
	@Override
	public String toString() {
		return "Contador [numero=" + numero + "]";
	}
	
}
