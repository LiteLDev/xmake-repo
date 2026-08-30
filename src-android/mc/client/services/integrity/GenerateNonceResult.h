#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GenerateNonceResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>> token;
    ::ll::TypedStorage<4, 4, int>                         responseCode;
    // NOLINTEND

public:
    // prevent constructor by default
    GenerateNonceResult& operator=(GenerateNonceResult const&);
};
