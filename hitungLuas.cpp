#include <iostream>

int luas(int panjang, int lebar);

int main(){

  int panjang, lebar, hasil;

  std::cout << "Masukkan panjang: ";
  std::cin >> panjang;

  std::cout << "Masukkan lebar: ";
  std::cin >> lebar;

  hasil = luas(panjang, lebar);

  std::cout << "================================================================" << std::endl;

  std::cout << "Luas persegi panjang dengan lebar " << lebar << "mm " <<"dan panjang " << panjang << "mm" << " adalah " << hasil << "mm" << std::endl;

  std::cout << "================================================================" << std::endl;
}

int luas(int panjang, int lebar){
  return panjang * lebar;
}