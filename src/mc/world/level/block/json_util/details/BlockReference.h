#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/CompoundTag.h"

namespace JsonUtil::details {

struct BlockReference {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>   mBlockType;
    ::ll::TypedStorage<8, 32, ::CompoundTag> mStates;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mBlockType;
    ::ll::TypedStorage<8, 24, ::CompoundTag> mStates;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~BlockReference();
#else // @header-generator platform
    MCAPI ~BlockReference();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace JsonUtil::details
