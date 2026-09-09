#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MockableOwnedBlockSource.h"

// auto generated forward declare list
// clang-format off
class IBlockSource;
// clang-format on

class LocalSpatialEntityFetcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 288, ::MockableOwnedBlockSource> mBlockSource;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalSpatialEntityFetcher& operator=(LocalSpatialEntityFetcher const&);
};
