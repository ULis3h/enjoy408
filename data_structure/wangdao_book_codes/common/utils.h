/**
 * @file utils.h
 * @brief Utility macros and functions for Wang Dao Data Structure implementations
 * @details This file contains utility macros, type casts, and common helper functions
 *          used across different data structure implementations.
 * @author 0x1a
 * @date July 20, 2025
 * @version 1.0
 */

#ifndef _WANGDAO_BOOK_CODES_UTILS_H_
#define _WANGDAO_BOOK_CODES_UTILS_H_

/**
 * @brief Universal type casting macro
 * @details This macro can cast any data type to any other data type safely.
 *          It provides better readability and helps to identify type casts in the code.
 * @param target_type The type to cast to
 * @param expr The expression to be cast
 * @return The expr cast to target_type
 */
#define UNIVERSAL_CAST(target_type, expr) ((target_type)(expr))

/**
 * @brief Container of macro - finds the containing structure from a member pointer
 * @details This is useful when you have a pointer to a member within a struct
 *          and want to get the pointer to the containing struct.
 * @param ptr Pointer to the member
 * @param type Type of the containing structure
 * @param member Name of the member within the structure
 * @return Pointer to the containing structure
 */
#define CONTAINER_OF(ptr, type, member) \
    UNIVERSAL_CAST(type*, (UNIVERSAL_CAST(char*, (ptr)) - offsetof(type, member)))

#endif //! _WANGDAO_BOOK_CODES_UTILS_H_