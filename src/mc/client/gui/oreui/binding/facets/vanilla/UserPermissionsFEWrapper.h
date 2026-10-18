#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/UserPermissionFEWrapper.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/UserPermissionFEWrapper.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct UserPermissionsFEWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::OreUI::UserPermissionFEWrapper> multiplayer;
    ::ll::TypedStorage<8, 32, ::OreUI::UserPermissionFEWrapper> addFriends;
    ::ll::TypedStorage<8, 32, ::OreUI::UserPermissionFEWrapper> viewProfiles;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~UserPermissionsFEWrapper();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct UserPermissionsFEWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::OreUI::UserPermissionFEWrapper> multiplayer;
    ::ll::TypedStorage<8, 32, ::OreUI::UserPermissionFEWrapper> addFriends;
    ::ll::TypedStorage<8, 32, ::OreUI::UserPermissionFEWrapper> viewProfiles;
    // NOLINTEND
};
#else // @header-generator platform
struct UserPermissionsFEWrapper {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
