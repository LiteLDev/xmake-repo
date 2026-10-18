#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"
#else // @header-generator platform
#endif // @header-generator platform

struct DynamicAmbientSound {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mCondition;
    ::ll::TypedStorage<8, 24, std::string>      mSoundEventName;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkd64ba9;
    ::ll::UntypedStorage<8, 32> mUnk5375d2;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DynamicAmbientSound();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    DynamicAmbientSound& operator=(DynamicAmbientSound const&);
    DynamicAmbientSound(DynamicAmbientSound const&);
    DynamicAmbientSound();
#endif // @header-generator platform
};
