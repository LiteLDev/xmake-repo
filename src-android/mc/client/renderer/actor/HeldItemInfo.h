#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"

struct HeldItemInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mScale;
    ::ll::TypedStorage<1, 1, bool>              mIgnoresLighting;
    // NOLINTEND

public:
    // prevent constructor by default
    HeldItemInfo& operator=(HeldItemInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~HeldItemInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
