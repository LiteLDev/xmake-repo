#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/strict/StrictEntityContext.h"
#include "mc/world/phys/AABB.h"
#else // @header-generator platform
#endif // @header-generator platform

struct CameraAimAssistEntityTargetComponent {
public:
    // CameraAimAssistEntityTargetComponent inner types declare
    // clang-format off
    struct EntityStatus;
    // clang-format on

    // CameraAimAssistEntityTargetComponent inner types define
    struct EntityStatus {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 24, ::AABB>               mHitBox;
        ::ll::TypedStorage<4, 12, ::Vec3>               mPosition;
        ::ll::TypedStorage<4, 4, float>                 mPriorityPercentage;
        ::ll::TypedStorage<4, 8, ::StrictEntityContext> mEntity;
        ::ll::TypedStorage<1, 1, bool>                  mObstructed;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 24> mUnk357c36;
        ::ll::UntypedStorage<4, 12> mUnk61d6cb;
        ::ll::UntypedStorage<4, 4>  mUnkbcb585;
        ::ll::UntypedStorage<4, 8>  mUnkb9b45b;
        ::ll::UntypedStorage<1, 1>  mUnk896489;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        EntityStatus& operator=(EntityStatus const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        EntityStatus(EntityStatus const&);
#endif // @header-generator platform
        EntityStatus();
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI EntityStatus(::AABB const&, ::Vec3 const&, float, ::StrictEntityContext const&, bool);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::AABB const&, ::Vec3 const&, float, ::StrictEntityContext const&, bool);
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<CameraAimAssistEntityTargetComponent::EntityStatus>> mEntitiesInFrustum;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::CameraAimAssistEntityTargetComponent::EntityStatus>> mEntitiesInFrustum;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CameraAimAssistEntityTargetComponent& operator=(CameraAimAssistEntityTargetComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
