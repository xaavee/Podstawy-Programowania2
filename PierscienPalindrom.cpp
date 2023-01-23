#include <iostream>
using namespace std;

string przesuniecie(string wyraz, int k) 
{
	string nowy;
	int d = wyraz.size();
	for(int i=0;i<d;i++){
		nowy +=wyraz[(i+k)%d]; //zawijanie - indeksy nie moga byc wieksze od d-1 czyli %d
	}
return nowy;
}

bool czy_palindrom(string wyraz) 
{
	int d = wyraz.size();
	for(int i=0;i<d/2;i++){
		if(wyraz[i]!=wyraz[d-1-i]) return false;
	}
return true;
}

int main() {
	string wyraz;
	cout<<"Wpisz Palindrom ";
	cin>>wyraz;
	int d = wyraz.size();
	for(int k=0;k<wyraz.size();k++){
	string nowy = przesuniecie(wyraz, d-k);
	cout<<nowy<<endl;
	if(czy_palindrom(nowy) == true) {
		cout<<"Palindrom o przesunieciu: "<<d-k-1<<endl;
	}
}
	/*	if(czy_palindrom2(wyraz)==true) {
		cout<<"Jest Palindromem";
	} else {
		cout<<"Nie jest Palindromem";
	}
	*/
}
