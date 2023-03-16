#include <iostream>
using namespace std;


int main() {
     string string_input, string_invertida = "";

    cout << "Digite uma string: ";
    cin >> string_input;

    int tamanho = string_input.size();

    for (int i = tamanho - 1; i >= 0; i--)
    {
        string_invertida += string_input[i];
    }

    cout << "String invertida: " << string_invertida;
  
  return 0;
}