#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/strict/StrictEntityContext.h"
#include "mc/world/phys/AABB.h"

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
        ::ll::TypedStorage<4, 24, ::AABB>               mHitBox;
        ::ll::TypedStorage<4, 12, ::Vec3>               mPosition;
        ::ll::TypedStorage<4, 4, float>                 mPriorityPercentage;
        ::ll::TypedStorage<4, 8, ::StrictEntityContext> mEntity;
        ::ll::TypedStorage<1, 1, bool>                  mObstructed;
        // NOLINTEND

    public:
        // prevent constructor by default
        EntityStatus& operator=(EntityStatus const&);
        EntityStatus();

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
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<CameraAimAssistEntityTargetComponent::EntityStatus>> mEntitiesInFrustum;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistEntityTargetComponent& operator=(CameraAimAssistEntityTargetComponent const&);
};
