#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PathfinderNode;
// clang-format on

class BinaryHeap {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<PathfinderNode*>> heap;
    ::ll::TypedStorage<4, 4, int>                           sizeVar;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkbb48fa;
    ::ll::UntypedStorage<4, 4>  mUnkb6697e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BinaryHeap& operator=(BinaryHeap const&);
    BinaryHeap(BinaryHeap const&);
    BinaryHeap();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void changeCost(::PathfinderNode*, float);
#else // @header-generator platform
    MCNAPI void changeCost(::PathfinderNode* node, float newCost);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clear();
#else // @header-generator platform
    MCNAPI ::PathfinderNode* insert(::PathfinderNode* node);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PathfinderNode* insert(::PathfinderNode*);
#else // @header-generator platform
    MCNAPI ~BinaryHeap();
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isEmpty();

    MCNAPI ::PathfinderNode* pop();
#else // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
