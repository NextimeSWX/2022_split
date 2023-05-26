#include "stu.h"
#include <stdio.h>

int main(void)
{
    char **sp;

    sp = split("hello;world;Monkey", ';');
    if (sp) {
        if (sp[0])
            printf("expected : hello | actual :'%s' , size: %d\n", sp[0], stu_strlen(sp[0]));
        else
            printf("zizi\n");
        if (sp[1])
            printf("expected : world | actual :'%s' , size: %d\n", sp[1], stu_strlen(sp[1]));
        else
            printf("zozo\n");
        /*
         * if (sp[2])
         *     printf("expected : Monkey | actual :'%s' , size: %d\n", sp[2], stu_strlen(sp[2]));
         * else
         *     printf("zaza\n");
         */

    }
    return (0);
}
