#include <iostream>
 //tablice dwuwymiarowe 2 - wprowadzanie wartosci z klawiatury
 using namespace std;
 int main() {
 int w =5, k=4;
 int t[w][k];
 for(int i=0; i<w; i++){
 
 for(int j=0; j<k; j++) {
 	cout<<"t["<<i<<"]["<<j<<"]=";
 	cin>>t[i][j];
 }
}
 }
