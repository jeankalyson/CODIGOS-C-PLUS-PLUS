#include <iostream>
using namespace std;

int main() {
  int entrada=0, neg=0;
  for (int i = 0; i<5; i++){
    cin >> entrada;
    if(entrada < 0){
      neg++;
    }
  }
  cout << neg;
}