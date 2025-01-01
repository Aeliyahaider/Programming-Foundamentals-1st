#include <iostream>
#include <string>

using namespace std;

//This program define function Call

void id(int x, int y)
{
	cout<<x+y;
}

void id(double x, int y)
{
	cout<<x-y;
}

int main(){
	
	id(); //the function is call here
	
	return 0;
}
