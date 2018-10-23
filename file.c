#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
  int file = open("file.txt",O_CREAT,O_RDWR);
  printf("int value returned by open(): %d\n",file);

  file = close(file);
  printf("int value returned by close(): %d\n",file);
  return 0;
}
