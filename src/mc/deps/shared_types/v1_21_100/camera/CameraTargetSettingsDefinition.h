#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct CameraTargetSettingsDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                 mSnapToTarget;
    ::ll::TypedStorage<1, 1, bool>                 mContinueTargeting;
    ::ll::TypedStorage<4, 4, float>                mRotationSpeed;
    ::ll::TypedStorage<4, 4, float>                mTrackingRadius;
    ::ll::TypedStorage<4, 12, std::optional<Vec2>> mHorizontalRotationLimit;
    ::ll::TypedStorage<4, 12, std::optional<Vec2>> mVerticalRotationLimit;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                     mSnapToTarget;
    ::ll::TypedStorage<1, 1, bool>                     mContinueTargeting;
    ::ll::TypedStorage<4, 4, float>                    mRotationSpeed;
    ::ll::TypedStorage<4, 4, float>                    mTrackingRadius;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>> mHorizontalRotationLimit;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>> mVerticalRotationLimit;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CameraTargetSettingsDefinition(CameraTargetSettingsDefinition const&);
#else // @header-generator platform
#endif // @header-generator platform

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
#ifdef LL_PLAT_C
    MCAPI static ::std::string_view const& NAME();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
