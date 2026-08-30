#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DDUI::PathUtility {

struct PathQueryError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         parsingError;
    ::ll::TypedStorage<8, 24, std::string> message;
    // NOLINTEND

public:
    // prevent constructor by default
    PathQueryError& operator=(PathQueryError const&);
    PathQueryError();
};

} // namespace Bedrock::DDUI::PathUtility
