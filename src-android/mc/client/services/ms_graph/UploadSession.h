#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MSGraph::Models {

struct UploadSession {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              uploadUrl;
    ::ll::TypedStorage<8, 24, std::string>              expirationDateTime;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> nextExpectedRanges;
    // NOLINTEND
};

} // namespace MSGraph::Models
