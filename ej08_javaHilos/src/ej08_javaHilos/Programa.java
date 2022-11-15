package ej08_javaHilos;

public class Programa {
	public static void main(String[] args) throws InterruptedException {
		HiloThread h1 = new HiloThread(4000);
		Thread h2 = new Thread(new HiloRunnable(3000));
		h1.start();
		h2.start();
		
		h1.join();
		h2.join();
	}
}
