#include<stdio.h>
int main(){
  int organizado = 0;
  int lista[10] ={10,20,30,1,40,3,6,4,5,3}; 
  for (int x = 0; x < 10; x++){
    printf("%d ", lista[x]);
  }
  printf("\n");
  while (organizado == 0) {
    organizado = 1;
    int temp =0; 
    for (int i = 1; i < sizeof(lista)/4 - 1; i += 2) {
      if (lista[i] > lista[i + 1]) {
        temp = lista[i]; 
        lista[i] = lista[i+1]; 
        lista[i+1] = temp; 
        organizado = 0;
      }
    }
    for (int i = 0; i < sizeof(lista)/4 - 1; i += 2) {
      if (lista[i] > lista[i + 1]) {
        temp = lista[i]; 
        lista[i] = lista[i+1]; 
        lista[i+1] = temp; 
        organizado = 0;
      }
    }
  }
  for (int x = 0; x < 10; x++){
    printf("%d ", lista[x]);
  }
  printf("\n");
  return 0;
}