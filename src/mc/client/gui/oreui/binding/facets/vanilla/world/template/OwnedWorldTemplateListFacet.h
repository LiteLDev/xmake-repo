#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct OwnedWorldTemplateDataBindings; }
namespace World { class OwnedWorldTemplateManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class OwnedWorldTemplateListFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::OwnedWorldTemplateListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDirty;
    ::ll::TypedStorage<8, 8, ::World::OwnedWorldTemplateManager&>                         mOwnedWorldTemplateManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::OwnedWorldTemplateDataBindings>>     mOwnedWorldTemplateList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mRefreshSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    OwnedWorldTemplateListFacet& operator=(OwnedWorldTemplateListFacet const&);
    OwnedWorldTemplateListFacet(OwnedWorldTemplateListFacet const&);
    OwnedWorldTemplateListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OwnedWorldTemplateListFacet(
        ::World::OwnedWorldTemplateManager&                        ownedWorldTemplateManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI void _refresh();

    MCFOLD ::std::vector<::OreUI::OwnedWorldTemplateDataBindings> const& getOwnedTemplateWorldsList();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::World::OwnedWorldTemplateManager&                        ownedWorldTemplateManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class OwnedWorldTemplateListFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
