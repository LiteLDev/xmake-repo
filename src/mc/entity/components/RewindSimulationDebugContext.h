#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/ecs/strict/StrictEntityContext.h"
#else // @header-generator platform
#endif // @header-generator platform

struct RewindSimulationDebugContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, ::StrictEntityContext> mLiveEntity;
    ::ll::TypedStorage<4, 8, ::StrictEntityContext> mRewindEntity;
    ::ll::TypedStorage<8, 24, std::string>          mActorIdentifier;
    ::ll::TypedStorage<8, 8, ulong>                 mLiveTick;
    ::ll::TypedStorage<8, 8, ulong>                 mRewindTick;
    ::ll::TypedStorage<8, 8, ulong>                 mRewindBegin;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 8>  mUnk914897;
    ::ll::UntypedStorage<4, 8>  mUnke42563;
    ::ll::UntypedStorage<8, 32> mUnkad61de;
    ::ll::UntypedStorage<8, 8>  mUnk6b3617;
    ::ll::UntypedStorage<8, 8>  mUnkfb34da;
    ::ll::UntypedStorage<8, 8>  mUnkd25aa8;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RewindSimulationDebugContext& operator=(RewindSimulationDebugContext const&);
    RewindSimulationDebugContext(RewindSimulationDebugContext const&);
    RewindSimulationDebugContext();
#endif // @header-generator platform
};
