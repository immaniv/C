#define    swap(a, b, T)    \
           { T t = a; a = b; b = t; }

#define    ENCRYPT    1
#define    DECRYPT    0


typedef struct {
  unsigned long P[16 + 2];
  unsigned long S[4][256];
} bf_ctx;

void bf_init(bf_ctx *ctx, unsigned char *key, int keyLen);
void bf_function(int fvalue, bf_ctx *ctx, unsigned long *l, unsigned long *r);
