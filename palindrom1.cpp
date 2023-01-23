#include <iostream>
using namespace std;

bool czy_palindrom(string wyraz) 
	{
	int d = wyraz.size();
	for(int i=0; i<d/2; i++) {
		if(wyraz[i]!=wyraz[d-1-i]) return false;
	}
return true;
}

int main() {
	string wyraz;
	cout<<"Wpisz Palindrom ";
	cin>>wyraz;
	if(czy_palindrom(wyraz)==true) {
		cout<<"Jest Palindromem";
	} else {
		cout<<"Nie jest Palindromem";
	}
}
