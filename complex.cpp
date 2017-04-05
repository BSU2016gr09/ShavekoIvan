#include <iostream>
#include <cmath>

using namespace std;

class Complex{
public:
    double re;
    double im;

    void printComplex(){
        cout<<re<<"+"<<im<<"i"<<'\n';
    }

    double abs(){//module
        return sqrt(re*re+im*im);
    }

    Complex sum(Complex other){
        Complex rez;
        rez.re=this->re+other.re;
        rez.im=this->im+other.im;
        return rez;
    }

    Complex sub(Complex other){
        Complex rez;
        rez.re=this->re-other.re;
        rez.im=this->im-other.im;
        return rez;
    }

    Complex multi(Complex other){
        Complex rez;
        rez.re=this->re*other.re-this->im*other.im;
        rez.im=this->re*other.im+this->im*other.re;
        return rez;
    }
};

int main(){
    Complex a, b, c;
    a.re=2;
    a.im=3;
    b.re=2;
    b.im=3;
    cout<<a.abs()<<'\n';
    c=a.sum(b);
    c.printComplex();
    c=a.sub(b);
    c.printComplex();
    c=a.multi(b);
    c.printComplex();
    return 0;
}
