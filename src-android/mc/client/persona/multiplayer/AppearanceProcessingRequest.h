#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/multiplayer/AppearanceProcessingRequestHandle.h"
#include "mc/world/actor/player/SerializedSkinRef.h"

namespace persona::multiplayer {

class AppearanceProcessingRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::SerializedSkinRef>                                       mSkin;
    ::ll::TypedStorage<8, 24, ::persona::multiplayer::AppearanceProcessingRequestHandle> mHandle;
    // NOLINTEND
};

} // namespace persona::multiplayer
