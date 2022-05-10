#include <iostream>
#include <vector>
using namespace std;
vector <int> n;
int total = 2;

std::vector<int> fib_below_n ( unsigned int n ){
  int var =0;
  vector <int> num;
  num.push_back(1);
  num.push_back(1);
  for(int i=2;i<n;i++){
    var = num[total-1]+num[total-2];
    if(var < n){
    num.push_back(var);
    i =var;
    total++;}
  }
  return num;
}

int main() {
  int max, var = 0;
  cin >> max;
  n = fib_below_n(max);
  for(int i=0;i<total;i++){
    cout << n[i] << ' ';
  
}}