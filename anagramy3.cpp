#include <iostream>
using namespace std;
//anagramy - dowolne znaki podstawowego alfabetu
bool anagramy(string wyraz1, string wyraz2) 
{
	
	
int d1 = wyraz1.size();

int d2 = wyraz2.size();

int znaki[128];

	for(int i=0; i<128;i++) {
	if(d1==d2) {
		for(int i=0; i<d1;i++) {
			znaki[(int)wyraz1[i]]++;
			znaki[(int)wyraz2[i]]--;
		}
	for(int i=0; i<128; i++) {
		return false;
		cout<<"false";
}
	return true;
	cout<<"true";
}
}
}


int main() {
string wyraz1, wyraz2;

	cout<<"wyraz 1: "<<endl;
	cin>>wyraz1;
	cout<<"wyraz 2: "<<endl;
	cin>>wyraz2;
	anagramy(wyraz1,wyraz2);
/*
int d1 = wyraz1.size();

int d2 = wyraz2.size();

int znaki[128];

for(int i=0; i<128;i++) {
	if(d1==d2) {
		for(int i=0; i<d1;i++) {
			znaki[(int)wyraz1[i]]++;
			znaki[(int)wyraz2[i]]--;
		}
		/*int licznik = 0;
		//liczymy ile jest wartosci roznych od 0
		for(int i=0; i<128; i++) {
			if(znaki[i]!=0) {
				licznik++;
			}
			if(licznik==0) {
			cout<<"Anagramy"<<endl;
			} else {
				cout<<"Nie sa anagramami"<<endl;
			
		 	
		}
	} 
	} else {
	cout<<"Nie sa";

}
} */
}

