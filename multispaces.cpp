// Creating namespaces
#include <iostream>
using namespace std;
namespace namesp1
{
	int value() { return 5; }
}
namespace namesp2
{
	const double x = 100;
	double value() { return 2*x; }
}
int main()
{
	// Access value function within namesp1
	cout << namesp1::value() << '\n';

	// Access value function within namesp2
	cout << namesp2::value() << '\n';

	// Access variable x directly
	cout << namesp2::x << '\n';	
	return 0;
} 

