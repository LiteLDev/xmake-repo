#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/actor/ProjectileAnchor.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct FireAtTargetGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // FireAtTargetGoalDefinition inner types declare
    // clang-format off
    struct ProjectileAnchorProxy;
    // clang-format on

    // FireAtTargetGoalDefinition inner types define
    struct ProjectileAnchorProxy {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ProjectileAnchor> mAnchor;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mFilters;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mAttackRange;
    ::ll::TypedStorage<4, 4, float> mAttackCooldownInSeconds;
    ::ll::TypedStorage<4, 4, float> mPreShootDelayInSeconds;
    ::ll::TypedStorage<4, 4, float> mPostShootDelayInSeconds;
    ::ll::TypedStorage<4, 4, float> mMaxHeadRotationX;
    ::ll::TypedStorage<4, 4, float> mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float> mRangedFOV;
    ::ll::TypedStorage<8, 24, std::string> mProjectileDefinition;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_30::FireAtTargetGoalDefinition::ProjectileAnchorProxy> mOwnerAnchorProxy;
    ::ll::TypedStorage<4, 12, ::Vec3> mOwnerOffset;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_30::FireAtTargetGoalDefinition::ProjectileAnchorProxy> mTargetAnchorProxy;
    ::ll::TypedStorage<4, 12, ::Vec3> mTargetOffset;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::SharedTypes::v1_26_30::FireAtTargetGoalDefinition const&) const;

    MCNAPI ~FireAtTargetGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Vec3 const& DEFAULT_OFFSET();

    MCNAPI static std::string_view const& DEFAULT_PROJECTILE_NAME();

    MCNAPI static std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
