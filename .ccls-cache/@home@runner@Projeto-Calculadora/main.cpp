#include <iostream>
#include "header.h"

int main() {
  int num1,num2;
  
  std::cout << "Digite Primeiro Numero: ";
  std::cin >> num1;
  std::cout << "Digite Segundo Numero: ";
  std::cin >> num2;

  std::cout << "Resultado operadores Matemáticos\n";
  std::cout << "\nSoma: " << soma(num1,num2);
  std::cout << "\nSubtração: " << subtracao(num1,num2);
  std::cout << "\nMultiplicação: " << multiplicacao(num1,num2);
  std::cout << "\nDivisão: " << divisao(num1,num2);
  std::cout << "\nPotencia: " << potencia(num1,num2);
  std::cout << "\nRaiz Quadrada: " << raizquadrada(num1);
  
  
    
  return 0;
}