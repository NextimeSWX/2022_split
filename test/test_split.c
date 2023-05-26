/*
 * E89 Pedagogical & Technical Lab
 * project:     Getline
 * created on:  2023-05-09 - 14:43 +0200
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_getline.c
 */

#include "stu.h"

Test(split, normal)
{
    char **sp;

    sp = split("hello;world", ';');
    cr_assert_str_eq(sp[0], "hello");
    cr_assert_str_eq(sp[1], "world");
    cr_assert_not(sp[2]);
    split_delete(sp);
}


