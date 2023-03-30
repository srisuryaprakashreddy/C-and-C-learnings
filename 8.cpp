#include <stdio.h>
#include <stdlib.h>
int main() {
  int a, i, *p, s = 0;
  printf("Enter number of elements: ");
  scanf("%d", &a);
  p = (int*) malloc(a * sizeof(int));
  if(p == NULL) {
    printf("Error! memory not allocated.");
    exit(0);}
  printf("Enter elements:\n");
  for(i = 0; i < a; ++i) {
      printf(":");
    scanf("%d", p + i);
    s += *(p + i) ;}
  printf("Sum=%d", s);
  free(p);
  return 0; }

