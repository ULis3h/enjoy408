/**
 * @file binary_tree.h
 * @brief Binary tree implementation based on Wang Dao Data Structure textbook
 * @details This file contains the structure definitions and function declarations
 *          for binary tree operations, including creation, traversal, and other
 *          common binary tree algorithms.
 * @author 0x1a
 * @date July 20, 2025
 * @version 1.0
 */

#ifndef _WANGDAO_BOOK_CODES_BINARY_TREE_H_
#define _WANGDAO_BOOK_CODES_BINARY_TREE_H_

/** Note: Header files should only be used for definitions, 
 *  therefore utils.h and similar headers should not be included here */
#include "common/types.h"


/**
 * @brief Binary tree node structure
 */
typedef struct BiTNode {
    int data;                   /* Node data element */
    struct BiTNode *lchild;     /* Pointer to left child */
    struct BiTNode *rchild;     /* Pointer to right child */
} BiTNode, *BiTree;


typedef struct ThreadNode {
    BiTNode base;

    /** Threaded binary tree node structure
     *  ltag and rtag are used to determine whether the left and right children are threaded.
     *  warn: when your computer is little endian, the ltag and rtag will be reversed!!!.
     */
    ubyte ltag : 1 /* left tag */;

    ubyte rtag : 1 /* right tag */;
} ThreadNode, *ThreadTree;


/* Function declarations will be added here */

/** use in-order traversal to thread the binary tree */
/** warn: wangdao book writing error c language  prohibited use references parameters */
/**
 * @brief In-order threading of a binary tree
 * @param T Pointer to the root node of the binary tree, read-only
 * @param pre Pointer to the previous node in the in-order traversal, read-write
 */
void InOrderThreading(ThreadTree *T, ThreadTree *pre);

/** create the thread binary tree */
/**
 * @brief Create a thread binary tree
 * @param T Pointer to the root node of the thread binary tree, read-write
 */
void CreateInOrderThread(ThreadTree *T);

/** find first node in a thread binary tree */
/**
 * @brief Find the first node in a thread binary tree
 * @param T Pointer to the root node of the thread binary tree, read-only
 * @return Pointer to the first node in the thread binary tree
 */
ThreadNode* ThreadFirstNode(ThreadNode *T);

/** find next node in a thread binary tree */
/**
 * @brief Find the next node in a thread binary tree
 * @param T Pointer to the current node in the thread binary tree, read-only
 * @return Pointer to the next node in the thread binary tree
 */
ThreadNode* ThreadNextNode(ThreadNode *T);

/** find last node in a thread binary tree */
/**
 * @brief Find the last node in a thread binary tree
 * @param T Pointer to the root node of the thread binary tree, read-only
 * @return Pointer to the last node in the thread binary tree
 */
ThreadNode* ThreadLastNode(ThreadNode *T);

/** find previous node in a thread binary tree */
/**
 * @brief Find the previous node in a thread binary tree
 * @param T Pointer to the current node in the thread binary tree, read-only
 * @return Pointer to the previous node in the thread binary tree
 */
ThreadNode* ThreadPreNode(ThreadNode *T);


#endif /* _WANGDAO_BOOK_CODES_BINARY_TREE_H_ */