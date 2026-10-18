#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/identity/PermissionDenyReason.h"

// auto generated forward declare list
// clang-format off
namespace Social { struct PermissionCheckResult; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/identity/PermissionDenyReason.h"

// auto generated forward declare list
// clang-format off
namespace Social { struct PermissionCheckResult; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct UserPermissionFEWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Social::PermissionDenyReason>> denyReasons;
    ::ll::TypedStorage<1, 1, bool>                                       allowed;
    // NOLINTEND

public:
    // prevent constructor by default
    UserPermissionFEWrapper& operator=(UserPermissionFEWrapper const&);
    UserPermissionFEWrapper(UserPermissionFEWrapper const&);
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct UserPermissionFEWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Social::PermissionDenyReason>> denyReasons;
    ::ll::TypedStorage<1, 1, bool>                                           allowed;
    // NOLINTEND

public:
    // prevent constructor by default
    UserPermissionFEWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit UserPermissionFEWrapper(::Social::PermissionCheckResult userPermission);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Social::PermissionCheckResult userPermission);
    // NOLINTEND
};
#else // @header-generator platform
struct UserPermissionFEWrapper {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
