#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::WhiskerLists {

struct ScopeEntry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::string_view> mIndentation;
    ::ll::TypedStorage<8, 16, std::string_view> mLookup;
    ::ll::TypedStorage<8, 16, std::string_view> mDisplayOverride;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkfb7fbb;
    ::ll::UntypedStorage<8, 16> mUnkfa95ab;
    ::ll::UntypedStorage<8, 16> mUnk9330ed;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScopeEntry& operator=(ScopeEntry const&);
    ScopeEntry(ScopeEntry const&);
    ScopeEntry();
#endif // @header-generator platform
};

} // namespace Bedrock::Profiling::WhiskerLists
