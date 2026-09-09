#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder::gamecomponents {

struct PlayerBiomeStoredKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>> PlayerId;
    ::ll::TypedStorage<8, 24, std::string>                BiomeId;
    // NOLINTEND
};

} // namespace mce::framebuilder::gamecomponents
