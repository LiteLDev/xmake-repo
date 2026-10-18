#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/systems/ComponentInfo.h"
#include "mc/deps/ecs/systems/SystemInfo.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
struct ComponentInfo;
struct SystemInfo;
#endif // @header-generator platform
// clang-format on

struct EntitySystemsInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                mName;
    ::ll::TypedStorage<8, 24, std::vector<SystemInfo>>    mGameSystems;
    ::ll::TypedStorage<8, 24, std::vector<ComponentInfo>> mAllKnownComponents;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                  mName;
    ::ll::TypedStorage<8, 24, ::std::vector<::SystemInfo>>    mGameSystems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ComponentInfo>> mAllKnownComponents;
#endif // @header-generator platform
    // NOLINTEND
};
