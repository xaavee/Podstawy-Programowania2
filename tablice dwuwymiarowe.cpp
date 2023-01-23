#include <iostream>
 //tablice dwuwymiarowe
 using namespace std;
 int main() {
 	int t[3][2]={{2,3},{8,0},{0,-1}};
	//wypisanie tablicy z podzia³em na wiersze
	for(int i=0;i<3;i++)
	{
		for(int j=0; j<2; j++){
			cout<<t[i][j]<<" ";
			
		}
		cout<<endl;
	 } 
	 
	}
