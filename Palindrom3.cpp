#include <iostream>
using namespace std;

bool czy_palindrom(string wyraz) 
{
	int d = wyraz.size();
	for(int i=0;i<d/2;i++){
		if(wyraz[i]!=wyraz[d-1-i])
	}
return nowy;
}

int main() {
	string wyraz;
	cout<<"Wpisz Palindrom ";
	cin>>wyraz;
	int d = wyraz.size();
	for(int k=0;k<wyraz.size();k++){
	cout<<przesuniecie(wyraz,d-k)<<endl;
}
	/*	if(czy_palindrom2(wyraz)==true) {
		cout<<"Jest Palindromem";
	} else {
		cout<<"Nie jest Palindromem";
	}
	*/
}
