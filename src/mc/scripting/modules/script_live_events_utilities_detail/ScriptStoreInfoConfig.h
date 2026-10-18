#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptLiveEventsUtilitiesDetail {

struct ScriptStoreInfoConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mStoreId;
    ::ll::TypedStorage<8, 24, std::string> mStoreName;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkc0b7df;
    ::ll::UntypedStorage<8, 32> mUnk445052;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptStoreInfoConfig& operator=(ScriptStoreInfoConfig const&);
    ScriptStoreInfoConfig(ScriptStoreInfoConfig const&);
    ScriptStoreInfoConfig();
#endif // @header-generator platform
};

} // namespace ScriptLiveEventsUtilitiesDetail
