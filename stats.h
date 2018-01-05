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
 * @file stats.h
 * @brief contains function declarations
 *
 * <Add Extended Description Here>
 *
 * @author Sam Calabrese
 * @date 2018-01-03
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief gathers basic information and prints out summary
 *
 * A function that prints the statistics of an array
 * including minimum, maximum, mean, and median.
 *
 * @param data unsigned char array
 * @param size unsigned integer size value of the data
 *
 * @return void
 */
void print_statistics(unsigned char *data, unsigned int size);
/**
 * @brief prints the data array in formatted display
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param data unsigned char array
 * @param size unsigned integer size value of the data
 *
 * @return void
 */
void print_array(unsigned char *data, unsigned int size);
/**
 * @brief finds median of the list
 *
 * Given an array of data and a length, returns the median value
 * if the list is odd numbered, then the function returns just
 * the array element value.  If the list is has an even count
 * then the median is average between the two middle values.
 *
 * @param data unsigned char array
 * @param size unsigned integer size value of the data
 *
 * @return float
 */
float find_median(unsigned char *data, unsigned int size );
/**
 * @brief finds mean of the data
 *
 * Given an array of data and a length, returns the mean
 *
 * @param data unsigned char array
 * @param size unsigned integer size value of the data
 *
 * @return unsigned char
 */
unsigned char find_mean(unsigned char *data, unsigned int size);
/**
 * @brief finds maximum of the list
 *
 * Given an array of data and a length, returns the maximum
 *
 * @param data unsigned char array
 * @param size unsigned integer size value of the data
 *
 * @return unsigned char
 */
unsigned char find_maximum(unsigned char *data, unsigned int size);
/**
 * @brief finds the maximum of the list
 *
 * Given an array of data and a length, returns the minimum
 *
 * @param data unsigned char array
 * @param size unsigned integer size value of the data
 *
 * @return unsigned char
 */
unsigned char find_minimum(unsigned char *data, unsigned int size);
/**
 * @brief sort an array in descending order
 *
 * Given an array of data and a length, sorts
 * the array from largest to smallest. (The zeroth
 * Element should be the largest value, and the
 * last element (n-1) should be the smallest value. )
 * Sorts using a very basic brute force method of sorting
 * a list.  Not as efficient as bubble/Quick/Merge sorts
 * but works fine for small lists.
 *
 * @param data unsigned char array
 * @param size integer size value of the data
 *
 * @return void
 */
void sort_array(unsigned char *data, unsigned int size);

#endif /* __STATS_H__ */
