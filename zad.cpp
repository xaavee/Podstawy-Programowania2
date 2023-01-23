#include <iostream>
using namespace std;
/* 
Program umozliwia wprowadzenie z klawiatury do tablicy 10 liczb.
- funkcja ktora oblicza sume elementow tej tablicy 
- funkcja oblicza iloczyn tych elementow tablicy, ktore sa mniejsze o dpodanego parametru x
Po wprowadzeniu elementow do tablicy 
Uruchomic obie funkcje, drug¹ dla x = 3
*/
double suma(double t[])
{
	double s = 0;
	for(int i=0; i<10; i++){
	s +=t[i];
}
return s;
}
double iloczyn(double t[], double x)
{
	double il = 1;
	for(int i=0; i<10; i++){
	if(t[i]<x){
		il *=t[i];
	}
	}
	return il;
}
int main() {
  double t[10];
  for(int i=0; i<10; i++){
    cout<<"t["<<i<<"]=";
    cin>>t[i];
  }
  cout<<"suma elementow = "<<suma(t)<<endl;
  cout<<"iloczyn < x = 3 jest:"<<iloczyn(t,3)<<endl;
}
