#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	
	srand(time(0));
	
	int number, type;
	char alfanumb [] = "0123456789" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";
	char senha_fort [] = "0123456789" "!@#$%^&*_" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";
	char strong [] = "!@#$%^&*_";
	char senha [30];
	
	int string_alfa = sizeof(alfanumb)-1;
	int string_fort = sizeof(senha_fort)-1;
	int string_strong = sizeof(strong)-1;
	
 	
	tente:
	
	cout << "\n\t Ola, Bem vindo ao Gerador de senha\n";	
	cout << "Digite a quantidade de no Minimo 3 ou 30 no Maximo\n" << endl;
	cout << "Digite a quantidade de caracteres: ";
	
	cin >> number;
		
	if (number >= 3 && number <= 30){
		cout << "\nEscolha o tipo de senha:" << endl;
		cout << " Numerica     | 1 |" << endl;
		cout << " Alfanumerica | 2 |" << endl;
		cout << " Senha Forte  | 3 |" << endl;
		
		cin >> type;
		
		cout << "--------------------------------\n";
		
		//	Num�rica
		if (type == 1){
			
			cout << "Senha Gerada: ";
			for (int i=0; i<number; i++){
				
				cout << rand() % 10;
			}
			cout << "\n";
		}
		
		//	Alfanum�rica
		else if (type == 2){
			
			cout << "Senha Gerada: ";
			for (int i=0; i<number; i++){
				
				cout << alfanumb [rand() % string_alfa];
			}
			cout << "\n";
		}
	
		//	Senha forte
		else if (type == 3){
		
			cout << "Senha Gerada: ";
			senha[0] = strong [rand() % string_strong];
				
			for (int i=1; i<number; i++){
				
				senha[i] += senha_fort [rand() % string_fort];
			}
			cout << senha << endl;
		}
		
		cout << "--------------------------------\n";
	}
	
	else {
		cout << "+++++++++++++++++++++++++++++++\n";
		cout <<"Tente novamente" << endl;
		cout << "+++++++++++++++++++++++++++++++\n";
		goto tente;
	}
	
	system("pause");
	
	return 0;
}

