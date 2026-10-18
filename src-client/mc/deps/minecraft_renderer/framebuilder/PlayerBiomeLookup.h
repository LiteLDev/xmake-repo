#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder::gamecomponents {

struct PlayerBiomeLookup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::optional<std::string_view>> PlayerId;
    ::ll::TypedStorage<8, 16, std::string_view>                BiomeId;
    // NOLINTEND
};

} // namespace mce::framebuilder::gamecomponents
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
