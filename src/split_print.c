/*
 * E89 Pedagogical & Technical Lab
 * project:     Split
 * created on:  2023-05-21 - 18:16 +0200
 * 1st author:  NextimeSWX - nextime
 * description: split_print.c
 */

#include "stu.h"

void split_print(char **sp)
{
    int i;

    i = 0;
    while (sp[i] != NULL) {
        stu_puts(sp[i]);
        i += 1;
    }
}
