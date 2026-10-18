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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mFilters;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                  mAttackRange;
    ::ll::TypedStorage<4, 4, float>                                      mAttackCooldownInSeconds;
    ::ll::TypedStorage<4, 4, float>                                      mPreShootDelayInSeconds;
    ::ll::TypedStorage<4, 4, float>                                      mPostShootDelayInSeconds;
    ::ll::TypedStorage<4, 4, float>                                      mMaxHeadRotationX;
    ::ll::TypedStorage<4, 4, float>                                      mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float>                                      mRangedFOV;
    ::ll::TypedStorage<8, 32, ::std::string>                             mProjectileDefinition;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_30::FireAtTargetGoalDefinition::ProjectileAnchorProxy>
                                      mOwnerAnchorProxy;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3> mOwnerOffset;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_30::FireAtTargetGoalDefinition::ProjectileAnchorProxy> mTargetAnchorProxy;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_30::FireAtTargetGoalDefinition::ProjectileAnchorProxy>
                                      mTargetAnchorProxy;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3> mTargetOffset;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FireAtTargetGoalDefinition& operator=(FireAtTargetGoalDefinition const&);
    FireAtTargetGoalDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_26_30::FireAtTargetGoalDefinition const&) const;
#else // @header-generator platform
    MCAPI FireAtTargetGoalDefinition(::SharedTypes::v1_26_30::FireAtTargetGoalDefinition const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~FireAtTargetGoalDefinition();
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_26_30::FireAtTargetGoalDefinition const&) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3 const& DEFAULT_OFFSET();

    MCNAPI static std::string_view const& DEFAULT_PROJECTILE_NAME();

    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_26_30::FireAtTargetGoalDefinition const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
