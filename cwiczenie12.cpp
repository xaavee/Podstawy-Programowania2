#include <iostream>

using namespace std;

int main()
{

	int t[5][5]={1,3,4,6,5,7,8,9,0,4,3,2,4,5,6,7,8,9,0,0,0,4,3,2};
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++) {
			cout<<t[i][j]<<" ";
			cout<<endl;
		}
		
//dla podanego numeru wiersza W obliczyc sume wartosci w tym wierszu


//zamienic wartosci kolumny 1 i 3

int w;
cout<<"w=";
cin>>w;
if(w>=0 && w<=4) {
	int suma = 0;
	for(int j=0;j<5;j++)
	{
		suma += t[w][j];
		cout<<suma<<endl;
	}
}
else cout<<"niepoprawny numer kolumny";
	}
	
	for(int i=0;i<5;i++) {
		int pom = t[i][1];
		t[i][1] = t[i][3];
		t[i][3] =pom;
	}
	//zamieniæ wiersz 0 z 4
	for(int j=0;j<5;j++) {
		int pom = t[j][0];
		t[j][0] = t[j][4];
		t[j][4] =pom;
	}
}



