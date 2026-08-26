#include <stdlib.h>
#include <math.h>

int BANK[256]={}, banked=0;
float SUM=0, target=2.00;

float account() {
  float a=0;
  for (int i=0; i<banked; i++) { a+=(1/BANK[i]);}
  return a;
}

int main() {
  for (int i=1; i<=512; i++) {
    if (sum>=target) {
      sum-=1/BANK[0];
      for (int j=1; j<sizeof(BANK)/sizeof(BANK[0]); j++) {
        BANK[j-1]=BANK[j];
      }
      banked-=1;
    }
    sum+=1/i;
    BANK[banked]=i;
    banked++;
  }
  return 1;
}