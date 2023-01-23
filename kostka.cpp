#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
/* program losuje 2 liczby z zakresu 1;6
symulacja rzutu dwoma kostkami
je¿eli suma tych liczb jest co najmniej 10 to pojawia siê napis "winner"
*/
main()
{
	srand(time(NULL));
	int x,y;
	x = rand()%6 +1;
	y = rand()%6 +1;
	cout<<x<<", "<<y<<endl;
	if(x + y >= 10 ) {
		cout<<"winner";
	}
}
