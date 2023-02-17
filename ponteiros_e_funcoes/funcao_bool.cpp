#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<iostream>
using namespace std;

bool retornajulga(){
    return true;
}

int main(){

    if(retornajulga()){
        cout<<"Eh verdadeiro";
    }else{
        cout<<"Eh falso";
    }

}
