#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/image/Image.h"
#include "mc/world/actor/player/SerializedSkinRef.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
// clang-format on

struct QueuedSkinUpdate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<IClientInstance>> mClient;
    ::ll::TypedStorage<8, 16, ::SerializedSkinRef const>      mSkin;
    ::ll::TypedStorage<8, 48, ::mce::Image>                   mImage;
    ::ll::TypedStorage<8, 48, ::mce::Image>                   mCapeImage;
    ::ll::UntypedStorage<8, 48>                               mGeoFinishedCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    QueuedSkinUpdate();
};
