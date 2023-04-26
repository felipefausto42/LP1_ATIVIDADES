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
            break;
        }
    }
}