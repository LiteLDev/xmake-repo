#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/MultiplayerLockedContext.h"

struct IGameMultiplayerDisabledTextProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameMultiplayerDisabledTextProvider();

    virtual std::string getTextTitle(::MultiplayerLockedContext) const = 0;

    virtual std::string getTextBody(::MultiplayerLockedContext) const = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<IGameMultiplayerDisabledTextProvider> createProvider();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
