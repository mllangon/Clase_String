#include<iostream>
#include<string>

int main(){
    std::string frase;
    std::cout << "Introduce una frase: ";
    std::getline(std::cin, frase);
    std::cout << "La frase introducida es: " << frase << std::endl;

    std::cout << "Tamano de la frase: " << frase.size() << std::endl;

    if (frase.empty()) {
        std::cout << "La cadena esta vacia." << std::endl;
    } else {
        std::cout << "La cadena no está vacia." << std::endl;
    }

    return 0;
}