/* MUHAMMAD HAYYAN
23I-2041__CYS-A
Assignment#3 Q2 */

#include<iostream>
using namespace std;

int main()
{
	//Program to Input character and number and Print nth back and next character
	
	int num;
	char character, next, back;
	
	cout<< "\nEnter a Character: ";
	cin>> character;
	
	cout<< "\nEnter a Number: ";
	cin>> num;
	
	next = character + num;			//Calculates next value
	cout<<"\n\nnth next value is: "<<next<<endl;
	
	back = character - num;			//Calculates back value
	cout<<"\nnth back value is: "<<back<<endl;
	
	return 0;
	
}
