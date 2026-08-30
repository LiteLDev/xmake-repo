#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

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

} // namespace OreUI
