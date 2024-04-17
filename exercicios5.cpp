#include <iostream>
#include <string>

using namespace std;

int main(){

    char frases[20];

    cout << "Digite uma frase: ";
    cin >> frases;

    cout << "A frase digita foi: " << frases << endl;
    cout << frases[3] << endl;
    return 0;
}