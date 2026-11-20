#include <stdio.h>

int main (void) {

  char fname[] = "hello-world.txt";
  char fpathname[] = "./hello-world.txt";
  char *fmode = "w+";
  char message[] = "Hello, World!";
  int msglen = sizeof message;

  FILE* file_s;


  file_s = fopen(fname, fmode);
  if (file_s == NULL) {
    printf("File open failed\n");
    return 1;
  }
  
  if ( fprintf(file_s, message) < 0 ) {
    printf("File write failed.\n");
    return 1;
  }

  rewind(file_s);

  char response[msglen];
  if ( fgets(response, msglen, file_s) == NULL ) {
    printf("File read failed.\n");
    return 1;
  }
  printf("%s\n", response);

  if ( fclose(file_s) ) {
    printf("File close failed.\n");
    return 1;
  }

  if ( remove(fpathname) ) {
    printf("File removal failed. \n");
    return 1;
  }

  return 0;
}
