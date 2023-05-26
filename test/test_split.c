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
    //    split_print(sp);
    split_delete(sp);
}

Test(split, empty)
{
    char **sp;

    sp = split(";", ';');
    cr_assert_str_eq(sp[0], "");
    cr_assert_str_eq(sp[1], "");
    cr_assert_not(sp[2]);
    //    split_print(sp);
    split_delete(sp);
}

Test(split, double_tokens)

{
    char **sp;

    sp = split("hello;;world", ';');
    cr_assert_str_eq(sp[0], "hello");
    cr_assert_str_eq(sp[1], "");
    cr_assert_str_eq(sp[2], "world");
    cr_assert_not(sp[3]);
    //split_print(sp);
    split_delete(sp);
}

Test(split, spaces)

{
    char **sp;

    sp = split("hello  ;world  ;hel", ';');
    cr_assert_str_eq(sp[0], "hello  ");
    cr_assert_str_eq(sp[1], "world  ");
    cr_assert_str_eq(sp[2], "hel");
    cr_assert_not(sp[3]);
    //split_print(sp);
    split_delete(sp);
}
