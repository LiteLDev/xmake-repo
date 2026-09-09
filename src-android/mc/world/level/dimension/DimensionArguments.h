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
    ::ll::UntypedStorage<8, 96>                      mDerived;
    ::ll::TypedStorage<4, 4, ::DimensionType>        mDimId;
    ::ll::TypedStorage<2, 4, ::DimensionHeightRange> mHeightRange;
    ::ll::TypedStorage<8, 24, std::string>           mName;
    ::ll::UntypedStorage<8, 32>                      mTypeId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DimensionArguments();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
