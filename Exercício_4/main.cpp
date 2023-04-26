#include <iostream>
#include <map>
#include <vector>
#include <math.h>

using namespace std;

int main() {
    map<string, vector<double>> boletim;

    char addAluno = 's';

    while (addAluno == 's') {
        string nomeAluno;
        double nota1, nota2, nota3;

        cout << "Digite o nome do aluno: ";
        getline(cin, nomeAluno);

        cout << "Digite a primeira nota: ";
        cin >> nota1;

        cout << "Digite a segunda nota: ";
        cin >> nota2;

        cout << "Digite a terceira nota: ";
        cin >> nota3;

        vector<double> listaNotas {nota1, nota2, nota3};
        boletim[nomeAluno] = listaNotas; 

        cout << "Deseja adicionar outro aluno? (s/n): ";
        cin >> addAluno;
        cin.ignore();
    }

    for (auto& pair : boletim) {
        string nome = pair.first;
        vector<double> listaNotas = pair.second;

        double soma = 0;
        for (double nota : listaNotas) {
            soma += nota;
        }
        double media = soma / listaNotas.size();

        cout << "A média das notas do aluno " << nome << " é: " << roundf(media * 100) / 100 << endl;
    }

    return 0;
}