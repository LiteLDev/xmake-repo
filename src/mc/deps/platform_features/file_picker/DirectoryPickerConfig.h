#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

#if defined(LL_PLAT_A) // @header-generator platform
class DirectoryPickerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::string_view> mStartingLocationURI;
    ::ll::TypedStorage<8, 16, std::string_view> mCustomPrompt;
    // NOLINTEND
};
#else // @header-generator platform
class DirectoryPickerConfig {};
#endif // @header-generator platform

} // namespace Bedrock
