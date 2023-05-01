#include <iostream>

using namespace std;

int soma(int n1, int n2){
    if (n1 == n2){
        return n1;
    }
    else if(n1 < n2){
        return n1 + soma(n1 + 1, n2);
    }
    else{
        return n2 + soma(n1, n2 + 1);
    }
}

int main(){
    int N1, N2;
    cout << "Digite o primeiro número (inteiro): ";
    cin >> N1;
    cout << "Digite o segundo número (inteiro): ";
    cin >> N2;
    int result = soma(N1, N2);
    
    cout << "Soma dos números entre " << N1 << " e " << N2 << " é: " << result << endl;
    return 0;
}