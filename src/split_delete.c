/*
 * E89 Pedagogical & Technical Lab
 * project:     Split
 * created on:  2023-05-21 - 18:15 +0200
 * 1st author:  NextimeSWX - nextime
 * description: split_delete
 */

#include "stu.h"

void split_delete(char **sp)
{
    int i;

    i = 0;
    while (sp[i] != NULL) {
        free(sp[i]);
        i += 1;
    }
    free(sp);
}
