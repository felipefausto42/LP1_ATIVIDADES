#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream file;
    file.open("MyFile.txt", ios::app);
  
    while(true){
        char choice;
        cout << "Deseja adicionar uma música à lista (s/n)? ";
       
        cin >> choice;
        if(choice == 's' || choice == 'S'){
            string nameMSC;
            
            cin.ignore();
            
            getline(cin, nameMSC);
            file << nameMSC << endl;
        }else{
            string busca;
            cout << "Digite o nome da música a ser procurada: ";
            cin.ignore();
            getline(cin, busca);
            
            ifstream inFile("MyFile.txt");
            if (inFile.is_open()) {
                string musicName;
                while (getline(inFile, musicName)) {
                    if (musicName == busca) {
                        cout << "Música encontrada: " << busca << endl;
                        inFile.close();
                        return 0;
                    }
                }
                inFile.close();
            } else {
                cout << "Erro ao abrir arquivo." << endl;
            }
            
            cout << "Música não encontrada: " << busca << endl;
            file.close();
            break;
        }
    }
    return 0;
}
