// NULL Pointer

#include <stdio.h>

int main()
{

    int *p;
    p = NULL;  // We can assign in this way as well >> int *p = 0; 
    printf("\n The value of P is %u", p); //%u é o equivalente ao %d , mas ele aceita números sem sinal, o u é justamente de unsigned
    return 0;
    
}

/*  A Null Pointer is a special pointer that points nowhere. That is no other pointer will be equal to Null pointer.
    The most easier and straight foward way to get a null pointer in your program is to use the predefined constant NULL, which is 
    defined by several standard header files including <stdio.h> <stdlib.h> and <string.h>. */