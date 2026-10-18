#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/SerializedSkinRef.h"

class SkinProcessingRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>         mPlayerId;
    ::ll::TypedStorage<8, 16, ::SerializedSkinRef> mSkin;
    ::ll::TypedStorage<4, 4, uint>                 mRequestId;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinProcessingRequest();
};
#else // @header-generator platform
class SkinProcessingRequest {};
#endif // @header-generator platform
