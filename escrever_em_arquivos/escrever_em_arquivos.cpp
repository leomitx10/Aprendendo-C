#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int main(){
    ofstream arquivo;

    arquivo.open("Texto.txt",std::ios_base::app);

    arquivo << "meuovo";

    arquivo.close();
}
