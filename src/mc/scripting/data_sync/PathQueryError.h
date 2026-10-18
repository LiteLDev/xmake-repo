#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DDUI::PathUtility {

struct PathQueryError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>         parsingError;
    ::ll::TypedStorage<8, 24, std::string> message;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>           parsingError;
    ::ll::TypedStorage<8, 32, ::std::string> message;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PathQueryError& operator=(PathQueryError const&);
    PathQueryError();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Bedrock::DDUI::PathUtility
