#include <iostream>
using namespace std;

bool czy_palindrom2(string wyraz) 
{
	int d = wyraz.size();
	
		for(int i=0,j=d-1; i<j; i++, j--){	
			
			if(wyraz[i]!=wyraz[j]) return false;
	}
return true;
}

int main() {
	string wyraz;
	cout<<"Wpisz Palindrom ";
	cin>>wyraz;
	if(czy_palindrom2(wyraz)==true) {
		cout<<"Jest Palindromem";
	} else {
		cout<<"Nie jest Palindromem";
	}
}
