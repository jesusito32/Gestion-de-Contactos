#include <iostream>
#include <string>

using namespace std;

struct contactoEmail{
	
	string NombreCompleto;
	char sexo;
	int edad;
	string telefono;
	string email;
	string nacionalidad;
};

const int MAX_CONTACTOS = 1000;
contactoEmail contactos[MAX_CONTACTOS];
int num_contactos = 0;

void agregar();
void eliminar();
void mostrar_real();
void mostrar();  
int main(){
	char letter;
	cout << "CONTACTOS NACIONALES version beta 0.1" << endl;
	cout << "______________________________________" << endl;
	cout << "a) Agregar un contacto " << endl;
	cout << "b) ELiminar un contacto " << endl;
	cout << "c) Mostrar listado general de contactos registrados hasta ese momento " << endl;
	cout << "d) Mostrar listado de contactos existentes " << endl;
	cout << "e) Salir del programa " << endl;
	cin >> letter;
	cin.ignore();
	do{				
	switch(letter){
		case 'a':
			agregar();
			break;
		case 'b':	
			eliminar();
			break;
		case 'c':	
			mostrar_real();
			break;
		case 'd':
			mostrar();
			break;
		default:	
			break;
		}
	
	cout << "______________________________________" << endl;
	cout << "a) Agregar un contacto " << endl;
	cout << "b) ELiminar un contacto " << endl;
	cout << "c) Mostrar listado general de contactos registrados hasta ese momento " << endl;
	cout << "d) Mostrar listado de contactos existentes " << endl;
	cout << "e) Salir del programa " << endl;
	cin >> letter;
	}
	while(letter != 'e'); 
	return 0;
	
} 
void agregar(){

    if (num_contactos < MAX_CONTACTOS) {
        cout << "Agregando contacto" << endl;
        cout << "..................." << endl;
        cout << "Escribe los siguientes datos: " << endl;
        cout << "Nombre Completo: ";
        getline(cin, contactos[num_contactos].NombreCompleto);
        cout << "Sexo (M/F): ";
        cin >> contactos[num_contactos].sexo;
        cin.ignore(); 
        cout << "Edad: ";
        cin >> contactos[num_contactos].edad;
        cin.ignore(); 
        cout << "Telefono: ";
        getline(cin, contactos[num_contactos].telefono);
        cout << "Email: ";
        getline(cin, contactos[num_contactos].email);
        cout << "Nacionalidad: ";
        getline(cin, contactos[num_contactos].nacionalidad);
        
        num_contactos++;
    } else {
        cout << "No se pueden agregar más contactos. Límite alcanzado." << endl;
    }

}
void eliminar() {
    string nombre;
    cout << "Eliminar contacto" << endl;
    cout << "..................." << endl;
    cout << "Escribe el nombre completo del contacto a eliminar: ";
    getline(cin, nombre);

    bool encontrado = false;
    for (int i = 0; i < num_contactos; i++) {
        if (contactos[i].NombreCompleto == nombre) {
            for (int j = i; j < num_contactos - 1; j++) {
                contactos[j] = contactos[j + 1];
            }
            num_contactos--;
            encontrado = true;
            cout << "Contacto eliminado ." << endl;
            break;
        }
    }

    if (!encontrado) {
        cout << "Contacto no encontrado." << endl;
    }
}
void mostrar_real(){
	
}
void mostrar(){
 
   
}
