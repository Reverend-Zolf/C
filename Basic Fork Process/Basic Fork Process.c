#include <stdlib.h>


int main(){
    if (fork() == 0){
         printf("I'm childish");
    }
  
    else{
         printf("I'm old and parental. %d\n",getpid());

    }

}