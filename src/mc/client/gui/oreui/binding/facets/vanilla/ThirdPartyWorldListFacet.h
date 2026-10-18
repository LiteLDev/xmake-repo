#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/ThirdPartyServersStatus.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/NetworkWorldData.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IAppPlatform;
struct NetworkWorldInfo;
namespace OreUI { class IResourceAllowList; }
namespace World { class ThirdPartyWorldList; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/ThirdPartyServersStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IAppPlatform;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct NetworkWorldData; }
namespace World { class ThirdPartyWorldList; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class ThirdPartyWorldListFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::ThirdPartyWorldListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::ThirdPartyWorldList&>         mThirdPartyWorldList;
    ::ll::UntypedStorage<8, 24>                                     mResourceAllowList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mThirdpartyListSubscription;
    ::ll::TypedStorage<4, 4, ::OreUI::ThirdPartyServersStatus>      mThirdPartyServersStatus;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::NetworkWorldData>> mFeaturedWorldData;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::NetworkWorldData>> mCreatorWorldData;
    ::ll::UntypedStorage<4, 12>                                     mFetchThirdPartyWorldTask;
    ::ll::TypedStorage<1, 1, bool>                                  mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    ThirdPartyWorldListFacet& operator=(ThirdPartyWorldListFacet const&);
    ThirdPartyWorldListFacet(ThirdPartyWorldListFacet const&);
    ThirdPartyWorldListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ThirdPartyWorldListFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ThirdPartyWorldListFacet(
        ::World::ThirdPartyWorldList&,
        ::Bedrock::NonOwnerPointer<IAppPlatform> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );

    MCNAPI void _onWorldListUpdated();

    MCNAPI void _refresh();

    MCNAPI std::vector<OreUI::NetworkWorldData> const& getCreatorWorlds() const;

    MCNAPI std::vector<OreUI::NetworkWorldData> const& getFeaturedWorlds() const;

    MCNAPI ::OreUI::FacetTaskState const getFetchThirdPartyWorldsTaskState() const;

    MCNAPI ::OreUI::ThirdPartyServersStatus const getThirdPartyServersStatus() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[28]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::World::ThirdPartyWorldList&,
        ::Bedrock::NonOwnerPointer<IAppPlatform> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );
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
class ThirdPartyWorldListFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::ThirdPartyWorldListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::ThirdPartyWorldList&>                               mThirdPartyWorldList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mThirdpartyListSubscription;
    ::ll::TypedStorage<4, 4, ::OreUI::ThirdPartyServersStatus>                            mThirdPartyServersStatus;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::NetworkWorldData>>                   mFeaturedWorldData;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::NetworkWorldData>>                   mCreatorWorldData;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::std::monostate>>                mFetchThirdPartyWorldTask;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    ThirdPartyWorldListFacet& operator=(ThirdPartyWorldListFacet const&);
    ThirdPartyWorldListFacet(ThirdPartyWorldListFacet const&);
    ThirdPartyWorldListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ThirdPartyWorldListFacet(
        ::World::ThirdPartyWorldList&                              thirdPartyWorldList,
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&          appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI void _onWorldListUpdated();

    MCAPI void _refresh();

    MCFOLD ::std::vector<::OreUI::NetworkWorldData> const& getCreatorWorlds() const;

    MCFOLD ::std::vector<::OreUI::NetworkWorldData> const& getFeaturedWorlds() const;

    MCFOLD ::OreUI::FacetTaskState const getFetchThirdPartyWorldsTaskState() const;

    MCFOLD ::OreUI::ThirdPartyServersStatus const getThirdPartyServersStatus() const;
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
        ::World::ThirdPartyWorldList&                              thirdPartyWorldList,
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&          appPlatform,
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
class ThirdPartyWorldListFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
