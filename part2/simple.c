#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  FILE* fptr;
  char c;

  // create file and write to it
  fptr = fopen("/home/class/labs-sec/lab2/simple_example/data/simple.txt", "w");
  fputs("Hello World!", fptr);
  fclose(fptr);

  // read and print contents of the file
  fptr = fopen("/home/class/labs-sec/lab2/simple_example/data/secret.txt", "r");
  while((c = fgetc(fptr)) != EOF) {
    printf("%s", c);
  }
  fclose(fptr);
}