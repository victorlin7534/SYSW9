#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
  int file = open("file.txt",O_CREAT | O_RDWR, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
  printf("int value returned by open(): %d\n",file);

  char * sentence = "Whoever reads this likes potatoes and hot chocolate";
  write(file,sentence,200);

  char data[200];
  read(file,data,200);

  int i = 0;
  while(i<200){
    printf("%c",data[i]);
    i++;
  }
  printf("\n");

  file = close(file);
  printf("int value returned by close(): %d\n",file);
  return 0;
}
