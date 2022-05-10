#include <iostream>
#include <array>


using namespace std;

template <size_t SIZE>
void reverse ( std::array <std::string, SIZE> &arr ){
  size_t tamanho = arr . size ();
  int n = tamanho-1;
  for(int i =0;i<tamanho/2;i++){
    swap(arr[i], arr[n]);
    n--;
  }
}
int main() {
  array< string, 4> v;
  v = {"um", "dois", "três", "quatro"};
  reverse(v);
  for(int i=0;i<4;i++){
    cout << v[i] << ' ';
  }
  
}