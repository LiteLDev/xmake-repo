#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MSGraph::Models {

struct DownloadUrlInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> downloadUrl;
    ::ll::TypedStorage<8, 24, std::string> cTag;
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::TypedStorage<8, 8, ulong>        size;
    // NOLINTEND
};

} // namespace MSGraph::Models
