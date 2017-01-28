#include <stdio.h>
#include <unistd.h>
#include "seven_seg.h"
#define SECOND 1000000
#define count_of_array(x) sizeof(x) / sizeof(x[0])

const int SIZE = 3;

void create_digit(char* matrix, int dig_code);
void print_matrix(char* matrix);

int main()
{
    char matrix[SIZE * SIZE];
    int i;
    int nums[] = {
        DIG_0, DIG_1, DIG_2, DIG_3,
        DIG_4, DIG_5, DIG_6, DIG_7,
        DIG_8, DIG_9, DIG_A, DIG_B,
        DIG_C, DIG_D, DIG_E, DIG_F,
    };

    int num_sequence[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    for (i = 0; i < SIZE * SIZE; i++)
       matrix[i] = ' ';

    for (i = 0; i < count_of_array(num_sequence); i++)
    {
        create_digit(matrix, nums[num_sequence[i]]);
        print_matrix(matrix);
        printf("\n");
        usleep(SECOND);
    }

    return 0;
}

void create_digit(char* matrix, int dig_code)
{
    if (dig_code & SEG_A)
        matrix[2] = '\\';
    else
        matrix[2] = ' ';

    if (dig_code & SEG_B)
        matrix[5] = '/';
    else
        matrix[5] = ' ';

    if (dig_code & SEG_C)
        matrix[7] = '/';
    else
        matrix[7] = ' ';

    if (dig_code & SEG_D)
        matrix[6] = '\\';
    else
        matrix[6] = ' ';

    if (dig_code & SEG_E)
        matrix[3] = '/';
    else
        matrix[3] = ' ';

    if (dig_code & SEG_F)
        matrix[1] = '/';
    else
        matrix[1] = ' ';

    if (dig_code & SEG_G)
        matrix[4] = '\\';
    else
        matrix[4] = ' ';
}

void print_matrix(char* matrix)
{
    int i, j;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
           printf("%c", matrix[i * SIZE + j]);
        printf("\n");
    }
}
