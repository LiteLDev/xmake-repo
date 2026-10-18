#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/persona/multiplayer/AppearanceProcessingRequestHandle.h"
#include "mc/world/actor/player/SerializedSkinRef.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace persona::multiplayer {

#if defined(LL_PLAT_A) // @header-generator platform
class AppearanceProcessingRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::SerializedSkinRef>                                       mSkin;
    ::ll::TypedStorage<8, 24, ::persona::multiplayer::AppearanceProcessingRequestHandle> mHandle;
    // NOLINTEND
};
#else // @header-generator platform
class AppearanceProcessingRequest {};
#endif // @header-generator platform

} // namespace persona::multiplayer
