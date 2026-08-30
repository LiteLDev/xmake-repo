#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/PackInstanceId.h"

// auto generated forward declare list
// clang-format off
class ResourcePackStack;
// clang-format on

namespace LocalServerLauncher {

struct PackStackPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<PackInstanceId>>       mResourcePacks;
    ::ll::TypedStorage<8, 24, std::vector<PackInstanceId>>       mBehaviorPacks;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ResourcePackStack>> mResourceStack;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ResourcePackStack>> mBehaviorStack;
    // NOLINTEND
};

} // namespace LocalServerLauncher
