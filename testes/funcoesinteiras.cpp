#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int pdez();
float xdez(){
    cout << "\nFloat\n";
    float numero = 20.5;
    return numero;
};

int main(){
    int a;
    float b;
    a = pdez();
    printf("%d",a);
    b = xdez();
    printf("%.2f",b);

}

pdez(){
    cout << "Inteiro\n";
    int numero = 10;
    return numero;
}





