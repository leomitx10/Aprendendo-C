#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

void aumenta10(int *num){
    *num = *num +10;
}

int main(){
    int a = 5;

    aumenta10(&a);

    cout<<"O valor de a eh: "<<a;

}
