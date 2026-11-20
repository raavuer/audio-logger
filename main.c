#include <stdio.h>

int main (void) {

  char fname[] = "hello-world.txt";
  char* fmode = "w";


  FILE* file_s = fopen(fname, fmode); 
  fclose(file_s);
  

  printf("Nothing here yet...\n");

  return 0;
}
