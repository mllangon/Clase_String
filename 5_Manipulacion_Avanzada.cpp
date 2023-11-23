#include <iostream>
#include <string>
#include <limits>  // Incluir para std::numeric_limits
using namespace std;

int main() {
    string cadenaPrincipal, cadenaParaInsertar;
    size_t inicioSubcadena, longitudSubcadena;

    cout << "Introduce una frase principal: ";
    getline(cin, cadenaPrincipal);

    cout << "Introduce el indice de inicio de la subcadena: ";
    cin >> inicioSubcadena;
    cout << "Introduce la longitud de la subcadena: ";
    cin >> longitudSubcadena;

    if (inicioSubcadena > cadenaPrincipal.length() || inicioSubcadena + longitudSubcadena > cadenaPrincipal.length()) {
        cout << "Indices no validos." << endl;
        return 1;
    }

    string subcadena = cadenaPrincipal.substr(inicioSubcadena, longitudSubcadena);
    cout << "La subcadena es: " << subcadena << endl;

    // Limpiar el buffer de entrada antes de leer la siguiente cadena
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Introduce la cadena para insertar: ";
    getline(cin, cadenaParaInsertar);

    cadenaPrincipal.insert(inicioSubcadena, cadenaParaInsertar);

    cout << "Cadena resultante: " << cadenaPrincipal << endl;

    return 0;
}