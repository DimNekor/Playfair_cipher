#include "cipher.h"
#include <iostream>

int main(){
   Cipher cipher = (char*)"Motivation";
   std::cout<<"Hello " << cipher.GetKey();
   return 0;
}

