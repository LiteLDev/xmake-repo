#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackAccessStrategy;
class PackWriteStrategy;
// clang-format on

struct PackAccessStrategies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackAccessStrategy>> mRead;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackWriteStrategy>>  mWrite;
    // NOLINTEND

public:
    // prevent constructor by default
    PackAccessStrategies& operator=(PackAccessStrategies const&);
    PackAccessStrategies(PackAccessStrategies const&);
    PackAccessStrategies();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackAccessStrategies();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
