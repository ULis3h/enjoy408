#ifndef STATUS_H
#define STATUS_H

typedef enum {
    OK = 1,
    ERROR = 0,
    OVERFLOW = -1,
    UNDERFLOW = -2,
    NOT_FOUND = -3,
    INFEASIBLE = -4,
    INVALID = -5,
    DUPLICATE = -6
} Status;

#endif // STATUS_H
