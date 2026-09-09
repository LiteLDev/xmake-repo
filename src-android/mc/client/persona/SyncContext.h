#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social { class User; }
// clang-format on

namespace persona {

class SyncContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mCurrentPlayFabId;
    ::ll::TypedStorage<1, 1, bool>         mWaitingForEntitlementsAfterSignIn;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SyncContext();

    MCNAPI bool _arePersonaOwnedChecksDisabled() const;

    MCNAPI bool _isEduModeEnabled() const;

    MCNAPI bool onLiveSignOut();

    MCNAPI bool shouldHandleEntitlementRefresh();

    MCNAPI bool shouldHandlePlayFabSignIn(std::shared_ptr<Social::User>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace persona
