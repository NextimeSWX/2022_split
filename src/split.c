/*
 * E89 Pedagogical & Technical Lab
 * project:     Split
 * created on:  2023-05-21 - 17:57 +0200
 * 1st author:  NextimeSWX - nextime
 * description: split.c
 */

#include "stu.h"

static int nb_token(char *str, char token)
{
    int i;
    int size;

    i = 0;
    size = 0;
    while (str[i] != '\0') {
        if (str[i] == token)
            size += 1;
        i += 1;
    }
    return (size);
}

static int strlentok(char *str, char token)
{
    int i;

    i = 0;
    while (str[i] != token && str[i]) {
        i += 1;
    }
    return (i);
}

char **split(char *str, char token)
{
    char **sp;
    char *liste;
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    if (!str)
        return (NULL);
    sp = malloc(sizeof(char *) * (nb_token(str, token) + 2));
    while (str[i]) {
        k = 0;
        liste = malloc(sizeof(char) * strlentok(&str[i], token) + 1);
        while (str[i] != token && str[i]) {
            liste[k] = str[i];
            i += 1;
            k += 1;
        }
        liste[k] = '\0';
        sp[j] = liste;
        if (str[i] != '\0')
            i += 1;
        j += 1;
    }
    sp[j] = NULL;
    return (sp);
}
