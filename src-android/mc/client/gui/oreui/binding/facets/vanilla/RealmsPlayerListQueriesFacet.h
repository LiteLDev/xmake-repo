#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/realms/ManageMembersStatus.h"
#include "mc/client/realms/PlayerInfo.h"
#include "mc/client/realms/PlayerListState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsPlayerList; }
namespace Realms { class RealmsPlayerManagement; }
// clang-format on

namespace OreUI {

class RealmsPlayerListQueriesFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsPlayerListQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Realms::PlayerInfo>>                 mPlayers;
    ::ll::TypedStorage<4, 4, ::Realms::PlayerListState>                        mState;
    ::ll::TypedStorage<1, 1, bool>                                             mDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mRealmPlayerListSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mRealmPlayerManagementSubscriber;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsPlayerManagement>> mRealmsManagePlayer;
    ::ll::TypedStorage<4, 4, ::Realms::ManageMembersStatus>                    mManageMembersState;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPlayerListQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPlayerListQueriesFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsPlayerListQueriesFacet(
        std::shared_ptr<Realms::RealmsPlayerList>,
        std::shared_ptr<Realms::RealmsPlayerManagement>
    );

    MCNAPI ::Realms::ManageMembersStatus getManageMembersState() const;

    MCNAPI std::vector<Realms::PlayerInfo> const& getPlayers() const;

    MCNAPI ::Realms::PlayerListState getState() const;
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
    MCNAPI void* $ctor(std::shared_ptr<Realms::RealmsPlayerList>, std::shared_ptr<Realms::RealmsPlayerManagement>);
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
