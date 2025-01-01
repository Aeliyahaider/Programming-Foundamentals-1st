#include <iostream>
#include <string>

using namespace std;

//signature id's are same 
//This program define function overloading

void id(int x, int y) 
{
	cout<<x+y;	
}

void id(double x, int y=6)
{
	cout<<x-y;
}

int main(){
	
	id(4);
	
	return 0;
}
