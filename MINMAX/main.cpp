#include <iostream>
using namespace std;

pair <size_t, size_t> min_max (int V[], size_t n){
  int menor = 0, maior = 0, var_maior = -100000, var_menor = 100000, i;
  for(i=0;i<n;i++){
    if(V[i] < var_menor){
      var_menor = V[i];
      menor = i;
    }
    if(V[i] >= var_maior){
      var_maior = V[i];
      maior = i;
    }
  }
  return make_pair(menor, maior);
}

//ENTRADA : 10 5 4 1 3 1 10 7 10 6 8

int main() {
  int n, i;
  cout << "Digite quantos números deseja inserir";
  cin >> n;
  int V[n];
  for(i=0;i<n;i++){
    cin >> V[i];
  }
  pair < size_t, size_t> p = min_max(V,n);
  cout << p.first << ' ' << p.second;
}