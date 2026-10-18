#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MSGraph::Models {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct DownloadUrlInfo {};
#endif // @header-generator platform

} // namespace MSGraph::Models
