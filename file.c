#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(){
  int file = open("file.txt",O_CREAT | O_RDWR, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
  printf("int value returned by open(): %d\n",file);

  char * sentence = "Whoever reads this likes potatoes and hot chocolate";
  int size = write(file,sentence,strlen(sentence));
  printf("int value returned by write(): %d\n",size);

  char * data = (char*)calloc(size,1);
  size = read(file,data,size);
  printf("int value returned by read(): %d\n",size);

  printf("string read:");
  while(*data){
    printf("%s",data);
    data++;
  }
  printf("\n");
  
  file = close(file);
  printf("int value returned by close(): %d\n",file);
  return 0;
}
