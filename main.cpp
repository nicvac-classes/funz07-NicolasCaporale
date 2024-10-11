#include <iostream>
using namespace std;

float somma(float a, float b)
{
    float c;
    c = a + b;
    return c;
}

float sottrazione(float a, float b)
{
    float c;
    c = a - b;
    return c;
}

float molt(float a, float b)
{
    float c;
    c = a*b;
    return c;
}

float divi(float a, float b)
{
    float c;
    c = a/b;
    return c;
}

int pot(int a, int b)
{
    int c(a),i;
    for(i=0;i<a;i++)
    {
        c = a * b;
    }
    return c;
}

int main() 
{
    float a(0),b;
    string ximenes;
    do{
        cout << a;
        cin >> ximenes;
        if(ximenes == "+"){
            a= somma(a,b);
            cout << a << endl;
        }
        if(ximenes == "-"){
            a= sottrazione(a,b);
            cout << a << endl;
        }
        if(ximenes == "/"){
            a= divi(a,b);
            cout << a << endl;
        }
        if(ximenes == "*"){
            a= molt(a,b);
            cout << a << endl;
        }
        if(ximenes == "**"){
            a= pot(a,b);
            cout << a << endl;
        }
        if(ximenes == "r"){
            a= 0;
            cout << a << endl;
        }
    }while(ximenes != "X");
}

