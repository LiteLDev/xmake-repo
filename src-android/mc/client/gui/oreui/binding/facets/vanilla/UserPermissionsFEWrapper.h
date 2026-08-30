#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/UserPermissionFEWrapper.h"

namespace OreUI {

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

} // namespace OreUI
