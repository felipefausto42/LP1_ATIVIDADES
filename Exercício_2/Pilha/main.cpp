#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> stack;
  int option;
  int listElement;
  
  cout << "Escolha uma das opções para a pilha a seguir:" << endl;
  cout << endl;
  cout << "1. Push" << endl;
  cout << "2. Pop" << endl;
  cout << "3. Top" << endl;
  cout << "4. Empty" << endl;
  cout << "5. Size" << endl;
  cout << "0. Finalizar o programa";
  cout << endl; cout << endl;
  cin >> option;
  
  while(option != 0){
        
    if(option == 1){
        cout << "Digite o valor a ser adicionado: ";
        cin >> listElement; 
        stack.push_front(listElement);
    }

    else if(option == 2){
        stack.pop_front();
    }

    else if(option == 3){
        if(stack.empty() == true){
            cout << "A STACK está vazia" << endl;
        }
        else{
            cout << "Último elemento adicionado: " << stack.front() << endl;
        }
    }

    else if(option == 4){
        if(stack.empty() == true){
            cout << "A STACK está vazia"; cout << endl;
        } else{
            cout << "A STACK não está vazia"; cout << endl;
        }
    }

    else if(option == 5){
        cout << "Quantidade de elementos da STACK: " << stack.size(); cout << endl;
    }
    cin >> option;
  }  
}