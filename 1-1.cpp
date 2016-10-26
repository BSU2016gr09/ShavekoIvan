#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;
void checkNum(double N)
{
	if (N > 0 && floor(N) == N);
	else exit(1);
}
int sumNumber(int n)
{
	int sum=0;
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
  }
	return sum;
}
int main()
{// Ïîëüçîâàòåëü ââîäèò ñ êëàâèàòóðû íàòóðàëüíîå ÷èñëî, ïðîâåðèòü êîððåêòíîñòü ââîäà, âû÷èñëèòü è âûâåñòè íà ýêðàí ñóììó öèôð ââåä¸ííîãî ïîëüçîâàòåëåì ÷èñëà.
	setlocale(LC_ALL, "Russian");
	double a;// Это натуральное?????
	cout << "Ââåäèòå íàòóðàëüíîå ÷èñëî:";
	cin >> a;
	checkNum(a);
	cout <<"Ñóììà åãî öèôð = "<< sumNumber(a);
	system("pause");
}
