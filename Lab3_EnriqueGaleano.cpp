#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <numeric>

using namespace std;

//Menu
int menu();

//el size del arreglo
int* sizeArray(int);
//lee arreglo
int readSize();
//llenar arreglo
void llenarArreglo(int*, int);
//Random
int randomI();

//char
void perm(char*);

//declarar el vector
vector<string> vv(string);


int main(){
	
	int size = 0;
	int opcion = 0;
	int* array = 0;
	while(opcion != 4){
		switch(opcion = menu()){
			case 1:{
					   cout<<"Entro al 1"<<endl;
					   size = readSize();
					   if(array == NULL){
						   array = sizeArray(size);
					   }
						
					   break;
				   }
			case 2:{
					   string numero = " ";
					   char* arregloChar =  new char[3];
					   cout<<"Ingrese el numero de 4 digitos: ";
					   cin >> numero;

					   for(int i=0;i<=3;i++){
						   arregloChar[i] = numero[i];
					   }
					   perm(arregloChar);
					   break;
				   }
			case 3:{
					   vector<string> fechas1;
					   vector<string> temporal1;
					   char respuesta = 's';
					   do{
						   string fecha = " "; 
						   cout<<"Ingrese la fecha (20170303)";
						   cin>>fecha;
						   temporal1 = vv(fecha);
						   fechas1.insert(fechas1.end(), temporal1.begin(), temporal1.end());
						   cout<<"desea continuar: "<<endl;
						   cin>>respuesta;

						
					   }while(respuesta == 's' || respuesta == 'S');
						cout<<"Listado de fechas "<<endl;
					   for(int i=0;i<fechas1.size();i++){
							cout<<fechas1.at(i)<<" "<<endl;
					   }
					   cout<<"Listado de ordenados"<<endl;
					   for(int j=fechas1.size();j>0;j--){
							cout<<fechas1.at(j)<<""<<endl;
					   }
					   break;
				   }
			case 4:{

					   break;
				   }

		}
	}

	return 0;
}

void perm(char* arregloP){
	char* arreglo2 = new char[3];
	for(int i=0;i<=3;i++){
		for(int j=0;j<3;j++){
			if(j == 0){
				arreglo2[0] = arregloP[1];
				arreglo2[1] = arregloP[0];
				arreglo2[2] = arregloP[2];
				arreglo2[3] = arregloP[3];
				cout<<arreglo2<<endl;
				for(int k=0;k<=3;k++){
					arregloP[k] = arreglo2[k];
				}
			}
			
			if(j ==  1){
				arreglo2[0] = arregloP[0];
				arreglo2[1] =arregloP[2];
				arreglo2[2] = arregloP[1];
				arreglo2[3] = arregloP[3];
				cout<<arreglo2<<endl;
				for(int l=0;l<=3;l++){
					arregloP[l] = arreglo2[l];
				}
				cout<<arreglo2<<endl;
			}
			if(j == 2){
				arreglo2[0] = arregloP[0];
				arreglo2[1] = arregloP[1];
				arreglo2[2] = arregloP[3];
				arreglo2[3] = arregloP[2];
				for(int m=0;m<=3;m++){
					arreglo2[m] = arregloP[m];
				}
				cout<<arreglo2<<endl;

			}
			

		}
	}

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

//Reserva memoria dinamica
int* sizeArray(int size){
	int* retValue = new int[size];
	return retValue;
}

//leer Size
int readSize(){
	int retVal = 0;
	while(true){
		cout<<"Ingrese el tamano del arreglo"<<endl;
		cin>>retVal;
		if(retVal >= 1){
			return retVal;
		}else{
			cout<<"numeros menor a 1 no son aceptados";
		}
	}
}
//Fill array
void llenarArreglo(int* array, int size){
	int temp;
	for(int i=0;i<= size;i++){
		array[i] = randomI();
	}

}

int randomI(){
	int randomNumber = 0;
	randomNumber = rand() % 100 +1;
	return randomNumber;
}

vector<string> vv(string fechas){
	string ano;
	string mes; 
	string dia;
	int anio1;
	int mes1;
	int dia1;
	for(int i=0;i<=7;i++){
		if(i<4){
			ano += fechas.at(i);
		}
		if(i<6 && i>=4){
			mes+=fechas.at(i);
		}
		if(i>5){
			dia+=fechas.at(i);
		}
	}

	if(mes == "01"){
		mes = "Enero";
	}
	if(mes == "02"){
		mes = "Febrero";
	}
	if(mes == "03"){
		mes = "Marzo";
	}
	if(mes == "04"){
		mes = "Abril";
	}
	if(mes == "05"){
		mes = "Mayo";
	}
	if(mes == "06"){
		mes = "Junio";
	}
	if(mes == "07"){
		mes = "Julio";
	}
	if(mes == "08"){
		mes = "Agosto";
	}
	if(mes == "09"){
		mes = "Septiembre";
	}
	if(mes == "10"){
		mes = "Octubre";
	}
	if(mes ==  "11"){
		mes = "Noviembre";
	}
	if(mes == "12"){
		mes = "Diciembre";
	}

	int asigna;

	if(mes == "Enero"){
		asigna == 0;
	}
	if(mes == "Febrero"){
		asigna == 3;
	}
	if(mes == "Marzo"){
		asigna == 3;
	}
	if(mes == "Abril"){
		asigna == 6;
	}
	if(mes == "Mayo"){
		asigna == 1;
	}
	if(mes == "Junio"){
		asigna == 4;
	}
	if(mes == "Julio"){
		asigna == 6;
	}
	if(mes == "Agosto"){
		asigna == 2;
	}
	if(mes == "Septiembre"){
		asigna == 5;
	}
	if(mes == "Octubre"){
		asigna == 0;
	}
	if(mes ==  "Noviembre"){
		asigna == 3;
	}
	if(mes == "Diciembre"){
		asigna == 5;
	}
	int aniA;
	int exx;
	string tempol;
	for(int i=0;i<4;i++){
		if(i>=1){
			tempol+=ano.at(i);
		}
	}
	aniA = atoi(tempol.c_str());
	exx = (aniA/4);


	int super;
	int anib = atoi(ano.c_str());
	if(anib<= 1999){
		super = 0;
	}else{
		super = 6;
	}

	int diaExact = 0;
	diaExact = diaExact +asigna+aniA+exx+super;
	cout<<diaExact<<endl;
	string diaSemana;

	if((diaExact/7)<=1 && (diaExact/7)>0){
		diaSemana= "Lunes";
	}
	if((diaExact/7)<=2 && (diaExact/7)>1){
		diaSemana= "Martes";
	}
	if((diaExact/7)<=3 && (diaExact/7)>2){
		diaSemana= "Miercoles";
	}
	if((diaExact/7)<=4 && (diaExact/7)>3){
		diaSemana= "Jueves";
	}
	if((diaExact/7)<=5 && (diaExact/7)>4){
		diaSemana= "Viernes";
	}
	if((diaExact/7)<=6 && (diaExact/7)>5){
		diaSemana= "Sabado";
	}
	if((diaExact/7)<=0 && (diaExact/7)>0){
		diaSemana= "Domingo";
	}
	stringstream sstm;
	sstm<<diaSemana<<" , "<< dia <<" de "<<mes<<" del "<<ano;
	string fechaf = sstm.str();

	vector<string> fechasx;
	fechasx.push_back(fechaf);
	return fechasx;
}

