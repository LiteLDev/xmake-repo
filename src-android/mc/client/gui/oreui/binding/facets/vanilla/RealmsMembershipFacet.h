#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/realms/RealmsMembership.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsMembership; }
namespace Realms { struct World; }
// clang-format on

namespace OreUI {

class RealmsMembershipFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsMembershipFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsMembership>> mRealmsMembership;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>                     mLifeTimeTracker;
    ::ll::UntypedStorage<1, 2>                                           mFetchRealmError;
    ::ll::UntypedStorage<1, 2>                                           mJoinRealmError;
    ::ll::UntypedStorage<8, 624>                                         mFetchRealmTaskTracker;
    ::ll::UntypedStorage<8, 64>                                          mJoinRealmTaskTracker;
    ::ll::UntypedStorage<1, 1>                                           mLeaveRealmResult;
    ::ll::UntypedStorage<4, 12>                                          mLeaveRealmTaskTracker;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsMembershipFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsMembershipFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsMembershipFacet(std::shared_ptr<Realms::RealmsMembership>);

    MCNAPI void clearFetchRealm();

    MCNAPI void clearJoinRealm();

    MCNAPI void clearLeaveRealm();

    MCNAPI void fetchRealm(std::string const&);

    MCNAPI std::optional<Realms::RealmsMembership::FetchRealmError> const& getFetchRealmError() const;

    MCNAPI std::optional<Realms::World> const& getFetchRealmResult() const;

    MCNAPI ::OreUI::FacetTaskState const getFetchRealmTaskProgress() const;

    MCNAPI std::optional<Realms::RealmsMembership::JoinRealmError> const& getJoinRealmError() const;

    MCNAPI ::OreUI::FacetTaskState getJoinRealmTaskProgress() const;

    MCNAPI std::string const& getJoinedRealmId() const;

    MCNAPI std::string const& getJoinedRealmName() const;

    MCNAPI ::Realms::RealmsMembership::LeaveRealmResult const& getLeaveRealmResult() const;

    MCNAPI ::OreUI::FacetTaskState getLeaveRealmTaskProgress() const;

    MCNAPI void joinRealm(std::string const&);

    MCNAPI void leaveRealm(long);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[25]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<Realms::RealmsMembership>);
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
