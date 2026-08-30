#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterInput.h"

struct FilterInputDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::FilterInput> mInput;
    ::ll::TypedStorage<8, 24, std::string>   mDescription;
    // NOLINTEND

public:
    // prevent constructor by default
    FilterInputDefinition& operator=(FilterInputDefinition const&);
    FilterInputDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FilterInputDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
