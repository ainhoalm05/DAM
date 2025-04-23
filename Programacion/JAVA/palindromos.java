import java.util.Scanner;

public class palindromos {
	public static void main (String[] args) {
		@SuppressWarnings( "resource" )
		Scanner entrada= new Scanner(System.in);
		System.out.println("Introduce una palabra");
		String palabra =entrada.nextLine();
		
		
		
		for(int i=0; i<palabra.length()/2; i++) { 
			if(palabra.charAt(i) == palabra.charAt(palabra.length()-i-1)) {
			}	
		}
		System.out.println("La palabra es palindromo");

		
}
}