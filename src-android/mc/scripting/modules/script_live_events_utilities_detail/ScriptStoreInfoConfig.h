#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptLiveEventsUtilitiesDetail {

struct ScriptStoreInfoConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mStoreId;
    ::ll::TypedStorage<8, 24, std::string> mStoreName;
    // NOLINTEND
};

} // namespace ScriptLiveEventsUtilitiesDetail
