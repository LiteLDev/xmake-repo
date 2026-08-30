#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"

struct DynamicAmbientSound {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mCondition;
    ::ll::TypedStorage<8, 24, std::string>      mSoundEventName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DynamicAmbientSound();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
