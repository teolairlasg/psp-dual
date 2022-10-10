package ej08_javaHilos;

public class Programa {
	public static void main(String[] args) throws InterruptedException {
		HiloThread h1 = new HiloThread(3000);
		h1.start();
		h1.join();
		
		Thread h2 = new Thread(new HiloRunnable(3000));
		h2.start();
	}
}
