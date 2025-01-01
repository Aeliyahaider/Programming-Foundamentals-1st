#include <iostream>
#include <string>

using namespace std;

void id(int x, int y)
{
	cout<<x+y;
}

void id(double x, int y)
{
	cout<<x-y;
}

int main(){
	
	id();
	
	return 0;
}
