#include<iostream>
#include<string>

int main(){
    std::string frase;
    std::cout << "Introduce una frase: ";
    std::getline(std::cin, frase);
    std::cout << "La frase introducida es: " << frase << std::endl;
    return 0;
}