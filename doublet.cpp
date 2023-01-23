#include <iostream>
using namespace std;
/* program umozliwia wprowadzenie z klawiatury do tablicy 10 liczb.
  nastepnie przy pomocy funkcji policzy ile jest w tej tablicy liczb
wiekszych od podanej liczby n jako parametry */
int policz(double t[], double n){
  int licznik = 0;
  for(int i=0; i<10; i++) {
  	if(t[i] > n) {
  		licznik++;
  		
	  }
	  return licznik;
  }
}
int main() {
  double t[10];
  for(int i=0; i<10; i++){
    cout<<"t["<<i<<"]=";
    cin>>t[i];
  }
  double n;
  cout<<"n=";
  cin>>n;

  cout<<"wystepuje ="<<policz(t,n);
}
