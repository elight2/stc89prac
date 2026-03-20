#include <8051.h>

#define Led10 P2_5

typedef unsigned int u16;

 

int atime = 64;

 

void delay(u16 pms) {

  u16 x, y;

  for (x=pms; x>0; x--) {

    for (y=11; y>0; y--);

  }

}

 

void ledfade(u16 i) {

  Led10 = 0;

  delay(i);

  Led10 = 1;

  delay(atime-i);

}

 

int main(void) {

  u16 a, b;

  while(1) {

    for (a=0; a<atime; a++) {

      for (b=0; b < (atime - a)/4; b++) {

        ledfade(a);

      }

    }

    for (a=atime; a>0; a--) {

      for (b=0; b < (atime - a)/4; b++) {

        ledfade(a);

      }

    }

  }

}