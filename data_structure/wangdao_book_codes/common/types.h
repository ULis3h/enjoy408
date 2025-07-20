/**
 * @file types.h
 * @brief Common data types and definitions for Wang Dao Data Structure implementations
 * @details This file contains common type definitions and structures
 *          that are used across different data structure implementations.
 * @author 0x1a
 * @date July 20, 2025
 * @version 1.0
 */

#ifndef _WANGDAO_BOOK_CODES_TYPES_H_
#define _WANGDAO_BOOK_CODES_TYPES_H_

/* Basic type definitions */
/** maybe conflict with other project */
typedef char byte;
typedef unsigned char ubyte;
typedef unsigned int uint;
typedef unsigned long long ull;

/**
 * @brief Status type for function returns
 */
typedef enum {
    ERROR = 0,  /* Operation failed */
    SUCCESS = 1 /* Operation succeeded */
} Status;

/**
 * @brief Boolean type
 */
typedef enum {
    FALSE = 0,
    TRUE = 1
} Bool;

/**
 * @brief Element type (can be changed as needed)
 */
typedef int ElemType;

/* Additional type definitions will go here */

#endif /* _WANGDAO_BOOK_CODES_TYPES_H_ */