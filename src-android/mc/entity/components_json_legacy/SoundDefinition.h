#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"

class SoundDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>      mSoundEvent;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mCondition;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundDefinition& operator=(SoundDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SoundDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
