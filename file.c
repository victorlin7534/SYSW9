#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
  int file = open("file.txt",O_CREAT,O_RDWR);
  printf("int value returned by open(): %d\n",file);

  char * sentence = "Whoever reads this likes potatoes and hot chocolate";
  write(file,sentence,200);

  char data[200];
  read(file,data,200);

  char * temp = data;
  while(*temp){
    printf("%c",*temp);
    temp++;
  }

  file = close(file);
  printf("int value returned by close(): %d\n",file);
  return 0;
}
