import java.util.Scanner;

public class Ejercicio5 {

    	 public static int numeroBinario(int n) {
    	        if (n == 0) {
    	            return 0;
    	        }
    	        return (n % 2) + 10 * numeroBinario(n / 2);
    	    
    	 }

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        System.out.print("Introduce un numero: ");
        int numero = entrada.nextInt();

        int binario = numeroBinario(numero);
        System.out.println("El numero binario de " + numero + " es: " + binario);

        entrada.close();
    }
}
