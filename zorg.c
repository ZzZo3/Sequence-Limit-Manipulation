#include <stdlib.h>
#include <math.h>

int BANK[256]={};
float target=2.00;

float account() {
  float a=0;
  for (int i=0; i<sizeof(BANK)/sizeof(BANK[0]); i++) { a+=(1/i);}
  return a;
}

int main() {
  for (int i=1; i<=512; i++) {
    if (sum()>=target) {
      sum-=1/BANK[0]; #downshift BANK
    }
    sum+=1/i;
    BANK[sizeof(BANK)/sizeof(BANK[0])]=i;
  }
  return 1;
}