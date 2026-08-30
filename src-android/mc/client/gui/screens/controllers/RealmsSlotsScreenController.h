#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/RealmsSettingsScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class PlatformMultiplayerRestrictions;
namespace Realms { struct World; }
namespace Social { struct PermissionCheckResult; }
// clang-format on

class RealmsSlotsScreenController : public ::RealmsSettingsScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                     mCurrentSlotImage;
    ::ll::TypedStorage<8, 24, std::string>                                     mCurrentSlotImagePath;
    ::ll::TypedStorage<4, 4, int>                                              mFeedUnreadCount;
    ::ll::TypedStorage<1, 1, bool>                                             mPlatformRestrictsMultiplayer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<1, 1, bool>                                             mRealmsSlotsScreenNeedsRefresh;
    ::ll::TypedStorage<1, 1, bool>                mRealmsSlotsScreenNeedsRefreshOnScreenOpen;
    ::ll::TypedStorage<1, 3, std::array<bool, 3>> mSlotViewToggle;
    ::ll::TypedStorage<1, 1, bool>                mChangingSlot;
    ::ll::TypedStorage<8, 24, std::string>        mSelectedWorldFocusButton;
    ::ll::TypedStorage<4, 4, int>                 mSelectedWorldFocusButtonDelayTicks;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSlotsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsSlotsScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onCreation();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsSlotsScreenController(std::shared_ptr<MainMenuScreenModel>, ::Realms::World&);

    MCNAPI bool _isRealmExpiringForPlatform();

    MCNAPI ::Social::PermissionCheckResult _parentalControlsDialogCheck();

    MCNAPI void _setActiveSlot(int, std::function<void()>, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>, ::Realms::World&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $onOpen();

    MCNAPI void $onCreation();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
