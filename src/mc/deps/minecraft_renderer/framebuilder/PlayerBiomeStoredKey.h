#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder::gamecomponents {

#if defined(LL_PLAT_A) // @header-generator platform
struct PlayerBiomeStoredKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>> PlayerId;
    ::ll::TypedStorage<8, 24, std::string>                BiomeId;
    // NOLINTEND
};
#else // @header-generator platform
struct PlayerBiomeStoredKey {};
#endif // @header-generator platform

} // namespace mce::framebuilder::gamecomponents
