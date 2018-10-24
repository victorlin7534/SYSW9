#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(){
  int file = open("file.txt", O_CREAT | O_RDWR);
  printf("int value returned by open(): %d\n",file);

  char * sentence = "Whoever reads this likes potatoes and hot chocolate";
  int size = write(file,sentence,strlen(sentence));
  printf("int value returned by write(): %d\n",size);

  close(file);
   
  int f2 = open("file.txt",O_RDONLY);
  char *buffer = calloc(1,100);
  size = read(file,buffer,51);
  printf("int value returned by read(): %d\n",size);
    
  printf("file contents: %s\n", buffer); 
    
  f2 = close(f2);
  printf("int value returned by close f2(): %d\n",file);

  return 0;
}
