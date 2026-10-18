#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ClientInstanceScreenModel.h"

class PauseScreenModel : public ::ClientInstanceScreenModel {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PauseScreenModel() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void fireFriendsDrawerOpenedEvent();
    // NOLINTEND
};
#else // @header-generator platform
class PauseScreenModel {};
#endif // @header-generator platform
#endif // @header-generator platform
