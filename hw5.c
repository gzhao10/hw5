#include <stdio.h>
#include <stdlib.h>

int main(){
  //step 1
  char c = 2;
  int a = 10;
  long l = 30;

  //step 2
  printf("&c: %p\n", &c);
  printf("&c: %u\n", &c);
  printf("&a: %p\n", &a);
  printf("&a: %u\n", &a);
  printf("&l: %p\n", &l);
  printf("&l: %u\n\n", &l);
  //each value's address is 8 bytes apart

  //step 3
  char* cp = &c;
  int* ap = &a;
  long* lp = &l;

  //step 4
  printf("cp: %p\n", cp);
  printf("ap: %p\n", ap);
  printf("lp: %p\n\n", lp);

  //step 5
  (*cp)++;
  *ap = 5;
  *lp += 20;

  printf("c: %d\n", c);
  printf("a: %d\n", a);
  printf("l: %d\n\n", l);

  //step 6
  unsigned int x = 123456789;
  int* xp = &x;
  char* xp2 = &x;
  //both addresses are the same

  //step 7
  printf("xp:  %p xp  points to: %u\n", xp, *xp);
  printf("xp2: %p xp2 points to: %u\n\n", xp2, *xp2);

  //step 8
  printf("x: %u\n", x);
  printf("x: %x\n\n", x);

  //step 9
  int i;
  for (i = 0; i < 4; i++){
    printf("byte %d: %hhu\n", i + 1, *(xp2 + i));
  }

  printf("\n");

  //step 10
  for (i = 0; i < 4; i++){
    *(xp2 + i) += 1;
  }

  for (i = 0; i < 4; i++){
    printf("byte %d: %hhu\n", i + 1, *(xp2 + i));
    printf("byte %d: %hhx\n", i + 1, *(xp2 + i));
  }

  printf("\n");
  
  //step 11
  for (i = 0; i < 4; i++){
    *(xp2 + i) += 16;
  }

  for (i = 0; i < 4; i++){
    printf("byte %d: %hhu\n", i + 1, *(xp2 + i));
    printf("byte %d: %hhx\n", i + 1, *(xp2 + i));
  }

}
