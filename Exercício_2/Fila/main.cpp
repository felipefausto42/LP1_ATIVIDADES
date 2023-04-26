#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> queue;
    int option;
    int listElement;
    
    cout << "Escolha uma das opções para a fila a seguir:" << endl;
    cout << endl;
    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Front" << endl;
    cout << "4. Back" << endl;
    cout << "5. Empty" << endl;
    cout << "6. Size" << endl;
    cout << "0. Finalizar o programa";
    cout << endl; cout << endl;
    cin >> option;
    
    while(option != 0){
            
        if(option == 1){
            cout << "Digite o valor a ser adicionado: ";
            cin >> listElement; 
            queue.push_back(listElement);
        }

        else if(option == 2){
            queue.pop_front();
        }

        else if(option == 3){
            if(queue.empty() == true){
                cout << "A QUEUE está vazia" << endl;
            }
            else{
                cout << "Primeiro elemento adicionado: " << queue.front() << endl;
            }
        }

        else if(option == 4){
            if(queue.empty() == true){
                cout << "A QUEUE está vazia" << endl;
            }
            else{
                cout << "Último elemento da fila: " << queue.back() << endl;
            }
        }

        else if(option == 5){
            if(queue.empty() == true){
                cout << "A QUEUE está vazia"; cout << endl;
            } else{
                cout << "A QUEUE não está vazia"; cout << endl;
            }
        }

        else if(option == 6){
            cout << "Quantidade de elementos da QUEUE: " << queue.size(); cout << endl;
        }
        cin >> option;
    }  
}