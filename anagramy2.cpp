#include <iostream>
using namespace std;

//napisac program ktory sprawdzi czy 2 wyrazy skladajace sie z 3 znakow a b i c
//sa anagramami

int main() {
	string wyraz1, wyraz2;
	int t1[3] = {0,0,0};
	int t2[3] = {0,0,0};
	cout<<"wyraz 1: "<<endl;
	cin>>wyraz1;
	cout<<"wyraz 2: "<<endl;
	cin>>wyraz2;

	int d1 = wyraz1.size();
	int d2 = wyraz2.size();
	int d3 = wyraz3.size();
  	if(d1==d2) {
	cout<<"Sprawdzamy liczbe kolejnych znakow"<<endl;
	for(int i=0; i<d1; i++) {
		if(wyraz1[i]=='x'){
			t1[0]++;
		
		} else if(wyraz1[i]!='x') {
			t1[1]++;
		} else {
			t1[2]++;
		}
	if(wyraz2[i]=='x'){
			t2[0]++;
		
		} else {
			t2[1]++;
		}
	}
}


}
