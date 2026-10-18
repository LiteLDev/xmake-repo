#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/identity/PermissionCheckResult.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/identity/PermissionCheckResult.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct UserPermissions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Social::PermissionCheckResult> multiplayer;
    ::ll::TypedStorage<4, 4, ::Social::PermissionCheckResult> addFriends;
    ::ll::TypedStorage<4, 4, ::Social::PermissionCheckResult> viewProfiles;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct UserPermissions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Social::PermissionCheckResult> multiplayer;
    ::ll::TypedStorage<4, 4, ::Social::PermissionCheckResult> addFriends;
    ::ll::TypedStorage<4, 4, ::Social::PermissionCheckResult> viewProfiles;
    // NOLINTEND
};
#else // @header-generator platform
struct UserPermissions {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
