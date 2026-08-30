#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/RealmSlot.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/network/realms/World.h"

// auto generated forward declare list
// clang-format off
class PlayScreenModel;
// clang-format on

namespace OreUI {

class RealmSlotsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmSlotsFacet> {
public:
    // RealmSlotsFacet inner types define
    enum class FacetStatus : uchar {
        Idle                              = 0,
        LoadingSelectedRealmDetails       = 1,
        FailedToQuerySelectedRealmDetails = 2,
        LoadingActivatingSlot             = 3,
        FailedToActivateSlot              = 4,
        SlotSelected                      = 5,
        ShowingConfirmationModal          = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<PlayScreenModel>>     mPlayScreenModel;
    ::ll::UntypedStorage<4, 4>                                      mSelectedRealmIndex;
    ::ll::UntypedStorage<8, 8>                                      mSelectedRealmId;
    ::ll::TypedStorage<8, 24, std::string>                          mSelectedRealmName;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::RealmSlot>>        mRealmSlots;
    ::ll::TypedStorage<4, 4, int>                                   mActiveSlotIndex;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>                isAlive;
    ::ll::TypedStorage<8, 608, ::Realms::World>                     mCachedWorld;
    ::ll::TypedStorage<1, 1, ::OreUI::RealmSlotsFacet::FacetStatus> mStatus;
    ::ll::TypedStorage<1, 1, ::OreUI::RealmSlotsFacet::FacetStatus> mCurrentStatus;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmSlotsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmSlotsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmSlotsFacet(std::shared_ptr<PlayScreenModel>);

    MCNAPI void activateSlot(int);

    MCNAPI void confirm();

    MCNAPI bool didFailToActivateSlot() const;

    MCNAPI bool didFailToQuerySelectedRealmDetails() const;

    MCNAPI std::vector<OreUI::RealmSlot> const& getRealmSlots() const;

    MCNAPI void getSelectedRealmDetails(std::string const&);

    MCNAPI bool isLoading() const;

    MCNAPI bool isShowingConfirmationModal() const;

    MCNAPI bool isSlotSelected() const;

    MCNAPI void reset();

    MCNAPI void selectSlot(int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[19]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<PlayScreenModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
