#include <stdio.h>
#include "bf.h"


void main(void) {
  unsigned long L = 1, R = 2;
  bf_ctx ctx;

  bf_init(&ctx, (unsigned char*)"TESTKEY", 7);
  
  bf_function(ENCRYPT, &ctx, &L, &R);
  printf("%lX %lX\n", L, R);
  
 if (L == 0x272A5DF333FD2 && R == 0x33A2830A71BB4)
   printf("Encryption: OK\n");
 else
   printf("Encryption: FAIL\n");

  bf_function(DECRYPT, &ctx, &L, &R);
  
  if (L == 1 && R == 2)
    printf("Decryption: OK\n");
  else
    printf("Decryption: FAIL\n");
}
