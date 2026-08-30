#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"

struct InvalidPacksFilterGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<PackType>> packFilters;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InvalidPacksFilterGroup();

    MCNAPI ::InvalidPacksFilterGroup& addFilter(::PackType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
