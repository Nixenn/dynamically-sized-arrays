#include <stdio.h>
#include <stdlib.h>

int main(void){
    int max_bytes = 1024;
    char user_input[max_bytes];
    char ptr_length = fgets(user_input, max_bytes, stdin);


    return 0;
}