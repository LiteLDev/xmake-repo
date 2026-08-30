#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityId;
// clang-format on

struct CameraActivationEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>            mNewActiveCamera;
    ::ll::TypedStorage<4, 4, ::EasingType> mEasingType;
    ::ll::TypedStorage<4, 4, float>        mEasingTime;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraActivationEvent& operator=(CameraActivationEvent const&);
};
