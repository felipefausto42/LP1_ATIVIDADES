#include <iostream>

using namespace std;

int potencia(int base, int expoente){
    if (expoente > 1){
        return base * potencia(base, expoente - 1);
    } else{
        return base;
    }
}

int main(){
    int base, expoente;
    cout << "Digite a base (inteira) que deseja utilizar: ";
    cin >> base;
    cout << "Digite o expoente (inteiro) que deseja utilizar: ";
    cin >> expoente;

    int result = potencia(base, expoente);
    cout << "Resultado da potência de base " << base << " com expoente " << expoente << " é: " << result << endl;
    
    return 0;
}