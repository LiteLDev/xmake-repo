#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/strict/StrictEntityContext.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/BlockTarget.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
namespace CameraAimAssist { class BlockTarget; }
// clang-format on

namespace CameraAimAssist {

struct CompareResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CameraAimAssist::BlockTarget const*> mResultBlockTarget;
    ::ll::UntypedStorage<8, 8>                                      mResultSide;
    ::ll::TypedStorage<4, 8, ::StrictEntityContext>                 mResultEntity;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mEntityCenter;
    ::ll::TypedStorage<4, 24, ::AABB>                               mEntityHitBox;
    ::ll::TypedStorage<4, 4, float>                                 mPriority;
    // NOLINTEND
};

} // namespace CameraAimAssist
