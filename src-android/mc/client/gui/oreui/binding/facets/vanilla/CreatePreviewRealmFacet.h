#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/CreatePreviewRealmFromSubscriptionResult.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/network/realms/RealmId.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenController;
class PlayScreenModel;
// clang-format on

namespace OreUI {

class CreatePreviewRealmFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::CreatePreviewRealmFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<PlayScreenModel>>          mPlayScreenModel;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MainMenuScreenController>> mMainMenuScreenController;
    ::ll::TypedStorage<1, 1, bool>                                       mIsDirty;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>                     isAlive;
    ::ll::UntypedStorage<4, 12>                                          mCreatePreviewRealmFromSubscriptionTask;
    ::ll::UntypedStorage<1, 2>                                           mCreatePreviewRealmFromSubscriptionResult;
    ::ll::UntypedStorage<8, 8>                                           mCreatedPreviewRealmId;
    ::ll::UntypedStorage<8, 8>                                           mSelectedSubscriptionId;
    // NOLINTEND

public:
    // prevent constructor by default
    CreatePreviewRealmFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CreatePreviewRealmFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CreatePreviewRealmFacet(std::shared_ptr<PlayScreenModel>);

    MCNAPI void activateNewPreviewRealm(bool);

    MCNAPI void createPreviewRealmFromSubscriptionId(std::string const&);

    MCNAPI std::optional<OreUI::CreatePreviewRealmFromSubscriptionResult> const&
           getCreatePreviewRealmFromSubscriptionResult() const;

    MCNAPI ::OreUI::FacetTaskState const getCreatePreviewRealmFromSubscriptionTaskState() const;

    MCNAPI std::string getCreatedPreviewRealmId() const;

    MCNAPI void reset();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[32]> NAME();
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
