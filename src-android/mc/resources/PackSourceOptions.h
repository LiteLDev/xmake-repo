#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IPackIOProvider;
// clang-format on

struct PackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<IPackIOProvider>> mIO;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSourceOptions& operator=(PackSourceOptions const&);
    PackSourceOptions(PackSourceOptions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackSourceOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
