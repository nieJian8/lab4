/**************************************************************************************************/  
/* Copyright  (C) nieJian, sa517258@mail.ustc.edu.cn                                              */  
/* FILE NAME             :  linktable.h                                                            */  
/* PRINCIPAL AUTHOR      :  neiJian                                                               */    
/* DATE OF FIRST RELEASE :  2017/10/11                                                             */  
/* DESCRIPTION           :  linklist for menu progrom                                             */  
/**************************************************************************************************/  
  
/* 
 * Revision log: 
 *  
 * Created by nieJian, 2017/10/11 
 * 
 */  
 
#ifndef LINKTABLE_H
#define LINKTABLE_H
#define SUCCESS 0
#define FAILURE -1

typedef struct LinkNode
{
    struct LinkNode *Next;
}tLinkNode;

typedef struct LinkTable
{
    tLinkNode *Head;
    tLinkNode *Tail;
    int num;
}tLinkTable;
tLinkTable* CreatLinkTable();
int DelLinkTable(tLinkTable *pLinkTable);
int AddLinkNode(tLinkTable *pLinkTable,tLinkNode* pNode);
int DelLinkNode(tLinkTable *pLinkTable,tLinkNode* pNode);
tLinkNode* GetHeadNode(tLinkTable* pLinkTable);
tLinkNode* GetTailNode(tLinkTable* pLinkTable);
tLinkNode* GetNextNode(tLinkTable* pLinkTable,tLinkNode *pNode);

#endif
