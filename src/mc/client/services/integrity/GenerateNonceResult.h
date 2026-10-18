#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct GenerateNonceResult {};
#endif // @header-generator platform
