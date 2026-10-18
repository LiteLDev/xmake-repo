#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BiomeFilterGroup.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

struct PossibleTransformation {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::pair<const Biome*, uint>>> mTransformsInto;
    ::ll::TypedStorage<8, 64, ::BiomeFilterGroup>                         mCondition;
    ::ll::TypedStorage<4, 4, uint>                                        mMinPassingNeighbors;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::Biome const*, uint>>> mTransformsInto;
    ::ll::TypedStorage<8, 64, ::BiomeFilterGroup>                               mCondition;
    ::ll::TypedStorage<4, 4, uint>                                              mMinPassingNeighbors;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PossibleTransformation& operator=(PossibleTransformation const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PossibleTransformation();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~PossibleTransformation();
#else // @header-generator platform
    MCAPI PossibleTransformation(::PossibleTransformation const&);
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
    MCAPI void* $ctor(::PossibleTransformation const&);
#endif // @header-generator platform
    // NOLINTEND
};
