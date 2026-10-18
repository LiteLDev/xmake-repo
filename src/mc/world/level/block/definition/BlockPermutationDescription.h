#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/level/block/definition/BlockComponentGroupDescription.h"

struct BlockPermutationDescription {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                 mCondition;
    ::ll::TypedStorage<8, 88, ::BlockComponentGroupDescription> mComponents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockPermutationDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                  mCondition;
    ::ll::TypedStorage<8, 112, ::BlockComponentGroupDescription> mComponents;
#endif // @header-generator platform
    // NOLINTEND
};
