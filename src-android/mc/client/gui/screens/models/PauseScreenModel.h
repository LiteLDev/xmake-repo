#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ClientInstanceScreenModel.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmId; }
// clang-format on

class PauseScreenModel : public ::ClientInstanceScreenModel {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PauseScreenModel();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void fireClubsOpenFeedScreenEvent(::Realms::RealmId const, std::string const&, int);

    MCNAPI void fireFriendsDrawerOpenedEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
