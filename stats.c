/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Contains several c functions to perform basic analysis on dataset
 *
 * The following functions are implemented:
 *
 * print_statistics
 *      provides basic statistics on locally defined array
 *
 * print_array
 *      prints out the data in a nicely formatted output
 *
 * find_median
 *      returns the median or middle value of the dataset.  If the middle
 *      falls between two values, the average of the two values will be
 *      returned.
 *
 * find_mean
 *      returns the mean or average of the data array
 *
 * find_maximum
 *      returns the maximum value of the array
 *
 * find_minimum
 *      returns the smallest value of the array
 *
 * sort_array
 *      sorts the array in place in descending order
 *
 * @author Sam Calabrese
 * @date 2018-01-03
 *
 */

#include <stdio.h>
#include <math.h>
#include <limits.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

    unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

    /* Other Variable Declarations Go Here */
    /* Statistics and Printing Functions Go Here */
    print_statistics(test, SIZE);
}

void print_statistics(unsigned char *data, unsigned int size) {
    sort_array(data, size);
    printf("Given the following (sorted) list:\n");
    print_array(data, size);
    printf("\n");
    printf("Summary analysis of data set:\n");
    printf("\n");
    printf("Median:  \t%0.2f\n", find_median(data, size));
    printf("Mean:    \t%d\n", find_mean(data, size));
    printf("Maximum: \t%d\n", find_maximum(data, size));
    printf("Minimum: \t%d\n", find_minimum(data, size));
}

void print_array(unsigned char *data, unsigned int size) {
    char row_size = size / 5;

    for (int i = 0; i < size; i++) {
        printf("%d\t", data[i]);
        if ((i + 1) % row_size == 0) {
            printf("\n");
        }
    }
}

float find_median(unsigned char *data, unsigned int size ) {
    int middle = ((size + (2 - 1)) / 2.0);

    if (middle % 2 > 0) {
         return data[middle];
    }
    return ((float)(data[middle - 1] + data[middle]) / 2.0);
}

unsigned char find_mean(unsigned char *data, unsigned int size) {
    unsigned int mean = 0;

    for (int i = 0; i < size; i++) {
        mean += data[i];
    }
    return mean;
}

unsigned char find_maximum(unsigned char *data, unsigned int size) {
    unsigned char max = 0;

    for (int i = 0; i < size; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    return max;
}

unsigned char find_minimum(unsigned char *data, unsigned int size) {
    unsigned char min = UCHAR_MAX;

    for (int i = 0; i < size; i++) {
        if (data[i] < min) {
            min = data[i];
        }
    }
    return min;
}

void sort_array(unsigned char *data, unsigned int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < (size - i - 1); j++) {
            if (data[j] > data[j + 1]) {
                char tmp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = tmp;
            }
        }
    }
}

/* Add other Implementation File Code Here */
