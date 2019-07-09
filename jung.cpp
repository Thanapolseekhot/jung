#include <iostream>
#include <string>
using namespace std;
int main()
{   int fahrenhiet , x ;
	cout<< "enter x temperature :" <<endl;
	cin >> x ;
	fahrenhiet = (1.8 * x ) + 32 ;
	cout<< " fahrenhiet = " << (1.8 * x ) + 32 ;
	cout<< ((fahrenhiet > 70 )? "\nNow weather in Thailand is HOT\n" : "\nNow weather in Thailand is COOL\n"); 
	return(0);
}