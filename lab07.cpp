
#include <iostream>
#include <string>
using namespace std;
 
class Libro {
private:
    string titulo;
    string autor;
    int publicacion;
    int nu;
 
public:
    Libro(string t, string a, int p , int w) {
        titulo = t;
        autor = a;
        publicacion = p;
        nu = w
            ;
 
    }
 
    void get_libro(int w) {
        switch (w) {
        case 1:
            cout << "Libro:" << nu << ":" << endl;
              cout<< "Titulo: " << titulo << endl;
              cout << "                      " << endl;
            break;
        case 2:
            cout << "Libro:" << nu << ":" << endl;
            cout << "Autor: " << autor << endl;
            cout << "                      " << endl;
            break;
        case 3:
            cout << "Libro:" << nu << ":" << endl;
            cout << "Fecha de Publicacion: " << publicacion << endl;
            cout << "                      " << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
    }
 
    void set_libro(int e, string j ) {
        int fe = 0;
        switch (e) {
        case 1:
           /* cout << "libro" << nu << ":" << endl;
            cout << "Nuevo titulo: " << j << endl;*/
            titulo = j;
            break;
        case 2:
          /*  cout << "libro" << nu << ":" << endl;
            cout << "Nuevo autor: " << j << endl ;*/
            autor = j;
            break;
        case 3:
         /*   cout << "libro" << nu << ":" << endl;
            cout << "Nueva fecha de publicacion: " << j << endl ;*/
            fe = stoi(j);
            publicacion = fe;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
    }
 
    void saw_libro() {
        cout << "libro " << nu << ":" << endl;
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Fecha de publicacion: " << publicacion << endl;
        cout << "                      " << endl;
    }
};
 
int main() {
    
    Libro libro1("El principito", "Antoine de Saint-Exupery", 1943 , 1);
    Libro libro2("Cien anos de soledad", "Gabriel Garcia Marquez", 1967 , 2);
    Libro libro3("Don Quijote de la Mancha", "Miguel de Cervantes", 1605, 3);
    Libro libro4("Moby Dick", "Herman Melville", 1851, 4);
    Libro libro5("Orgullo y prejuicio", "Jane Austen", 1813, 5);
    Libro libro6("1984", "George Orwell", 1949, 6);
    Libro libro7("El Hobbit", "J.R.R. Tolkien", 1937, 7);
 
    libro1.saw_libro();
    libro2.saw_libro();
    libro3.saw_libro();
    libro4.saw_libro();
    libro5.saw_libro();
    libro6.saw_libro();
    libro7.saw_libro();
 
 
    // Obtener información de los libros
    libro3.get_libro(3);
    libro4.get_libro(2);
    libro5.get_libro(3);
 
 
    // Modificar los títulos de los libros
   
    libro6.set_libro(1, "El gran Gatsby");
    libro7.set_libro(1, "Harry Potter y la piedra filosofal");
 
    // Modificar los autores de los libros
    libro5.set_libro(2, "Charles Dickens");
    libro6.set_libro(2, "F. Scott Fitzgerald");
   
 
    // Modificar los años de publicación de los libros
    libro3.set_libro(3, "1952");
    libro7.set_libro(3, "1997");
 
    cout << "se modificaron los contenidos de los libros: " << endl;
    cout << "                      " << endl;
 
    libro1.saw_libro();
    libro2.saw_libro();
    libro3.saw_libro();
    libro4.saw_libro();
    libro5.saw_libro();
    libro6.saw_libro();
    libro7.saw_libro();
 
    return 0;
}
