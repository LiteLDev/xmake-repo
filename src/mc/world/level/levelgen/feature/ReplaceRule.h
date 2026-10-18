#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"

struct ReplaceRule {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>           mBlock;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mMayReplace;
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>               mBlock;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mMayReplace;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ReplaceRule& operator=(ReplaceRule const&);
#else // @header-generator platform
    ReplaceRule();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ReplaceRule();
#else // @header-generator platform
    MCAPI ReplaceRule(::BlockDescriptor block, ::std::vector<::BlockDescriptor> mayReplace);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::BlockDescriptor block, ::std::vector<::BlockDescriptor> mayReplace);
#endif // @header-generator platform
    // NOLINTEND
};
