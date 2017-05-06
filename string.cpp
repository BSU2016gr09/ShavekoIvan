#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>

//В тексте удалить все слова, содержащие заданную букву ровно два раза.

const int N = 255;
using namespace std;

void giveMemory(char* &str) {
    try {
        str = new char[255];
    }
catch (...) {
    cout<<"Not enough memory";
    system("pause");
    }
}

void deleteWord(char *str, int start, int end, int&i) {
    char *st1, *st2;
    giveMemory(st1);
    giveMemory(st2);
    st1[0] = '\0';
    strncpy(st1, str, start);
    st1[start] = '\0';
    strcpy(st2, str + end +1);
    strcat(st1, st2);
    str[0] = '\0';
    strcpy(str, st1);
    i = start-1;
    return;
    delete[]st1;
    delete[]st2;
}

void findWords(char *str, char a) {
    int i = 0, flag = 0, start=0, end, k;
    while (str[i]) {
        if (str[i] != ' ' && !flag) {
        k = 0;
        start = i;
        flag = 1;
    }
    if ((str[i] == ' ' && flag)||(str[i+1]<1)) {
        flag = 0;
        end = i;
    }
    if (str[i] == a) k++;
    if (!flag && k == 2) deleteWord(str, start, end, i);
    i++;
    }
}

int main() {
    char a;
    char *str;
    giveMemory(str);
    cout<<"Enter string\n";
    cin.getline(str, strlen(str));//Где считывание из файла???? В условии четко сказано, что не в СТРОКЕ, а  В тексте!!! Он (текст) состоит из строк!!! Надо цикл по ВСЕМ строкам 
    cout<<"Enter item\n";
    a = getchar();
    findWords(str, a);
    cout<<str;
    system("pause");
    return 0;
    delete[] str;
}
