#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

//liczby pseudolosowe 

using namespace std;

main()
{
	srand(time(NULL)); //inicjalizacja trybu losowego
	int liczba = rand();
	cout<<liczba<<endl;
	cout<<"najwieksza = "<<liczba%1001<<endl;
	//liczba losowa z zakresu liczb od 1 do 10
	liczba = rand()%11;
	cout<<liczba<<endl;
}
