#include <iostream>

#include <string>

using namespace std;

int menu();

int main(){
	int opcion = 0;
	while(opcion != 4){
		switch(opcion = menu()){
			case 1:{

				   }
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
		cout<<"3. Fecha";
		cout<<"Ingrese numero para entrar a la opcion";
		cin>>numberElection;
	}
}
