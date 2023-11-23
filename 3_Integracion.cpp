#include <iostream>
#include <string>
using namespace std;
int main() {
    string cadena1, cadena2;

    cout << "Introduce la pimera frase: ";
    getline(cin, cadena1);
    cout<< "Introduce lla segunda parte de la frase: ";
    getline(cin, cadena2);

    string cadenaConcatenada = cadena1 +" "+ cadena2;
    cout<< " la frase la completo es: " << cadenaConcatenada << endl;
    return 0;
}