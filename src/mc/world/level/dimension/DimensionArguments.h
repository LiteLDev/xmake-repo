#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/DerivedDimensionArguments.h"
#include "mc/world/level/dimension/DimensionHeightRange.h"
#include "mc/world/level/dimension/DimensionType.h"

struct DimensionArguments {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 96>                      mDerived;
    ::ll::TypedStorage<4, 4, ::DimensionType>        mDimId;
    ::ll::TypedStorage<2, 4, ::DimensionHeightRange> mHeightRange;
    ::ll::TypedStorage<8, 24, std::string>           mName;
    ::ll::UntypedStorage<8, 32>                      mTypeId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 80, ::DerivedDimensionArguments> mDerived;
    ::ll::TypedStorage<4, 4, ::DimensionType>              mDimId;
    ::ll::TypedStorage<2, 4, ::DimensionHeightRange>       mHeightRange;
    ::ll::TypedStorage<8, 32, ::std::string>               mName;
    ::ll::TypedStorage<8, 32, ::std::string>               mTypeId;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~DimensionArguments();
#else // @header-generator platform
    MCAPI ~DimensionArguments();
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
