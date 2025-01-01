#include <iostream>
#include <string>

using namespace std;

//This program define function Argument

void id(int x, int y )
{
	cout<<x+y;
}

void id(double x, int y)
{
	cout<<x-y;
}

int main(){
	
	void id(double x = 3.4, int y = 6); 
	
	id();

	
	return 0;
}
