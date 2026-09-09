#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/PlatformMultiplayerRestrictions.h"

class GenericPlatformMultiplayerRestrictions : public ::PlatformMultiplayerRestrictions {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GenericPlatformMultiplayerRestrictions();

    virtual bool platformRestrictsMultiplayer() const;

    virtual void displayPlatformRestrictsMultiplayerModal(std::function<void()>&&);

    virtual void displayPlatformRestrictsUserGeneratedContentModal(std::function<void()>&&);

    virtual void displayPlatformRestrictsChatModal(std::function<void()>&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $platformRestrictsMultiplayer() const;

    MCNAPI void $displayPlatformRestrictsMultiplayerModal(std::function<void()>&&);

    MCNAPI void $displayPlatformRestrictsUserGeneratedContentModal(std::function<void()>&&);

    MCNAPI void $displayPlatformRestrictsChatModal(std::function<void()>&&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
