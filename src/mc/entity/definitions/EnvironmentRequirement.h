#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class BlockDescriptor;
// clang-format on
#endif // @header-generator platform

struct EnvironmentRequirement {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mBlockTypes;
    ::ll::TypedStorage<4, 4, uint>                          mNumBlocksRequired;
    ::ll::TypedStorage<4, 4, uint>                          mSearchRadius;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk43318f;
    ::ll::UntypedStorage<4, 4>  mUnkf24b2c;
    ::ll::UntypedStorage<4, 4>  mUnkaa15da;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EnvironmentRequirement& operator=(EnvironmentRequirement const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    EnvironmentRequirement(EnvironmentRequirement const&);
    EnvironmentRequirement();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addBlockDescriptor(::BlockDescriptor const&);

    MCNAPI ~EnvironmentRequirement();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void addBlockDescriptor(::BlockDescriptor const& blockDescriptor);
#endif // @header-generator platform
    // NOLINTEND
};
