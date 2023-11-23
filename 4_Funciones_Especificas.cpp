#include <iostream>
#include <string>
using namespace std;

int main() {
    string cadenaPrincipal, subcadena, reemplazo;

    cout << "Introduce una frase princpipal: ";
    getline(cin, cadenaPrincipal);

    cout << "Introduce una subcadena: ";
    getline(cin, subcadena);

    size_t posicion = cadenaPrincipal.find(subcadena);
    if (posicion != string::npos){
        cout<< "La subcadena se encuentra en la posicion: " << posicion << endl;
        cout << "Introduce la cadena de reemplazo: ";
        getline(cin, reemplazo);
        cadenaPrincipal.replace(posicion, subcadena.size(), reemplazo);
        cout << "La cadena principal ahora es: " << cadenaPrincipal << endl;
    } else {
        cout << "La subcadena no se encuentra en la cadena principal." << endl;
    }
    return 0;
}