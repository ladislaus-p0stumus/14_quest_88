// nu otsiuda sobstvenno jusaem gamelib i cheto kakto zapuskaem

#include <exception>
#include <gamelib/gamelib.h>
#include <iostream>

int main() {
  std::cout << "Jesli cmake rabotaet correctno vyvedet Zaebis" << std::endl;
  try {
    game::printZaebisWithFunctionFromEngineLibIfWorks();
  } catch (std::exception e) {
    std::cout << "Nasrano" << std::endl;
    return -1;
  }
  return 0;
}
