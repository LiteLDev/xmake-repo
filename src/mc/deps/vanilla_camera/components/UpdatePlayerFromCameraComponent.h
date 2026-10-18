#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_100/camera/LookMode.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_100/camera/LookMode.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace VanillaCamera {

#if defined(LL_PLAT_A) // @header-generator platform
struct UpdatePlayerFromCameraComponent {
public:
    // UpdatePlayerFromCameraComponent inner types define
    using LookMode = ::SharedTypes::v1_21_100::LookMode;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_100::LookMode> mLookMode;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct UpdatePlayerFromCameraComponent {
public:
    // UpdatePlayerFromCameraComponent inner types define
    using LookMode = ::SharedTypes::v1_21_100::LookMode;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_100::LookMode> mLookMode;
    // NOLINTEND
};
#else // @header-generator platform
struct UpdatePlayerFromCameraComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace VanillaCamera
