#include <iostream>


using namespace std;
int main(){

    char letra[5];

    cout << "Digite uma letra: ";
    cin >> letra;

    if(letra == "a" || "e" || "i" || "o" || "u"){
       
       cout << "A letra digita é uma vogal." << std::endl;
    } else {

        cout << "A letra digita não é uma vogal." << std::endl;
    }

    return 0;
}