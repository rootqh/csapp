#include <stdio.h>

const SIZE = 100;

void good_echo()
{
    char str[SIZE];
    while(1){
        char *p = fgets(str, SIZE, stdin);
        if (p == NULL) {
            break;
        }
        printf("%s",p);
    }
}

int main()
{
    good_echo();
    return 0;
}
