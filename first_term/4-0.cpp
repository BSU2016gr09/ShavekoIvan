#include <iostream> 
#include <iomanip> 
#include <cmath> 
// Построить график функции y=sin(2x)/x на промежутке [-6,6] с шагом 0.1
using namespace std;
void drawGraphic(double x)
{
	cout << setw(40 + 20 * (sin(x * 2) / x)) << setfill(' ') << '*' << "\n";
}

int main()
{
	double x = -6.0;
	while (x <= 6.0)
	{
		if (x == 0) x = x + 0.1;
		else
		{
		    drawGraphic(x);
			x = x + 0.1;
		}
	}
	system("pause");
}