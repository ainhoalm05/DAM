import java.util.Scanner;

public class Ejercicio2 {

	public static int elevar(int base, int exponente) {
		if (exponente == 0) {
			return 1; 
		} else {
			return base * elevar(base, exponente - 1); 
		}
	}
	    public static void main(String[] args) {
	        Scanner scanner = new Scanner(System.in);
	        System.out.print("Introduce la base: ");
	        int base = scanner.nextInt();
	        System.out.print("Introduce el exponente: ");
	        int exponente = scanner.nextInt();
	       
	        System.out.println(base + " elevado a " + exponente + " es: " + elevar(base, exponente));
	        
	        scanner.close();
	    }

	}

