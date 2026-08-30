#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"

struct PackMaps {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<PackType, std::string> const> mToString;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, PackType> const> mFromString;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackMaps();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
