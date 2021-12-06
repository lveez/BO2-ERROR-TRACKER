/*
Contains addresses for useful values
*/

#ifndef ADDRESSES_H
#define ADDRESSES_H

/*
assembly for getting next free parent variable index:
mov ebx, dword ptr [2dea400]
mov esi, dword ptr [ebx + 0x2]
*/
typedef struct
{
    const unsigned int ptr;
    const unsigned char next_offset;
} ParentVar;

/*
assembly for getting next free child variable index:
mov edi, dword ptr [2dea580]
mov esi, dword ptr [esi + 0x4]
*/
typedef struct  
{
    const unsigned int ptr;
    const unsigned char next_offset;
} ChildVar;

// next free animinfo index is just stored in memory statically
typedef struct
{
    const unsigned int next;
} AnimInfo;

typedef struct
{
    ParentVar parent_var;
    ChildVar child_var;
    AnimInfo anim_info;
    unsigned int num_snapshot_entities;
    unsigned int num_entities;
} Addresses;

Addresses InitAddresses();

#endif