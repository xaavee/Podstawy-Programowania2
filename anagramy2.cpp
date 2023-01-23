#include <iostream>
using namespace std;

//napisac program ktory sprawdzi czy 2 wyrazy skladajace sie z 3 znakow a b i c
//sa anagramami

int main() {
	string wyraz1, wyraz2, wyraz3;
	int t1[2] = {0,0};
	int t2[2] = {0,0};
	int t3[2] = {0,0};
	cout<<"wyraz 1: "<<endl;
	cin>>wyraz1;
	cout<<"wyraz 2: "<<endl;
	cin>>wyraz2;
	int d1 = wyraz1.size();
	int d2 = wyraz2.size();
  	if(d1==d2) {
	cout<<"Sprawdzamy liczbe kolejnych znakow"<<endl;
	for(int i=0; i<d1; i++) {
		if(wyraz1[i]=='x'){
			t1[0]++;
		
		} else {
			t1[1]++
		}
	if(wyraz2[i]=='x'){
			t2[0]++;
		
		} else {
			t2[1]++;
		}
	}
}

}
