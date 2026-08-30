#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/options/oreui/PlayScreenWorldLayoutMode.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
// clang-format on

namespace OreUI {

class ScreenSpecificOptionsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::ScreenSpecificOptionsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>                          mOptions;
    ::ll::TypedStorage<1, 1, bool>                                        mIsDirty;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>> mOptionSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenSpecificOptionsFacet& operator=(ScreenSpecificOptionsFacet const&);
    ScreenSpecificOptionsFacet(ScreenSpecificOptionsFacet const&);
    ScreenSpecificOptionsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenSpecificOptionsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScreenSpecificOptionsFacet(::IOptionRegistry&);

    MCNAPI bool getDevOreUIGameplayUI() const;

    MCNAPI bool getDevPlayScreenHideLanWorlds() const;

    MCNAPI ::OreUI::PlayScreenWorldLayoutMode getPlayScreenWorldLayoutMode() const;

    MCNAPI void setDevOreUIGameplayUI(bool);

    MCNAPI void setDevPlayScreenHideLanWorlds(bool);

    MCNAPI void setPlayScreenWorldLayoutMode(::OreUI::PlayScreenWorldLayoutMode);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[30]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IOptionRegistry&);
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
