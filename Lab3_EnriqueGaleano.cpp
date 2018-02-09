#include <iostream>

#include <string>

using namespace std;

int menu();

int main(){
	int opcion = 0;
	while(opcion != 4){
		switch(opcion = menu()){
			case 1:
				cout<<"Entro al 1"<<endl;
				break;
			case 2:
				cout<<"Entro al 2"<<endl;
				break;
			case 3:
				cout<<"entro al 3"<<endl;
				break;
		}
	}

	return 0;
}

int menu(){

	int flag = 0;
	int numberElection = 0;
	while(flag == 0){
		cout<<"-------Menu-------"<<endl;
		cout<<"1. Poda y Busca"<<endl;
		cout<<"2. Permutacion"<<endl;
		cout<<"3. Fecha"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"Ingrese numero para entrar a la opcion"<<endl;
		cin>>numberElection;
		return numberElection;
	}
}
