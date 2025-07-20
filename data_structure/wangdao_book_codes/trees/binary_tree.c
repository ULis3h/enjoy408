#include <stdio.h>

#include "common/utils.h"
#include "binary_tree.h"

void InOrderThreading(ThreadTree *T, ThreadTree *pre) {

    if (T) {
        ThreadTree dereferenceT = *T;
        ThreadTree dereferencePre = *pre;

        InOrderThreading(UNIVERSAL_CAST(ThreadNode**, &dereferenceT->base.lchild), pre);
        
        if(dereferenceT->base.lchild == NULL) {
            dereferenceT->base.lchild = UNIVERSAL_CAST(BiTNode*, pre);
            dereferenceT->ltag = 1;
        }

        if(dereferencePre != NULL && dereferencePre->base.rchild == NULL) {
            dereferencePre->base.rchild = UNIVERSAL_CAST(BiTNode*, T);
            dereferencePre->rtag = 1;
        }
        
        *pre = dereferenceT;
        InOrderThreading(UNIVERSAL_CAST(ThreadNode**, &dereferenceT->base.rchild), pre);
    }

}

void CreateInOrderThread(ThreadTree *T) {
    ThreadTree pre = NULL;
    
    if(T) {
        InOrderThreading(T, &pre);
        pre->base.rchild = NULL;
        pre->rtag = 1;
    }
}

ThreadNode* ThreadFirstNode(ThreadNode *T) {
    if(T) {
        while(T->ltag == 0) {
            T = UNIVERSAL_CAST(ThreadNode*, T->base.lchild);
        }
    }
    return T;
}

ThreadNode* ThreadNextNode(ThreadNode *T) {
    if(T) {
        if(T->rtag == 0) {
            return ThreadFirstNode(UNIVERSAL_CAST(ThreadNode*, T->base.rchild));
        } else {
            return UNIVERSAL_CAST(ThreadNode*, T->base.rchild);
        }
    }
    return NULL;
}

ThreadNode* ThreadLastNode(ThreadNode *T) {
    if(T) {
        /** Always looking for the right child. */
        while(T->rtag == 0) {
            T = UNIVERSAL_CAST(ThreadNode*, T->base.rchild);
        }
    }
    return T;
}
ThreadNode* ThreadPreNode(ThreadNode *T) {
    if(T) {
        if(T->ltag == 0) {
            return ThreadLastNode(UNIVERSAL_CAST(ThreadNode*, T->base.lchild));
        } else {
            return UNIVERSAL_CAST(ThreadNode*, T->base.lchild);
        }
    }
    return NULL;
}