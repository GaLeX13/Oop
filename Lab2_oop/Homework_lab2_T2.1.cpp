#include <iostream>
using namespace std;
void interchange(int &a, int &b)
{
	int c;	
	c = a; 
	a = b; 
	b = c;
}
int main()
{
	int x, y;
	cin >> x >> y;
	interchange(x, y);
	cout << x << " " << y;
	return 0;
}