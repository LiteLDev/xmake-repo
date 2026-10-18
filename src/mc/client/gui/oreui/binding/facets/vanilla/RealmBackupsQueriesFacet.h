#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/Realms__RealmsBackupsDownloadState.h"
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/LevelSummaryBindings.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/realms/RealmsBackupsState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Realms { class RealmsBackups; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/LevelSummaryBindings.h"
#include "mc/client/realms/RealmsBackupsDownloadState.h"
#include "mc/client/realms/RealmsBackupsState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Realms { class RealmsBackups; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmBackupsQueriesFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmBackupsQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    mIsDirty;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsBackups>> mRealmsBackups;
    ::ll::UntypedStorage<8, 24>                                       mResourceAllowList;
    ::ll::UntypedStorage<8, 120>                                      mLevelSummaryBindings;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mRealmBackupsStateSubscriber;
    ::ll::TypedStorage<1, 1, ::Realms::RealmsBackupsDownloadState>    mRealmsBackupsDownloadState;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mRealmsBackupsDownloadStateSubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmBackupsQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmBackupsQueriesFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmBackupsQueriesFacet(
        std::shared_ptr<Realms::RealmsBackups>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );

    MCNAPI ::OreUI::LevelSummaryBindings& getCurrentWorldSummary();

    MCNAPI ::Realms::RealmsBackupsState getRealmBackupsState();

    MCNAPI ::Realms::RealmsBackupsDownloadState getRealmsBackupsDownloadState();
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
        std::shared_ptr<Realms::RealmsBackups>,
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
class RealmBackupsQueriesFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmBackupsQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDirty;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsBackups>>                 mRealmsBackups;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 160, ::OreUI::LevelSummaryBindings>                             mLevelSummaryBindings;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mRealmBackupsStateSubscriber;
    ::ll::TypedStorage<1, 1, ::Realms::RealmsBackupsDownloadState>                        mRealmsBackupsDownloadState;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRealmsBackupsDownloadStateSubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmBackupsQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmBackupsQueriesFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmBackupsQueriesFacet(
        ::std::shared_ptr<::Realms::RealmsBackups>                 realmsBackups,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCFOLD ::OreUI::LevelSummaryBindings& getCurrentWorldSummary();

    MCAPI ::Realms::RealmsBackupsState getRealmBackupsState();

    MCAPI ::Realms::RealmsBackupsDownloadState getRealmsBackupsDownloadState();
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
        ::std::shared_ptr<::Realms::RealmsBackups>                 realmsBackups,
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
class RealmBackupsQueriesFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
