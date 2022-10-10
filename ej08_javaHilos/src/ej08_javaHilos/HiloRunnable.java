package ej08_javaHilos;

public class HiloRunnable implements Runnable {
	
	private int milisegundos;
	public HiloRunnable(int milisegundos) {
		super();
		this.milisegundos = milisegundos;
	}
	@Override
	public void run() {
		
		System.out.println("Soy el hilo "+Thread.currentThread().getId()+" "+Thread.currentThread().getName());
		try {
			Thread.sleep(milisegundos);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		System.out.println("¡Terminé!");

	}

}
