#include <ctime>
#include <iostream>
#include <cmath>
using namespace std;
/* program umozliwia wprowadzanie liczb z klawiatury
zadaniem programu jest obliczyc sume siedmiu liczb nieparzystych
*/

main()
{
	int liczniep = 0;
	int suma = 0, liczba;
	while(liczniep!=7)
	{
		cout<<"Podaj liczbe= ";
		cin>>liczba;
		if(liczba%2==1){
			liczniep++;
			suma += liczba;
		} else {
			cout<<"parzysta";
		}
	}
}
