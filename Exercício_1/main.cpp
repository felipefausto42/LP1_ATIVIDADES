#include <header.hpp>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {

    string shape;
    cout << "Digite a forma a qual deseja calcular a área: ";
    cin >> shape;
    transform(shape.begin(), shape.end(), shape.begin(), ::toupper);

    if (shape == "RETANGULO") {
        float base, altura;
        cout << "Informe a base do retângulo: ";
        cin >> base;
        cout << "Informe a altura do retângulo: ";
        cin >> altura;
        cout << "Área do retângulo = " << rectangle(base, altura);
    } 
    
    else if (shape == "TRIANGULO") {
        float base, altura;
        cout << "Informe a base do triângulo: ";
        cin >> base;
        cout << "Informe a altura do triângulo: ";
        cin >> altura;
        cout << "Área do triângulo = " << triangle(base, altura);
    } 
    
    else if (shape == "CIRCULO") {
        float raio;
        cout << "Informe o raio do círculo: ";
        cin >> raio;
        cout << "Área do círculo = " << circle(raio);
    } 
    
    else {
        cout << "Forma não existe";
    }
    
    return 0;
}