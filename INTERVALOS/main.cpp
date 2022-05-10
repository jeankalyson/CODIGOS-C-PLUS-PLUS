#include <iostream>
#include <iomanip>
using namespace std;
// ENTRADA: -9 -8 1 5 15 20 25 30 35 40 45 46 47 50 55 60 78 85 90 99 100 120
int main() {
int x,i, total=0;
float n;
float v[5];
for(i=0;i<5;i++){
  v[i]= 0;
}
while( cin >> ws >>x) {
  total++;
  if(x >= 0 && x<25){
    v[0]++;
  }
  else if(x >=25 && x<50){
    v[1]++;
  }
  else if(x >= 50 && x <75){
    v[2]++;
  }
  else if(x >= 75 && x <100){
    v[3]++;
  }
  else{
    v[4]++;
  }}
  for(i=0;i<5;i++){
  n = v[i]/total*100;
  cout << setprecision(4) << n << '\n';
}
  }