#include <stdio.h>

int main (void) {

  char fname[] = "hello-world.txt";
  char* fmode = "w";
  char message[] = "Hello, World!";


  FILE* file_s = fopen(fname, fmode);
  
  if ( fputs(message, file_s) == EOF ) {
    printf("File write failed.\n");
  }

  if ( fclose(file_s) ) {
    printf("File close failed.\n");
  }


  return 0;
}
