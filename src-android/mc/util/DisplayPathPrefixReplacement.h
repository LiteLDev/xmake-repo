#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PlatformUtils {

struct DisplayPathPrefixReplacement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>      mPathPrefix;
    ::ll::TypedStorage<8, 16, std::string_view> mDisplayToken;
    // NOLINTEND
};

} // namespace Bedrock::PlatformUtils
