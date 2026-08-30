#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MSGraph::Models {

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

} // namespace MSGraph::Models
