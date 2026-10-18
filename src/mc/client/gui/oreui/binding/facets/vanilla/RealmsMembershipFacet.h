#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/network/realms/World.h"
#include "mc/client/realms/RealmsMembership.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsMembership; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RealmsMembershipFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsMembershipFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsMembership>>               mRealmsMembership;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                                     mLifeTimeTracker;
    ::ll::TypedStorage<1, 2, ::std::optional<::Realms::RealmsMembership::FetchRealmError>> mFetchRealmError;
    ::ll::TypedStorage<1, 2, ::std::optional<::Realms::RealmsMembership::JoinRealmError>>  mJoinRealmError;
    ::ll::TypedStorage<8, 736, ::OreUI::FacetTaskTracker<::Realms::World>>                 mFetchRealmTaskTracker;
    ::ll::TypedStorage<8, 80, ::OreUI::FacetTaskTracker<::Realms::RealmsMembership::JoinRealmResult>>
                                                                           mJoinRealmTaskTracker;
    ::ll::TypedStorage<1, 1, ::Realms::RealmsMembership::LeaveRealmResult> mLeaveRealmResult;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::std::monostate>> mLeaveRealmTaskTracker;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsMembershipFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsMembershipFacet(::std::shared_ptr<::Realms::RealmsMembership> realmsJoinRealm);

    MCAPI void clearFetchRealm();

    MCAPI void clearJoinRealm();

    MCAPI void clearLeaveRealm();

    MCAPI void fetchRealm(::std::string const& inviteCode);

    MCFOLD ::std::optional<::Realms::RealmsMembership::FetchRealmError> const& getFetchRealmError() const;

    MCFOLD ::std::optional<::Realms::World> const& getFetchRealmResult() const;

    MCFOLD ::OreUI::FacetTaskState const getFetchRealmTaskProgress() const;

    MCAPI ::std::optional<::Realms::RealmsMembership::JoinRealmError> const& getJoinRealmError() const;

    MCAPI ::OreUI::FacetTaskState getJoinRealmTaskProgress() const;

    MCAPI ::std::string const& getJoinedRealmId() const;

    MCAPI ::std::string const& getJoinedRealmName() const;

    MCAPI ::Realms::RealmsMembership::LeaveRealmResult const& getLeaveRealmResult() const;

    MCFOLD ::OreUI::FacetTaskState getLeaveRealmTaskProgress() const;

    MCAPI void joinRealm(::std::string const& inviteCode);

    MCAPI void leaveRealm(int64 worldId);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::RealmsMembership> realmsJoinRealm);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class RealmsMembershipFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
