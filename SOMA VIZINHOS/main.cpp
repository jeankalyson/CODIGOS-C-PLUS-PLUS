#include <iostream>
using namespace std;

int main() {
  int x, y, soma=0;
while( cin >> std::ws >> x >> y) {
  if(y>0){
    for(int i=0;i<y;i++){
      soma = soma + x;
      x++;
    }
    cout << soma << '\n';
    soma = 0;
  }
  else if(y<0){
    y = y*(-1);
    for(int i=0;i<y;i++){
      soma = soma + x;
      x--;
    }
    cout << soma << '\n';
    soma = 0;
  }
  else{
    cout << x << '\n';
  }
}
}