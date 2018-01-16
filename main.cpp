#include <iostream>
#include <conio.h>
#include <iomanip>
#include <limits>
#include <windows.h>

using namespace std;

int main()
{
    string formula;
    float a;
    float b;
    float c;
    float cantidad1;
    float cantidad2;
    float intervalo;
    intervalo=1;
    string signo;
    cout << "Formula: y=ab+/-c\n";
    cout << "Introduce el valor de a\n";
    cin >> a;
    //cout << "Introduce el valor de b\n";
    //cin >> b;
    cout << "Introduce el valor de c\n";
    cin >> c;
    cout << "Es suma o resta (responde con + o -)\n";
    cin >> signo;
    cout << "Del:";
    cin >> cantidad1;
    cout << "Al:";
    cin >> cantidad2;
     cout << "Intervalo:";
    cin >> intervalo;
    cout << "x|y\n";
    cout << "----\n";
    b=cantidad1;
    b=b - intervalo;
    while(cantidad1 <= cantidad2){
        float res1 = 0;
        if(signo=="-"){
            res1 = a*b-c;
            b=b+intervalo;
            cantidad1= cantidad1+intervalo;
    };
     if(signo=="+"){
        res1 = a*b+c;
        b=b+intervalo;
        cantidad1= cantidad1+intervalo;
    };
    cout<< b << "|" << res1 << "\n";
    };
    std::cout << "Press ENTER to continue...";
    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
    cin.get();
  return 0;
}
