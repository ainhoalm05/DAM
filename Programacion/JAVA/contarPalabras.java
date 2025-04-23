import java.util.Scanner;

public class contarPalabras {
	public static void main (String[] args) {
		@SuppressWarnings({ "resource", "unused" })
		Scanner entrada= new Scanner(System.in);
		String texto= "Esto cuenta las palabras";
		texto=texto.trim();
		int palabras=0;
		
		for (int i=0; i<texto.length(); i++) {
			if(texto.charAt(i)==' '&&texto.charAt(i+1)!=' ') {
				palabras++;
			}
		}
		System.out.println("Hay "+(palabras+1)+" palabras.");
		
	}
}