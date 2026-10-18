#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/TargetGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_0 {

struct NearestAttackableTargetGoalDefinition : public ::SharedTypes::TargetGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                      mReselectTargets;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mAttackInterval;
    ::ll::TypedStorage<4, 4, int>                       mScanInterval;
    ::ll::TypedStorage<4, 4, float>                     mTargetSearchHeight;
    ::ll::TypedStorage<4, 4, float>                     mTargetInvisibleMultiplier;
    ::ll::TypedStorage<4, 4, float>                     mTargetSneakVisibilityMultiplier;
    ::ll::TypedStorage<1, 1, bool>                      mSetPersistent;
    ::ll::TypedStorage<4, 4, float>                     mTargetAcquisitionProbability;
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
    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
