#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerGroup;
// clang-format on

struct ActorAnimationControllerGroupParseMetaData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorAnimationControllerGroup*> mActorAnimationControllerGroup;
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion>              mCurrentCommandVersion;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ActorAnimationControllerGroupParseMetaData();
#else // @header-generator platform
#endif // @header-generator platform
};
