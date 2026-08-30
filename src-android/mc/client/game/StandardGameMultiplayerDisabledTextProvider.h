#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/IGameMultiplayerDisabledTextProvider.h"
#include "mc/platform/MultiplayerLockedContext.h"

struct StandardGameMultiplayerDisabledTextProvider : public ::IGameMultiplayerDisabledTextProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StandardGameMultiplayerDisabledTextProvider();

    virtual std::string getTextTitle(::MultiplayerLockedContext) const;

    virtual std::string getTextBody(::MultiplayerLockedContext) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string $getTextTitle(::MultiplayerLockedContext) const;

    MCNAPI std::string $getTextBody(::MultiplayerLockedContext) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
