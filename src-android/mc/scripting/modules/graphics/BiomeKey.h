#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
// clang-format on

namespace ScriptModuleServerGraphics {

struct BiomeKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerLevel const*>        level;
    ::ll::TypedStorage<8, 24, std::string>                biomeId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> playerId;
    // NOLINTEND
};

} // namespace ScriptModuleServerGraphics
