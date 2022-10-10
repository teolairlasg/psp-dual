package ej09_contadorHilos;

public class Contador {

	private int numero;
	
	public Contador(int numero) {
		super();
		this.numero = numero;
	}
	public void incrementar() {
		numero++;
	}
	public void decrementar() {
		numero--;
	}
	@Override
	public String toString() {
		return "Contador [numero=" + numero + "]";
	}
	
}
