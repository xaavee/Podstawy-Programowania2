#include <iostream>
using namespace std;
//4* - czy pierwsza jest taka sama jak ostatnia
//      druga jak przedostatnia itd.

int main() {
	
	double t[10];
	
	for(int i = 0; i<10; i++) {
		
		cout<<"t["<<i<<"]=";
		cin>>t[i];
		
	}
	
	for(int i=0; i<10; i++) {
		
		if(t[i]==2) {
			cout<<i<<endl;
			
		}
	}
	
	bool flaga = true; //zak�adam, �e wszystkie pary s� takie same
	//je�eli napotkam niezgodno�� to flaga= false
	//na ko�cu zbadam stan flagi
	
	for(int i=0; i<10/2; i++){		

	if(t[i]!=t[9-i]) {
	
		flaga=false;
	
	}}
	
	if(flaga == true) {
	
	cout<<"takie same";
	
	} else {
		
		cout<<"nie s� takie same";
		
	}
};
