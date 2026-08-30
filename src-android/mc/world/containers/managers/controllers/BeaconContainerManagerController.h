#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class BeaconContainerManagerModel;
struct SelectedSlotInfo;
struct SlotData;
// clang-format on

class BeaconContainerManagerController : public ::ContainerManagerController {
public:
    // BeaconContainerManagerController inner types define
    enum ButtonStatus : uint {
        STATUS_ACTIVE   = 0,
        STATUS_INACTIVE = 1,
        STATUS_HIDDEN   = 2,
        STATUS_SELECTED = 3,
    };

    enum ClickStatus : uint {
        STATUS_OK   = 0,
        STATUS_EXIT = 1,
    };

    enum ButtonId : int {
        ID_INVALID    = -1,
        ID_CONFIRM    = 0,
        ID_CANCEL     = 1,
        ID_SPEED      = 2,
        ID_HASTE      = 3,
        ID_RESIST     = 4,
        ID_JUMP       = 5,
        ID_STRENGTH   = 6,
        ID_REGEN      = 7,
        ID_EXTRA      = 8,
        NUM_BUTTON_ID = 9,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<BeaconContainerManagerModel>> mBeaconContainerManagerModel;
    // NOLINTEND

public:
    // prevent constructor by default
    BeaconContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BeaconContainerManagerController();

    virtual bool handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BeaconContainerManagerController(std::weak_ptr<BeaconContainerManagerModel>);

    MCNAPI void _confirmTransaction();

    MCNAPI void _setupCallbacks();

    MCNAPI ::BeaconContainerManagerController::ClickStatus buttonClicked(::BeaconContainerManagerController::ButtonId);

    MCNAPI std::string getButtonHoverText(std::string const&) const;

    MCNAPI ::BeaconContainerManagerController::ButtonStatus getButtonStatus(std::string const&) const;

    MCNAPI bool isSecondaryEffect(std::string const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BeaconContainerManagerController::ButtonId buttonNameToButtonId(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<BeaconContainerManagerModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
