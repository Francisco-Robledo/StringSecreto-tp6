#include <iostream>
#include <algorithm> 
using namespace std;

string InvertirTexto(string str);
string armarFrase(string frase);

int main(){
    string Frase12;

    cout<<"Ingrese secreto: ";
    getline(cin, Frase12);

    cout<<armarFrase(Frase12);

    return 0;
}

string InvertirTexto(string str){
	reverse(str.begin(), str.end());
	return str;
}

string armarFrase(string frase){
	string Final;
	string FraseInvertir;
	
	for (int i = 0; i <= frase.size(); i++) {
		
		while (frase[i] != '(' && i <= frase.size()) {
			Final += frase[i];
			i++;
		}
		 i++;
		while (frase[i] != ')' && i <= frase.size()) {
			FraseInvertir += frase[i];
			i++;
		}
				
		Final += InvertirTexto(FraseInvertir);
	}	
	return Final;
} 
