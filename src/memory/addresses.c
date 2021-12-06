#include "addresses.h"

Addresses InitAddresses()
{
    ParentVar parent_var = {0x2dea400, // parent_var.ptr
                            0x2}; // parent_var.next_offset
    ChildVar child_var = {0x2dea580, // child_var.ptr
                          0x4}; // child_var.next_offset
    AnimInfo anim_info = {0x2b3f14a}; // anim_info.next
    unsigned int num_snapshot_entities = 0x1278020;
    unsigned int num_entities = 0x1278010;

    Addresses addresses = {parent_var, child_var, anim_info, num_snapshot_entities, num_entities};
    return addresses;
}