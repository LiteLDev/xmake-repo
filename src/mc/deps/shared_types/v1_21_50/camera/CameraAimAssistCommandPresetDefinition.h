#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/util/Reference.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/Result.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/camera/aimassist/camera_aim_assist/TargetMode.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
class ReadOnlyBinaryStream;
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct CameraAimAssistCommandPresetDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                                          mPresetId;
    ::ll::TypedStorage<1, 2, std::optional<CameraAimAssist::TargetMode>> mTargetMode;
    ::ll::TypedStorage<4, 12, std::optional<Vec2>>                       mAngle;
    ::ll::TypedStorage<4, 8, std::optional<float>>                       mDistance;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::Reference<5>>>  mPresetId;
    ::ll::TypedStorage<1, 2, ::std::optional<::CameraAimAssist::TargetMode>> mTargetMode;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>>                       mAngle;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mDistance;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_21_50::CameraAimAssistCommandPresetDefinition const&) const;
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_21_50::CameraAimAssistCommandPresetDefinition const& rhs) const;
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
};

} // namespace SharedTypes::v1_21_50
