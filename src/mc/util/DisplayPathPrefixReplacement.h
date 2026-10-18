#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PlatformUtils {

struct DisplayPathPrefixReplacement {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>      mPathPrefix;
    ::ll::TypedStorage<8, 16, std::string_view> mDisplayToken;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk26fa92;
    ::ll::UntypedStorage<8, 16> mUnk11cbc8;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DisplayPathPrefixReplacement& operator=(DisplayPathPrefixReplacement const&);
    DisplayPathPrefixReplacement(DisplayPathPrefixReplacement const&);
    DisplayPathPrefixReplacement();
#endif // @header-generator platform
};

} // namespace Bedrock::PlatformUtils
