#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class OptionRegistry;
// clang-format on

namespace OreUI {

class OptionsFacet_DEPRECATED : public ::OreUI::FacetBase_DEPRECATED<OreUI::OptionsFacet_DEPRECATED> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<OptionRegistry>>            mOptions;
    ::ll::TypedStorage<1, 1, bool>                                        mIsDirty;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>> mOptionSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    OptionsFacet_DEPRECATED();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OptionsFacet_DEPRECATED();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit OptionsFacet_DEPRECATED(std::shared_ptr<OptionRegistry>);

    MCNAPI void _registerOptionObserver(::OptionID);

    MCNAPI int getDefaultRenderDistance() const;

    MCNAPI int getInteractionModel() const;

    MCNAPI int getMaxRenderDistance() const;

    MCNAPI bool getPlayOnceWithMobileData() const;

    MCNAPI bool getPlayVideoInTouchControlSelectionScreen() const;

    MCNAPI int getRenderDistance() const;

    MCNAPI bool getShowRenderDistanceWarningModal() const;

    MCNAPI bool getShowTouchControlSelectionScreen() const;

    MCNAPI void setInteractionModel(int);

    MCNAPI void setPlayOnceWithMobileData(bool);

    MCNAPI void setRenderDistance(int);

    MCNAPI void setShowRenderDistanceWarningModal(bool);

    MCNAPI void setShowTouchControlSelectionScreen(bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[16]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<OptionRegistry>);
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
