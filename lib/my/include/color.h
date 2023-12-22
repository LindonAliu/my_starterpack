/*
** EPITECH PROJECT, 2023
** my_starterpack
** File description:
** color
*/

#ifndef COLOR_H
    #define COLOR_H

    #define RED "\033[0\07331m"
    #define GREEN "\033[0\07332m"
    #define YELLOW "\033[0\07333m"
    #define PURPLE "\033[10\07395m"
    #define CYAN "\033[0\07336m"
    #define WHITE "\033[0\07337m"

    #define RED_TXT(text) (RED text WHITE)
    #define GREEN_TXT(text) (GREEN text WHITE)
    #define YELLOW_TXT(text) (YELLOW text WHITE)
    #define PUPRLE_TXT(text) (PUPRLE text WHITE)
    #define CYAN_TXT(text) (CYAN text WHITE)
    #define WHITE_TXT(text) (WHITE text WHITE)

#endif/* !COLOR_H_ */
