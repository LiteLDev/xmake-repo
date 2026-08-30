#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/OwnedWorldTemplateDataBindings.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace World { class OwnedWorldTemplateManager; }
// clang-format on

namespace OreUI {

class OwnedWorldTemplateListFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::OwnedWorldTemplateListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                mIsDirty;
    ::ll::TypedStorage<8, 8, ::World::OwnedWorldTemplateManager&>                 mOwnedWorldTemplateManager;
    ::ll::UntypedStorage<8, 24>                                                   mResourceAllowList;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::OwnedWorldTemplateDataBindings>> mOwnedWorldTemplateList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                    mRefreshSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    OwnedWorldTemplateListFacet& operator=(OwnedWorldTemplateListFacet const&);
    OwnedWorldTemplateListFacet(OwnedWorldTemplateListFacet const&);
    OwnedWorldTemplateListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OwnedWorldTemplateListFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OwnedWorldTemplateListFacet(
        ::World::OwnedWorldTemplateManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );

    MCNAPI void _refresh();

    MCNAPI std::vector<OreUI::OwnedWorldTemplateDataBindings> const& getOwnedTemplateWorldsList();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[31]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::World::OwnedWorldTemplateManager&, ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>);
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
