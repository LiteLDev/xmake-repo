#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/CommandState.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/PartyCommandError.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/party/parties/PartyPrivacy.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace Parties { class PartySystem; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/CommandState.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/PartyCommandError.h"
#include "mc/client/party/parties/PartyPrivacy.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace Parties { class PartySystem; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class PartyCommandsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::PartyCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>             mPartySystem;
    ::ll::UntypedStorage<8, 48>             mGetClientInstance;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::TypedStorage<1, 1, bool>          mIsDirty;
    ::ll::UntypedStorage<4, 12>             mCreatePartyState;
    ::ll::UntypedStorage<4, 12>             mJoinPartyState;
    ::ll::UntypedStorage<4, 20>             mAcceptInviteState;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyCommandsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PartyCommandsFacet(
        ::Bedrock::NonOwnerPointer<Parties::PartySystem>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>>()>
    );

    MCNAPI void
    _runCommandAndUpdateState(::Bedrock::Threading::Async<bool>, ::OreUI::CommandState<OreUI::PartyCommandError>&);

    MCNAPI void acceptInvite(std::string const&, std::string const&);

    MCNAPI void createParty();

    MCNAPI ::OreUI::CommandState<OreUI::PartyCommandError> const& getAcceptInviteState() const;

    MCNAPI ::OreUI::CommandState<OreUI::PartyCommandError> const& getCreatePartyState() const;

    MCNAPI ::OreUI::CommandState<OreUI::PartyCommandError> const& getJoinPartyState() const;

    MCNAPI void ignoreInvite(std::string const&, std::string const&);

    MCNAPI void joinParty(std::string const&);

    MCNAPI void leaveParty();

    MCNAPI void removeMember(std::string const&, bool);

    MCNAPI void sendInvite(std::string const&);

    MCNAPI void setLeader(std::string const&);

    MCNAPI void setPrivacy(::Parties::PartyPrivacy);

    MCNAPI void travelToDestination();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[22]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<Parties::PartySystem>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>>()>
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
class PartyCommandsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::PartyCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::PartySystem>>                  mPartySystem;
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NotNullNonOwnerPtr<::IClientInstance>()>> mGetClientInstance;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                                        mTaskGroup;
    ::ll::TypedStorage<1, 1, bool>                                                                 mIsDirty;
    ::ll::TypedStorage<4, 12, ::OreUI::CommandState<::OreUI::PartyCommandError>>                   mCreatePartyState;
    ::ll::TypedStorage<4, 12, ::OreUI::CommandState<::OreUI::PartyCommandError>>                   mJoinPartyState;
    ::ll::TypedStorage<4, 12, ::OreUI::CommandState<::OreUI::PartyCommandError>>                   mAcceptInviteState;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PartyCommandsFacet(
        ::Bedrock::NonOwnerPointer<::Parties::PartySystem>                  partySystem,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::IClientInstance>()> getClientInstance
    );

    MCAPI void _runCommandAndUpdateState(
        ::Bedrock::Threading::Async<bool>                  task,
        ::OreUI::CommandState<::OreUI::PartyCommandError>& state
    );

    MCAPI void acceptInvite(::std::string const& partyId, ::std::string const& connectionString);

    MCAPI void createParty();

    MCAPI ::OreUI::CommandState<::OreUI::PartyCommandError> const& getAcceptInviteState() const;

    MCAPI ::OreUI::CommandState<::OreUI::PartyCommandError> const& getCreatePartyState() const;

    MCAPI ::OreUI::CommandState<::OreUI::PartyCommandError> const& getJoinPartyState() const;

    MCAPI void ignoreInvite(::std::string const& partyId, ::std::string const& inviterXuid);

    MCAPI void joinParty(::std::string const& partyId);

    MCAPI void leaveParty();

    MCAPI void removeMember(::std::string const& memberXuid, bool preventRejoin);

    MCAPI void sendInvite(::std::string const& xuid);

    MCAPI void setLeader(::std::string const& memberXuid);

    MCAPI void setPrivacy(::Parties::PartyPrivacy newPrivacy);

    MCAPI void travelToDestination();
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
        ::Bedrock::NonOwnerPointer<::Parties::PartySystem>                  partySystem,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::IClientInstance>()> getClientInstance
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class PartyCommandsFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
