#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/EntityId.h"
#endif // @header-generator platform
#include "mc/deps/game_refs/WeakRef.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class EntityId;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct CameraActivationEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>            mNewActiveCamera;
    ::ll::TypedStorage<4, 4, ::EasingType> mEasingType;
    ::ll::TypedStorage<4, 4, float>        mEasingTime;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityId>> mNewActiveCamera;
    ::ll::TypedStorage<4, 4, ::EasingType>           mEasingType;
    ::ll::TypedStorage<4, 4, float>                  mEasingTime;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CameraActivationEvent& operator=(CameraActivationEvent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
