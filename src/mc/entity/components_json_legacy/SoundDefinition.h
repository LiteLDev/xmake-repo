#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"

class SoundDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>      mSoundEvent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>    mSoundEvent;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mCondition;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};
