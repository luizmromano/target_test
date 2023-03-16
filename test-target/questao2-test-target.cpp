#include <iostream>
using namespace std;

bool verifica_fibonacci(int n){
    int a = 0, b = 1, c = 1;
  
    while (c < n) {
        c = a + b;
        a = b;
        b = c;
    }
  
    return (c == n);
}


int main() {
  int input;

  cout << "Insira um número inteiro para verificar se faz parte da sequência de Fibonacci: " << endl;
  cin >> input;

  if (verifica_fibonacci(input)) {
        cout << input << " faz parte da sequência de Fibonacci.";
    } 
  else {
        cout << input << " não faz parte da sequência de Fibonacci.";
    }

  
    return 0;
}