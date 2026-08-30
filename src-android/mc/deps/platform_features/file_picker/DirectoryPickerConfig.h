#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class DirectoryPickerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::string_view> mStartingLocationURI;
    ::ll::TypedStorage<8, 16, std::string_view> mCustomPrompt;
    // NOLINTEND
};

} // namespace Bedrock
