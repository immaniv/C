#include <stdio.h>
#include "bf.h"


void main(void) {
  unsigned long L = 1, R = 2;
  bf_ctx ctx;

  bf_init(&ctx, (unsigned char*)"TESTKEY", 7);
  
  bf_function(ENCRYPT, &ctx, &L, &R);
  printf("%lX %lX\n", L, R);
  
  if (L == 0x20A8522A870C && R == 0xF265E5F8F5F1)
	  printf("Encryption: OK\n");
  else
	  printf("Encryption: FAIL\n");

  bf_function(DECRYPT, &ctx, &L, &R);
  
  if (L == 1 && R == 2)
  	  printf("Decryption: OK\n");
  else
	  printf("Decryption: FAIL\n");
}
