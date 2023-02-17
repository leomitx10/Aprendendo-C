#include<stdio.h>
#include<string.h>
#include<fstream>
#include<string>
#include<iostream>

using namespace std;

int main(){

    ifstream input("ovo.txt");

    string textolido;

    for(string line; getline(input,line);){
        textolido = textolido + line;
    }

    cout<<textolido;
}

