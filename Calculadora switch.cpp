#include <iostream>
#include <stdio.h>

using namespace std;
int main() {
	
	int pos,num1,num2,resultado;
	
	cout<<"ingrese la opcion deseada\n ";
	cout<<"1-.suma\n";
	cout<<"2-.resta\n";
	cout<<"3-.multiplicacion\n";
	cout<<"4-.division\n";
	
	cin>> pos;
	
	system("cls");
	
	switch(pos) {
		
		case 1:
			cout<<"\n     suma. ";
			cout<<"ingrese los numeros a sumar";
			cout<<"primer numero: ";
			cin>>num1;
			cout<<"segundo numero: ";
			cin>>num2;
			
			//formula
			resultado=num1+num2;
			cout<<"\n resultado: "<<resultado;
			break;
			
			case 2:
				cout<<"\n     resta.";
				cout<<"ingrese los numeros a restar";
				cout<<"primer nunmero: ";
				cin>>num1;
				cout<<"segundo numero: ";
				cin>>num2;
				
				//formula
				resultado=num1-num2;
				cout<<"\n resultado: "<<resultado;
				break;
				
				case 3:
					cout<<"\n     multiplicacion.";
					cout<<"ingrese los numeros a multiplicar";
					cout<<"primer numero: ";
					cin>>num1;
					cout<<"segundo numero: ";
					cin>>num2;
					
					//formula
					resultado=num1*num2;
					cout<<"\n resultado: "<<resultado;
					break;
					
					case 4:
						cout<<"\n    division.";
						cout<<"ingrese numeros a dividir";
						cout<<"primer numero: ";
						cin>>num1;
						cout<<"segundo numero: ";
						cin>>num2;
						
						//formula
						resultado=num1/num2;
						cout<<"\n resultado: "<<resultado;
						break;
						
						default:
							cout<<"\nopcion no valida";
							break;
					
		
	}
	
	return 0; 
	
	
}
