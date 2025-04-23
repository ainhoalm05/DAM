import java.util.Iterator;
import java.util.Scanner;

public class Prueba4 {
	public static void main(String[] args) {
	int vueltas=3;	
	String nombre;
	String apellido;
	int edad;
	Scanner entrada= new Scanner(System.in);
	
	for ( int i = 0;i<vueltas;i++) {
		System.out.println("Introduce el nombre");
		nombre=entrada.nextLine();
		//System.out.println("Nombre: "+nombre);
		
		System.out.println("Introduce el apellido");
		apellido=entrada.nextLine();
		//System.out.println("Apellido: "+apellido);
		
		System.out.println("Introduce la edad");
		edad=entrada.nextInt();
		//System.out.println("Edad: "+edad);
		
		String[] persona = new String[vueltas];
		System.arraycopy(nombre, i, apellido, i, vueltas);
		System.out.println(persona[vueltas]);
	} 
	
	
	}	
	
}
