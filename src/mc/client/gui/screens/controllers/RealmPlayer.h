#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/Player.h"
#include "mc/client/network/realms/RealmsAPI.h"

struct RealmPlayer : public ::Realms::Player {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>     mInviteAction;
    ::ll::UntypedStorage<4, 4>     mOperatorAction;
    ::ll::TypedStorage<1, 1, bool> mInviteStatusChanged;
    ::ll::TypedStorage<1, 1, bool> mOperatorStatusChanged;
    ::ll::TypedStorage<1, 1, bool> mHasPlatformProfile;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/Player.h"
#include "mc/client/network/realms/RealmsAPI.h"

struct RealmPlayer : public ::Realms::Player {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RealmsAPI::InviteAction> mInviteAction;
    ::ll::TypedStorage<4, 4, ::RealmsAPI::InviteAction> mOperatorAction;
    ::ll::TypedStorage<1, 1, bool>                      mInviteStatusChanged;
    ::ll::TypedStorage<1, 1, bool>                      mOperatorStatusChanged;
    ::ll::TypedStorage<1, 1, bool>                      mHasPlatformProfile;
    // NOLINTEND
};
#else // @header-generator platform
struct RealmPlayer {};
#endif // @header-generator platform
#endif // @header-generator platform
