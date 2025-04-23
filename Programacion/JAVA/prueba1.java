
public class Prueba2 {

	public static void main(String[] args) {
		String fragmentoNombreAlumnos = "Victor";
		String[] nombreAlumnos = {"Antonio", "Marta", "Victor Hugo", "David"};
		
		int resultado = contarUsuarios(fragmentoNombreAlumnos, nombreAlumnos);
		System.out.println("Total resultados: " + resultado);
		
		System.out.println("Hola chavales");
	}

	
	static int contarUsuarios(String fragmentoNombreUsuarios, String[] nombreAlumnos) {
		boolean encontrado = false;
		int totalEncontrados = 0;
		
		for (String nombreAlumnoActual : nombreAlumnos) {
			encontrado = false;
			if (nombreAlumnoActual.contains(fragmentoNombreUsuarios)) {
				encontrado = true;
			}
			if (encontrado) {
				totalEncontrados++;
			}
		}
		return totalEncontrados;
	}
}

