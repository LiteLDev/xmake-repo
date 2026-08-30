#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IntegrityTokenResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>> token;
    ::ll::TypedStorage<8, 24, std::string>                errorMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    IntegrityTokenResult& operator=(IntegrityTokenResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~IntegrityTokenResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
