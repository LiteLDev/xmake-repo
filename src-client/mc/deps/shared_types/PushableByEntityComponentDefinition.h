#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/PushableByEntityPreset.h"
#include "mc/deps/shared_types/v1_26_20/actor/PushableByEntityComponentDefinition.h"

namespace SharedTypes::v1_26_40 {

struct PushableByEntityComponentDefinition : public ::SharedTypes::v1_26_20::PushableByEntityComponentDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_40::PushableByEntityPreset>> mPresets;
    ::ll::TypedStorage<1, 1, bool>                                                        mUseDefaultWithOverlapCheck;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
