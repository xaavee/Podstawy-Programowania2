#include <iostream>
using namespace std;
/* pêtle wewn¹trz pêntli */
int main() 
{
	for(int i = 1; i<=5; i++)
	{
		for(int j= 1; j<=5; j++) 
		{
			if(i+j==6) cout<<"?";
			else if(i==j) cout<<"*";
			else cout<<" ";
		}
		cout<<endl;	
		}
		
	}


