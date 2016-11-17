#include <iostream>
#include <locale>
using namespace std;
//В программе задана последовательность из открывающихся и закрывающихся скобочек 3 видов. Например, char test[]="(aa[b(c)ddd]e{ee})"; Проверить правильность растановки скобок в этом выражении c помощью стека в котором хранятся char. Чтобы использовать очередной элемент строки (aa[b(c)ddd]e{ee}) достаточно написать test[0], test[1] ит..д. т.е. в цикле test[i].
int  pushStack(int top,char test[], char stack[], int i )//что то не то!!!! Надо использовать ту же функцию, что в задании 3-4 
{
	if (top == 20) return 0;
	else
	{
		stack[top] = test[i];
		top++;
		return 1;
	}
}
int popStack(int&top, char stack[] )
{
	if (top < 0) return 0;
	else return stack[top--];
}

void checkTest(char test[], int max, int top, char st[])
{
	int i = 0;
	while (i < max)
	{
		if (test[i] == '(' || test[i] == '{' || test[i] == '[') pushStack(top, test, st, i);
		else
			if (test[i] == ')' || test[i] == '}' || test[i] == ']') popStack(top, st);//нет проверки на "парность" скобок! Как отследить ситуацию {aa[bb)c}
			else;
			i++;
	}
}
int emptyStack(int&top)
{
	if (top==0) return 1;
	else return 0;
}
int main()
{
	char test[] = "(aa[b(c)ddd]e{ee})", st[20];
	int Max = strlen(test), top=0;
	checkTest(test, Max, top, st);
	if (emptyStack(top)) cout << "Good";
	else cout << "Bad";
	system("pause");
}
