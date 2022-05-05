/**
 * @file name.h
 * @author nirmala vijapur (nirmalavijapur.com)
 * @brief : Sum of Characters in a given name
 * @version 0.1
 * @date 2022-05-05
 *
 * @copyright Copyright (c) 2022
 *
 */
//header gaurd
#ifndef NAME_H_
#define NAME_H_

#include<stdio.h>
#include"stdint.h"

union my_name {
   uint8_t integer[20];
   char ch[20];

};
int char_sum(union my_name name);
 #endif
