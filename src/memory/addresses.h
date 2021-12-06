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
    const unsigned int ptr = 0x2dea400;
    const unsigned char next_offset = 0x2;
} ParentVar;

/*
assembly for getting next free child variable index:
mov edi, dword ptr [2dea580]
mov esi, dword ptr [esi + 0x4]
*/
typedef struct  
{
    const unsigned int ptr = 0x2dea580;
    const unsigned char next_offset = 0x4;
} ChildVar;

// next free animinfo index is just stored in memory statically
typedef struct
{
    const unsigned int next = 0x2b3f14a;
} AnimInfo;

struct Addresses
{
    ParentVar parent_var;
    ChildVar child_var;
    AnimInfo anim_info;
    unsigned int num_snapshot_entities = 0x1278020;
    unsigned int num_entities = 0x1278010;
};

#endif