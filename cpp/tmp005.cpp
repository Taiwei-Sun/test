#include <iostream>
using namespace std;

void test_fun(int *k){
  int &j=*k;
  j++;
}


int main () {
  int c=3;
  test_fun(&c);
  printf("c=%d\n",c);
  return 0;
}
