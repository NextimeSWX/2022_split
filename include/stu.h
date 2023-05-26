/*
 * E89 Pedagogical & Technical Lab
 * project:     Rev
 * created on:  2022-11-22 - 09:48 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: stu.h
 */

#ifndef STU_H_
#define STU_H_

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

char **split(char *str, char token);
void split_delete(char **sp);
void split_print(char **sp);
unsigned int split_size(char **sp);
char *stu_strdup(const char *src);
unsigned int stu_strlen(const char *str);
void split_print(char **sp);
int stu_puts(const char *str);

#endif
