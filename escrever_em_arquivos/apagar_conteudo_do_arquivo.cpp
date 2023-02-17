#include<stdio.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

int main(){
    ofstream arquivo;

    arquivo.open("limpar.txt");

    arquivo<<"";

    arquivo.close();

}
