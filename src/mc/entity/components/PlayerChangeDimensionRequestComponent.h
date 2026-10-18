#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChangeDimensionRequest.h"

struct PlayerChangeDimensionRequestComponent {
public:
    // PlayerChangeDimensionRequestComponent inner types define
    enum class State : uchar {
        AwaitingECSTick     = 0,
        ECSTransferComplete = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::PlayerChangeDimensionRequestComponent::State> mState;
    ::ll::TypedStorage<8, 48, ::ChangeDimensionRequest>                      mRequest;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerChangeDimensionRequestComponent& operator=(PlayerChangeDimensionRequestComponent const&);
    PlayerChangeDimensionRequestComponent(PlayerChangeDimensionRequestComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
