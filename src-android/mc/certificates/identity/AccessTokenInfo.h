#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AccessTokenInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> email;
    ::ll::TypedStorage<8, 8, long>         expiration;
    // NOLINTEND

public:
    // prevent constructor by default
    AccessTokenInfo& operator=(AccessTokenInfo const&);
    AccessTokenInfo(AccessTokenInfo const&);
};
