#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    int a;
    float b;
    char c;
    bool d;

    a = 5;
    b = 5.5;
    c = 'x';
    d = false;

    printf("%d\n",a);
    printf("%.2f\n",b);
    printf("%c\n",c);
    printf("%d\n",d);

    //imprimindo com c++
    //std::cout << "ovo";
    cout << "\novo";
    cout << "\nvalor: " << a;

    printf("\n");

    /*
    scanf("\n%d",&a);
    scanf("\n%f",&b);
    scanf("\n%c",&c);
    scanf("\n%d",&d);
    */

    cin >> a;
    cout<< "\nO valor da variavel a eh: " << a;
}
