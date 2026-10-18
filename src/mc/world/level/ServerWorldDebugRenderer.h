#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DimensionManager;
class GameplayUserManager;
class IOptionsReader;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class ServerWorldDebugRenderer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                      mDimensionManager;
    ::ll::UntypedStorage<8, 24>                                      mGameplayUserManager;
    ::ll::UntypedStorage<8, 8>                                       mServerWorldDebugRenderProxy;
    ::ll::TypedStorage<8, 16, std::shared_ptr<const IOptionsReader>> mOptions;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkc0efab;
    ::ll::UntypedStorage<8, 24> mUnk3d1147;
    ::ll::UntypedStorage<8, 8>  mUnk43cfc1;
    ::ll::UntypedStorage<8, 16> mUnk664126;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ServerWorldDebugRenderer& operator=(ServerWorldDebugRenderer const&);
    ServerWorldDebugRenderer(ServerWorldDebugRenderer const&);
    ServerWorldDebugRenderer();
#endif // @header-generator platform
};
