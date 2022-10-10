package ej08_javaHilos;

public class HiloThread extends Thread {
	private int milisegundos;

	public HiloThread(int milisegundos) {
		super();
		this.milisegundos = milisegundos;
	}

	@Override
	public void run() {
		super.run();
		System.out.println("Soy el hilo "+this.getId()+" "+this.getName());
		try {
			sleep(milisegundos);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		System.out.println("¡Terminé!");
		
	}
	
	
	
}
