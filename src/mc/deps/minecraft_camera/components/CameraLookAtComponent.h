#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace MinecraftCamera {

#if defined(LL_PLAT_A) // @header-generator platform
struct CameraLookAtComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24> mLookAt;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraLookAtComponent& operator=(CameraLookAtComponent const&);
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CameraLookAtComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mLookAt;
    // NOLINTEND
};
#else // @header-generator platform
struct CameraLookAtComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace MinecraftCamera
