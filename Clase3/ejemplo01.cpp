#include <iostream>
#include <string>

int main(int argc, char **argv)
{
  std::string fullname;
  std::cout << "Hola, escribe tu nombre, pls unu:\n";
  std::getline(std::cin, fullname);
  std::cout << "Hola," << fullname <<std::endl;
    
    return 0;
}
