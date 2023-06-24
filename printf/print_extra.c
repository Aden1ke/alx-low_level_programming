#include <stdio.h>
#include "printf.h"
#include <string.h>
void print_binary(int num)
{
        int remainder[32];
        int store;
        int i, j;

        if (num == 0)
        {
                printf("0");
        }
        else
        {
                while(num != 0)
                {
                        remainder[i] = num % 2;
                        store = num / 2;
                        num = store;
                        i++;
                }
        }
        for (j = i - 1; j >= 0; j--)
        {
                printf("%d", remainder[j]);
        }
}
void rev_string(char *s)
{
        int i;
        int tmp;
        int len = strlen(s);

        for (i = 0; i <= (len - 1) / 2; i++)
        {
                tmp = s[i];
                s[i] = s[len - i - 1];
                s[len - i - 1] = tmp;
        }
        printf("%s", s);
}
