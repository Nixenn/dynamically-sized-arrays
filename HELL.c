#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void){
    int max_bytes = 1;
    printf("define max_bytes (1024 max. this is the maximum length of your string): ");
    scanf("%d", &max_bytes);
    getchar();
    char *buf = malloc(max_bytes+1);
    printf("your string: ");
    fgets(buf, max_bytes, stdin);
    printf("max_bytes: %d", max_bytes);
    printf("buf: %s\n", buf);
    free(buf);
    return 0;
}
