#include <iostream>
#include <cmath>

using namespace std;

class Complex{
public:
    Complex(){//Лучше приучиться списком инициализации пользоваться 
        this->re=0;
        this->im=0;
        cout<<"Конструктор по-умолчанию\n";
    }

    Complex(Complex&a){//конструктор копирование
        this->re=a.re;
        this->im=a.im;
        cout<<"Конструктор копирования для" <<(this->re)<<(*this).im<<"\n";
    }

    Complex(double b, double c){//выгоднее было сделать double c=0. Тогда не пришлоcm бы писать operator+(const double& b)
        this->re=b;
        this->im=c;
        cout<<"Конструктор с параметром\n";
    }

    ~Complex(){
        cout<<"Деструктор\n";
    }

    Complex& operator=(Complex& other){
        this->re=other.re;
        this->im=other.im;
        cout<<"Оператор присваивания\n";
        return *this;
    }

    Complex& operator=(const double& b){
        this->re=b;
        this->im=0;
        cout<<"Оператор присваивания\n";
        return *this;
    }

    void print(){
        cout<<this->re<<"+"<<this->im<<"*i"<<'\n';
    }

    double abs(){//module
        return sqrt(this->re*this->re+this->im*this->im);
    }

    Complex& operator+(Complex& other){
        this->re+=other.re;
        this->im+=other.im;
        return *this;
    }

    Complex& operator+(const double& b){//а зачем здесь амперсант для b
        re+=b;
        return *this;
    }

    Complex& operator- (Complex& other){
        this->re-=other.re;
        this->im-=other.im;
        return *this;
    }

    Complex& operator*(Complex& other){
        this->re=this->re*other.re-this->im*other.im;
        this->im=this->re*other.im+this->im*other.re;
        return *this;
    }

    void setRe(double a){
        this->re=a;
    }

    void setIm(double a){
        this->im=a;
    }

private:
    double re;
    double im;
};

int main(){
    const int N=10;

    Complex a(5, 3), b(2,3), c(a), k;
    Complex *pn, *pm;
    pn=&b;
    pm=new Complex(0, 1);//объявили мнимую 1
    Complex A(5, 0);//объявили 5
    Complex arr[N];
    double tmp;
    cout<<"Введите действительную часть комплексного числа\n";
    cin>>tmp;
    k.setRe(tmp);
    cout<<"Введите мнимую часть комплексного числа\n";
    cin>>tmp;
    k.setIm(tmp);
    k.print();
    for(int i=0; i<N;i++) {Complex tmp(rand(), rand());arr[i]=tmp;}
    for(int i=0; i<N;i++) {arr[i].print();}
    double g=0;
    k=g;
    k=15;
    cout<<a.abs()<<'\n';
    a=b-c;
    a.print();
    k=b+c;
    k.print();
    k=b*b;
    k.print();
    return 0;
}
