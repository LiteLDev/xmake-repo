#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MSGraph::Models {

#if defined(LL_PLAT_A) // @header-generator platform
struct GraphError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                        status;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> fullError;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> errorCode;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> errorMessage;
    // NOLINTEND
};
#else // @header-generator platform
struct GraphError {};
#endif // @header-generator platform

} // namespace MSGraph::Models
