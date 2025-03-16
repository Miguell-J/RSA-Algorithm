#include <iostream>
#include "rsa.h"


int main() {
   long long n, e, d;
   rsa(n, e, d, 50000);

   long long message;
   std::cout << "Digite uma mensagem numérica para criptografar: ";
   std::cin >> message;

   long long encrypted = encrypt(message, e, n);
   std::cout << "Mensagem criptografada: " << encrypted << std::endl;

   long long decrypted = decrypt(encrypted, d, n);
   std::cout << "Mensagem descriptografada: " << decrypted << std::endl;

   return 0;
}