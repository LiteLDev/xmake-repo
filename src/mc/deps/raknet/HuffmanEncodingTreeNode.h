#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HuffmanEncodingTreeNode {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar>                      value;
    ::ll::TypedStorage<4, 4, uint>                       weight;
    ::ll::TypedStorage<8, 8, ::HuffmanEncodingTreeNode*> left;
    ::ll::TypedStorage<8, 8, ::HuffmanEncodingTreeNode*> right;
    ::ll::TypedStorage<8, 8, ::HuffmanEncodingTreeNode*> parent;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnkc85f93;
    ::ll::UntypedStorage<4, 4> mUnk175ff4;
    ::ll::UntypedStorage<8, 8> mUnkf7677f;
    ::ll::UntypedStorage<8, 8> mUnk87f18d;
    ::ll::UntypedStorage<8, 8> mUnkc44ffc;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    HuffmanEncodingTreeNode& operator=(HuffmanEncodingTreeNode const&);
    HuffmanEncodingTreeNode(HuffmanEncodingTreeNode const&);
    HuffmanEncodingTreeNode();
#endif // @header-generator platform
};
