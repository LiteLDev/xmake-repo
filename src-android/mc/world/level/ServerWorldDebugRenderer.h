#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DimensionManager;
class GameplayUserManager;
class IOptionsReader;
// clang-format on

class ServerWorldDebugRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                      mDimensionManager;
    ::ll::UntypedStorage<8, 24>                                      mGameplayUserManager;
    ::ll::UntypedStorage<8, 8>                                       mServerWorldDebugRenderProxy;
    ::ll::TypedStorage<8, 16, std::shared_ptr<const IOptionsReader>> mOptions;
    // NOLINTEND
};
