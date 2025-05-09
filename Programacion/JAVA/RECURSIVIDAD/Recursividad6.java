import java.util.Scanner;

public class Ejercicio6 {


	    public static boolean palabraOrdenada(String p) {
	    	String aux=p.toLowerCase();
			
	    	if(p.length() <= 1) {
	    		return true;
	    	}
	    	if(p.charAt(0)>p.charAt(1)) {
	    		return false;
	    	}
	    	   
	    	return palabraOrdenada(aux.substring(1));
	    	
			
	    }

	    public static void main(String[] args) {
	        Scanner entrada = new Scanner(System.in);
	        System.out.print("Introduce una palabra ");
	        String palabra = entrada.nextLine();

	            boolean ordenada = palabraOrdenada(palabra);
	            if(ordenada) {
	            	System.out.println("Ordenada");
	            }else {
	            	System.out.println("Sin ordenar");
	            }
	            
	            

	        entrada.close();
	    }
	}

