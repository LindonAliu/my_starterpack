/*
** EPITECH PROJECT, 2022
** memory
** File description:
** Memory management
*/

#ifndef MEMORY_H
    #define MEMORY_H

    #include <stddef.h>

/**
 * @brief Copy the nmemb elements of the array src to the array dest.
 * @param dest The destination array.
 * @param src The array to copy.
 * @param n The number of elements to copy.
 */
void my_memcpy(void *dest, const void *src, size_t n);


#endif /* !MEMORY_H_ */
