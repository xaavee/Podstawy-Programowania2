#include <iostream>
using namespace std;

//zadeklarowac funkcje, ktora sprawdza. czy w tablicy przekazanej jako
//parametr znajduje sie liczba rowniez przekazana jako parametr
bool sprawdzenie(int t[], int n, int x)
{
	for(int i = 0; i<n; i++)
	{
		if(t[i]==x) return true;
		return false;
	}
}



int pozycja(int t[],int n, int x) {
	for(int i = 0; i<n; i++){
		if(t[i]==x) return i;
		
		
	return -1;
	}
}
int main() {
	int t[6]={4,7,2,1,3,8};
	int x;
	cout<<"co sprawdzamy = ";
	cin>>x;
	if(sprawdzenie(t,6,x)==true) cout<<"jest";
	else cout<<"nie ma"<<endl;
	
	if(pozycja(t,6,x)!=-1) cout<<"jest na pozycji"<<pozycja(t,6,x)<<endl;
	else cout<<" nie ma"<<endl;
}
