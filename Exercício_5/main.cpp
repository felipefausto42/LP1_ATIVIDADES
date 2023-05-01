#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <math.h>

using namespace std;

int main() {

    ofstream file("notas.txt", ios::app);

    while (true) {
        string nome;
        double nota1, nota2, nota3;

        cout << "Digite o nome do aluno: ";
        getline(cin, nome);

        cout << "Digite a primeira nota do aluno: ";
        cin >> nota1;

        cout << "Digite a segunda nota do aluno: ";
        cin >> nota2;

        cout << "Digite a terceira nota do aluno: ";
        cin >> nota3;

        file << nome << " " << nota1 << " " << nota2 << " " << nota3 << endl;

        char choice;
        cout << "Deseja adicionar outro aluno (s/n)? ";
        cin >> choice;
        if (choice == 'n' || choice == 'N') {
            break;
        }
        cin.ignore();
    }
    file.close();

    ifstream inFile("notas.txt");

    map<string, double> medias;

    if (inFile.is_open()) {
        string linha;

        while (getline(inFile, linha)) {
            stringstream ii(linha);
            string nome;
            double nota1, nota2, nota3;
            ii >> nome >> nota1 >> nota2 >> nota3;
            double media = roundf(((nota1 + nota2 + nota3) / 3) * 100) / 100;
            medias[nome] = media;
        }

        inFile.close();
    } else {
        cout << "Erro ao abrir arquivo." << endl;
        return 1;
    }

    for (auto it = medias.begin(); it != medias.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}
