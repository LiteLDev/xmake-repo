#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::WhiskerLists {

struct ScopeEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::string_view> mIndentation;
    ::ll::TypedStorage<8, 16, std::string_view> mLookup;
    ::ll::TypedStorage<8, 16, std::string_view> mDisplayOverride;
    // NOLINTEND
};

} // namespace Bedrock::Profiling::WhiskerLists
