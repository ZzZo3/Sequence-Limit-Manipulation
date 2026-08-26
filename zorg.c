#include <stdlib.h>
#include <math.h>

int BANK[256]={}, SORT[512]={};
int target=2;

float sum() {
  float a=0;
  for (int i=0; i<SORT.length; i++) { a+=(1/i);}
  return a;
}

int main() {
  for (int i=1; i<=512; i++) {
    if (sum()<2.00) {
      SORT[SORT.length]=BANKp[0]
      
    }
    else {
      
    }
  }
  return 1;
}