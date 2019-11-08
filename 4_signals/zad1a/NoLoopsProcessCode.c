##include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
int main(){     
         sleep(10);
          fork();
          sleep(10);
         if (fork() == 0) {
                            sleep(10);
                              fork();
                             sleep(10);
                             }
           sleep(20);
           exit(0);
}

//creates child processes
??can change time (in milliseconds) to look at the processes
