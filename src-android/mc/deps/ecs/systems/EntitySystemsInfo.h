#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ComponentInfo.h"
#include "mc/deps/ecs/systems/SystemInfo.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct EntitySystemsInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                mName;
    ::ll::TypedStorage<8, 24, std::vector<SystemInfo>>    mGameSystems;
    ::ll::TypedStorage<8, 24, std::vector<ComponentInfo>> mAllKnownComponents;
    // NOLINTEND
};
