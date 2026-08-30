#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HuffmanEncodingTreeNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                      value;
    ::ll::TypedStorage<4, 4, uint>                       weight;
    ::ll::TypedStorage<8, 8, ::HuffmanEncodingTreeNode*> left;
    ::ll::TypedStorage<8, 8, ::HuffmanEncodingTreeNode*> right;
    ::ll::TypedStorage<8, 8, ::HuffmanEncodingTreeNode*> parent;
    // NOLINTEND
};
