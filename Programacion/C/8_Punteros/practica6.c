#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 
 * 
 * Autor: Ainhoa Leonor
 *
 */
#define MAX_TITULO 80
#define MAX_AUTORES 50
#define MAX_LIBROS 40
typedef enum{
    FICCION,
    POESIA,
    NO_FICCION,
    TEATRO,
    ENSAYO
}Categorias;

typedef struct{
	int id;
	char titulo_libro[MAX_TITULO];
	char autor_libro[MAX_AUTORES];
    float precio_libro;
	Categorias categoria;
	int cantidadDispo;
}Biblioteca;

const char* obtenerNombreCategoria(Categorias categoria) {
    switch (categoria) {
        case FICCION: return "FICCION";
        case POESIA: return "POESIA";
        case NO_FICCION: return "NO_FICCION";
        case TEATRO: return "TEATRO";
        case ENSAYO: return "ENSAYO";
        default: return "Categoría desconocida";
    }
}

void mostrarLibros(Biblioteca *catalogo) {
    for (int i = 0; i < MAX_LIBROS; ++i) {
        printf("ID: %d\n", catalogo[i].id);
        printf("Título del libro: %s\n", catalogo[i].titulo_libro);
        printf("Autor del libro: %s\n", catalogo[i].autor_libro);
        printf("Precio del libro: %.2f\n", catalogo[i].precio_libro);
        printf("Categoría del libro: %s\n", obtenerNombreCategoria(catalogo[i].categoria));
        printf("Disponibilidad del libro: %d\n", catalogo[i].cantidadDispo);
    }
}

void busacarId(Biblioteca * catalogo, int id){
    for(int i=0;i<MAX_LIBROS;i++){
        if (catalogo[i].id == id){
        printf("ID: %d\n", catalogo[i].id);
        printf("Título del libro: %s\n", catalogo[i].titulo_libro);
        printf("Autor del libro: %s\n", catalogo[i].autor_libro);
        printf("Precio del libro: %.2f\n", catalogo[i].precio_libro);
        printf("Categoría del libro: %s\n", obtenerNombreCategoria(catalogo[i].categoria));
        printf("Disponibilidad del libro: %d\n", catalogo[i].cantidadDispo);
        return;
    }
    }
    printf("Ese ID no existe\n");

}
void aumentarstock(Biblioteca * catalogo, int id, int cantidad_aumentar){
  
   catalogo[id].cantidadDispo+=cantidad_aumentar;
   
   printf("La cantidad que has añadido es: %d\n", cantidad_aumentar);


}

void mostrarLibrosCategoria(Biblioteca * catalogo, const char* categoria){ 
// es la forma de llamar a las categorias de la funcion de obtenerNombreCategoria
   for(int i=0;i<MAX_LIBROS;i++){
        if (strcmp(obtenerNombreCategoria(catalogo[i].categoria), categoria) == 0){
        printf("ID: %d\n", catalogo[i].id);
        printf("Título del libro: %s\n", catalogo[i].titulo_libro);
        printf("Autor del libro: %s\n", catalogo[i].autor_libro);
        printf("Precio del libro: %.2f\n", catalogo[i].precio_libro);
        printf("Categoría del libro: %s\n", obtenerNombreCategoria(catalogo[i].categoria));
        printf("Disponibilidad del libro: %d\n", catalogo[i].cantidadDispo);
    }
    } 
    printf("ERROR\n");
}



int main(){
Biblioteca libros[MAX_LIBROS] = {
		{1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICCION, 10},
        {2, "1984", "George Orwell", 12.49, FICCION, 5},
        {3, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICCION, 8},
        {4, "Moby Dick", "Herman Melville", 18.99, FICCION, 12},
        {5, "War and Peace", "Leo Tolstoy", 20.00, FICCION, 7},
        {6, "Pride and Prejudice", "Jane Austen", 14.99, FICCION, 9},
        {7, "The Catcher in the Rye", "J.D. Salinger", 10.00, FICCION, 6},
        {8, "The Odyssey", "Homer", 17.49, FICCION, 4},
        {9, "Ulysses", "James Joyce", 25.00, FICCION, 2},
        {10, "The Divine Comedy", "Dante Alighieri", 22.00, POESIA, 3},
        {11, "Leaves of Grass", "Walt Whitman", 13.00, POESIA, 11},
        {12, "The Iliad", "Homer", 18.50, FICCION, 7},
        {13, "A Brief History of Time", "Stephen Hawking", 15.00, NO_FICCION, 15},
        {14, "The Art of War", "Sun Tzu", 9.99, NO_FICCION, 20},
        {15, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NO_FICCION, 13},
        {16, "The Selfish Gene", "Richard Dawkins", 14.00, NO_FICCION, 6},
        {17, "The Road to Serfdom", "F.A. Hayek", 10.50, NO_FICCION, 5},
        {18, "The Wealth of Nations", "Adam Smith", 30.00, NO_FICCION, 8},
        {19, "On the Origin of Species", "Charles Darwin", 24.99, NO_FICCION, 4},
        {20, "The Prince", "Niccolò Machiavelli", 8.99, NO_FICCION, 14},
        {21, "Hamlet", "William Shakespeare", 11.50, TEATRO, 6},
        {22, "Macbeth", "William Shakespeare", 9.50, TEATRO, 8},
        {23, "Othello", "William Shakespeare", 10.99, TEATRO, 7},
        {24, "A Doll's House", "Henrik Ibsen", 12.50, TEATRO, 5},
        {25, "Waiting for Godot", "Samuel Beckett", 13.99, TEATRO, 4},
        {26, "Death of a Salesman", "Arthur Miller", 14.99, TEATRO, 10},
        {27, "The Glass Menagerie", "Tennessee Williams", 11.00, TEATRO, 9},
        {28, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, TEATRO, 3},
        {29, "The Importance of Being Earnest", "Oscar Wilde", 8.50, TEATRO, 15},
        {30, "The Waste Land", "T.S. Eliot", 6.99, POESIA, 10},
        {31, "Paradise Lost", "John Milton", 12.00, POESIA, 7},
        {32, "Beowulf", "Anonymous", 15.00, POESIA, 5},
        {33, "ENSAYOs", "Michel de Montaigne", 20.00, ENSAYO, 4},
        {34, "Self-Reliance and Other ENSAYOs", "Ralph Waldo Emerson", 9.00, ENSAYO, 9},
        {35, "Civil Disobedience and Other ENSAYOs", "Henry David Thoreau", 7.50, ENSAYO, 11},
        {36, "Meditations", "Marcus Aurelius", 11.99, ENSAYO, 8},
        {37, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ENSAYO, 5},
        {38, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ENSAYO, 12},
        {39, "The Republic", "Plato", 16.00, ENSAYO, 6},
        {40, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ENSAYO, 10}
};

    int eleccion;
	printf("Elige una opcion: \n\
        1. Mostrar todos los libros.\n\
        2. Mostrar el libro que coincida con el ID o un mensaje de error.\n\
        3. Aumentar el stock del libro ID en la cantidad dada como argumento e imprimir la información pertinente.\n\
        4. Mostrar todos los libros de la categoría dada como argumento.\n\
        5. Mostrar los libros del autor dado como argumento.\n\
        6. Salir\n");
    scanf("%d",&eleccion);

switch (eleccion){
	case 1:
        mostrarLibros(libros);
	break;
    case 2:
        int id_buscar;
        printf("Intduce el ID del libro: \n");
        scanf("%d",&id_buscar);
        busacarId(libros,id_buscar);
    break;
    case 3:
        int id_aumentar;
        printf("Introduce el ID del libro del que quiere aumentar el stock:\n");
        scanf("%d", &id_aumentar);
        busacarId(libros,id_aumentar);
        int aumento;
        printf("¿Qué cantidad quires añadir?:\n");
        scanf("%d",&aumento);

        aumentarstock(libros,id_aumentar-1,aumento);
        busacarId(libros,id_aumentar);

    break;
    case 4:
        //ALTERNATIVA GROTESCA
        // int categoria_ingresada;
        // printf("Introduce la categoria (FICCION(1), POESIA(2), NO_FICCION(3), TEATRO(4), ENSAYO(5))\n");
        // scanf("%d", &categoria_ingresada);
        // mostrarLibrosCategoria(libros, obtenerNombreCategoria(categoria_ingresada-1));

        //ALTERNATVA ELABORADA
        char categoria_ingresada[MAX_TITULO];
        printf("Introduce la categoria (FICCION, POESIA, NO_FICCION, TEATRO ENSAYO)\n");
        scanf("%s", categoria_ingresada);
        mostrarLibrosCategoria(libros, categoria_ingresada);
    break;
    case 5:
        char autor_ingresado[MAX_AUTORES];
        printf("Introduce el autor: \n");
        scanf("%s", autor_ingresado);
        mostrarLibrosAutor(libros,autor_ingresado);
    break;
    case 6:
        printf("Saliendo...\n");
    break;
    default:
        printf("Introduce un numero del 1-6 \n");
    break;
}


return 0;
}