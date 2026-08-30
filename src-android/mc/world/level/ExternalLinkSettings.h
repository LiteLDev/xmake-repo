#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExternalLinkSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> url;
    ::ll::TypedStorage<8, 24, std::string> displayName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ExternalLinkSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
