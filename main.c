#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ALE 101
#define MAX 5

main() {
  int c, l, m[MAX][MAX], cont, l1, c1;
  srand(time(NULL));
  for(l = 0; l < MAX; l++){
    for(c = 0; c < MAX; c++){
      m[l][c] = rand() % ALE;
    }
  }
  printf("\nMatriz: \n");
  for (l = 0; l < MAX; l++) {
    for (c = 0; c < MAX; c++) {
      if (c < MAX - 1) {
        printf("%i - ", m[l][c]);
      }
      else{
        printf("%i\n", m[l][c]);
      }
    }
  }
  for(l = 0; l < MAX; l++){
    for(c = 0; c < MAX; c++){
      for(l1 = 0; l1 <= l; l1++){
        for(c1 = 0; c1 < c; c1++){
          if(m[l][c] == m[l1][c1]){
            cont++;
          }
        }
      }
    }
  }
  printf("Números repetidos: %i", cont);
  getchar();
}