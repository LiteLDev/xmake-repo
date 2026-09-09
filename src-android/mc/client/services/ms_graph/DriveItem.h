#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MSGraph::Models {

struct DriveItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> cTag;
    ::ll::TypedStorage<8, 24, std::string> eTag;
    ::ll::TypedStorage<8, 24, std::string> id;
    ::ll::TypedStorage<8, 24, std::string> createdDateTime;
    ::ll::TypedStorage<8, 24, std::string> lastModifiedDateTime;
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::TypedStorage<8, 24, std::string> webUrl;
    ::ll::TypedStorage<8, 24, std::string> userId;
    ::ll::TypedStorage<4, 4, uint>         size;
    // NOLINTEND
};

} // namespace MSGraph::Models
