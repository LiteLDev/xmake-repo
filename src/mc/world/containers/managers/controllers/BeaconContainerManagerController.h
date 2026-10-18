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
#if defined(LL_PLAT_A) // @header-generator platform
    enum ButtonStatus : uint {
        STATUS_ACTIVE   = 0,
        STATUS_INACTIVE = 1,
        STATUS_HIDDEN   = 2,
        STATUS_SELECTED = 3,
#else // @header-generator platform
    enum class ButtonId : int {
        IdInvalid   = -1,
        IdConfirm   = 0,
        IdCancel    = 1,
        IdSpeed     = 2,
        IdHaste     = 3,
        IdResist    = 4,
        IdJump      = 5,
        IdStrength  = 6,
        IdRegen     = 7,
        IdExtra     = 8,
        NumButtonId = 9,
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum ClickStatus : uint {
        STATUS_OK   = 0,
        STATUS_EXIT = 1,
#else // @header-generator platform
    enum class ButtonStatus : int {
        Active   = 0,
        Inactive = 1,
        Hidden   = 2,
        Selected = 3,
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    enum class ClickStatus : int {
        Ok   = 0,
        Exit = 1,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::weak_ptr<BeaconContainerManagerModel>> mBeaconContainerManagerModel;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::BeaconContainerManagerModel>> mBeaconContainerManagerModel;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    BeaconContainerManagerController();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    BeaconContainerManagerController();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BeaconContainerManagerController();
#else // @header-generator platform
    virtual ~BeaconContainerManagerController() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);
#else // @header-generator platform
    virtual bool handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit BeaconContainerManagerController(std::weak_ptr<BeaconContainerManagerModel>);

    MCNAPI void _confirmTransaction();

    MCNAPI void _setupCallbacks();

    MCNAPI ::BeaconContainerManagerController::ClickStatus buttonClicked(::BeaconContainerManagerController::ButtonId);

    MCNAPI std::string getButtonHoverText(std::string const&) const;

    MCNAPI ::BeaconContainerManagerController::ButtonStatus getButtonStatus(std::string const&) const;

    MCNAPI bool isSecondaryEffect(std::string const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI explicit BeaconContainerManagerController(::std::weak_ptr<::BeaconContainerManagerModel> ptrModel);

    MCNAPI void _confirmTransaction();

    MCNAPI void _setupCallbacks();

    MCNAPI ::BeaconContainerManagerController::ClickStatus
    buttonClicked(::BeaconContainerManagerController::ButtonId id);

    MCNAPI ::std::string getButtonHoverText(::std::string const& buttonName) const;

    MCNAPI ::BeaconContainerManagerController::ButtonStatus getButtonStatus(::std::string const& buttonName) const;

    MCNAPI bool isSecondaryEffect(::std::string const& buttonName) const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BeaconContainerManagerController::ButtonId buttonNameToButtonId(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::BeaconContainerManagerController::ButtonId buttonNameToButtonId(::std::string const& buttonName);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::weak_ptr<BeaconContainerManagerModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::weak_ptr<::BeaconContainerManagerModel> ptrModel);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI bool $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);
#endif


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
