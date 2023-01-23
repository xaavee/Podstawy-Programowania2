#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
//program losuje tak dlugo liczbe <0;15> a¿
// wylosowana liczba
//jest wieksza niz 10 wtedy konczy losowanie
main() {
	srand(time(NULL));
	int a = rand()%16;
		cout<<a<<endl;
	while(a<=14)
	{
		a = rand()%16;
		cout<<endl;
	}
}
