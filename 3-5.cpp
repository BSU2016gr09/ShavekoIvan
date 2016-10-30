#include <iostream>
#include <locale>
using namespace std;
//В программе задана последовательность из открывающихся и закрывающихся скобочек 3 видов. Например, char test[]="(aa[b(c)ddd]e{ee})"; Проверить правильность растановки скобок в этом выражении c помощью стека в котором хранятся char. Чтобы использовать очередной элемент строки (aa[b(c)ddd]e{ee}) достаточно написать test[0], test[1] ит..д. т.е. в цикле test[i].
int  pushStack(int&top, int&Max, char test[], int&i)
{
	if (top == Max) return false;
	else
	{
		test[top] = test[i];
		top++;
		return true;
	}
}
int popStack(int&top, char test[] )
{
	if (top < 0) return 0;
	else return test[top--];
}
void checkTest(char test[], int&max, int&top)
{
	int i = 0;
	while (i < max)
	{
		if (test[i] == '(' || test[i] == '{' || test[i] == '[') pushStack(top, max, test, i);
		else
			if (test[i] == ')' || test[i] == '}' || test[i] == ']') popStack(top, test);
			else;
			i++;
	}
}
int emptyStack(int&top)
{
	if (top == 0) return true;
	else return false;
}
int main()
{
	char test[] = "(aa[b(c)ddd]e{ee})";
	int Max = strlen(test), top=0;
	checkTest(test, Max, top);
	if (emptyStack(top)) cout << "Good";
	else cout << "Bad";
	system("pause");
}
