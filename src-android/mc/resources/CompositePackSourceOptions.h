#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackSourceOptions.h"

// auto generated forward declare list
// clang-format off
class PackSource;
// clang-format on

struct CompositePackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PackSourceOptions>       mBase;
    ::ll::TypedStorage<8, 24, std::vector<PackSource*>> mPackSources;
    // NOLINTEND

public:
    // prevent constructor by default
    CompositePackSourceOptions& operator=(CompositePackSourceOptions const&);
    CompositePackSourceOptions(CompositePackSourceOptions const&);
    CompositePackSourceOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CompositePackSourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
