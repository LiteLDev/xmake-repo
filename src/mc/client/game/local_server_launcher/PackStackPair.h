#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/PackInstanceId.h"

// auto generated forward declare list
// clang-format off
class ResourcePackStack;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace LocalServerLauncher {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct PackStackPair {};
#endif // @header-generator platform

} // namespace LocalServerLauncher
