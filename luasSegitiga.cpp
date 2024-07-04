#include <iostream>
using namespace std;

float luasSegitiga(float alas, float tinggi);

int main(){

  // rumus luas segitiga
  // L = 1/2 * a * t
      // a : alas
      // t : tinggi

  float alas, tinggi;

  cout << "Masukkan alas segitiga (cm): ";
  cin >> alas;

  cout << "Masukkan tinggi segitiga (cm): ";
  cin >> tinggi;  

  return 0;
}

float luasSegitiga(float alas, float tinggi){
  float luas = 0.5 * (alas * tinggi);
  return luas;
}