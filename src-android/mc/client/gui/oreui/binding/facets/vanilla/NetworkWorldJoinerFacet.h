#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/RealmJoinFailureData.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/world/JoinRealmWorldResult.h"
#include "mc/client/world/JoinServerWorldResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/network/EditorConnectionJoinIntent.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class IEntitlementManager;
class PlatformMultiplayerRestrictions;
namespace OreUI { class Router; }
namespace OreUI { struct NetworkWorldJoinerSharedData; }
namespace Parties { class PartySystem; }
namespace Social { class User; }
namespace World { class NetworkWorldJoiner; }
namespace ui { class ProgressScreenNavigation; }
// clang-format on

namespace OreUI {

class NetworkWorldJoinerFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::NetworkWorldJoinerFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::NetworkWorldJoiner&>                          mNetworkWorldJoiner;
    ::ll::TypedStorage<8, 8, ::DateManager const&>                                  mDateManager;
    ::ll::UntypedStorage<8, 8>                                                      mEntitlementManager;
    ::ll::UntypedStorage<8, 16>                                                     mPlatformMultiplayerRestrictions;
    ::ll::UntypedStorage<8, 64>                                                     mIsUsingUnifiedJoinRealmFlow;
    ::ll::TypedStorage<8, 72, std::optional<OreUI::RealmJoinFailureData>>           mRealmJoinFailureData;
    ::ll::UntypedStorage<8, 24>                                                     mEditorManager;
    ::ll::UntypedStorage<8, 24>                                                     mPartySystem;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::User>>                        mCurrentUser;
    ::ll::TypedStorage<8, 8, ::OreUI::Router&>                                      mUiRouter;
    ::ll::TypedStorage<1, 1, bool>                                                  mIsDirty;
    ::ll::TypedStorage<8, 16, std::shared_ptr<OreUI::NetworkWorldJoinerSharedData>> mSharedData;
    ::ll::UntypedStorage<8, 24> mRealmsWorldJoinerJoinRealmWorldResultSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkWorldJoinerFacet& operator=(NetworkWorldJoinerFacet const&);
    NetworkWorldJoinerFacet(NetworkWorldJoinerFacet const&);
    NetworkWorldJoinerFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkWorldJoinerFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetworkWorldJoinerFacet(
        ::World::NetworkWorldJoiner&,
        ::ui::ProgressScreenNavigation,
        ::DateManager const&,
        ::IEntitlementManager&,
        std::unique_ptr<PlatformMultiplayerRestrictions>,
        ::brstd::move_only_function<bool()>,
        ::Bedrock::NonOwnerPointer<Editor::IEditorManager>,
        ::Bedrock::NonOwnerPointer<Parties::PartySystem>,
        std::shared_ptr<Social::User>,
        ::OreUI::Router&
    );

    MCNAPI void clearJoinExternalServerTaskState();

    MCNAPI void clearJoinFriendServerTaskState();

    MCNAPI void clearJoinLANServerTaskState();

    MCNAPI void clearJoinRealmTaskState();

    MCNAPI void clearJoinThirdPartyServerTaskState();

    MCNAPI std::optional<World::JoinServerWorldResult> const& getJoinExternalServerResult() const;

    MCNAPI ::OreUI::FacetTaskState getJoinExternalServerTaskState() const;

    MCNAPI std::optional<World::JoinServerWorldResult> const& getJoinFriendServerResult();

    MCNAPI ::OreUI::FacetTaskState const getJoinFriendServerTaskState();

    MCNAPI std::optional<World::JoinServerWorldResult> const& getJoinLANServerResult();

    MCNAPI ::OreUI::FacetTaskState const getJoinLANServerTaskState();

    MCNAPI std::optional<OreUI::RealmJoinFailureData> const& getJoinRealmFailureData();

    MCNAPI std::optional<World::JoinRealmWorldResult> const& getJoinRealmResult() const;

    MCNAPI ::OreUI::FacetTaskState getJoinRealmTaskState() const;

    MCNAPI std::optional<World::JoinServerWorldResult> const& getJoinThirdPartyServerResult() const;

    MCNAPI ::OreUI::FacetTaskState getJoinThirdPartyServerTaskState() const;

    MCNAPI void joinExternalServer(std::string const&);

    MCNAPI void joinFriendServer(std::string const&);

    MCNAPI void joinLanServer(std::string const&);

    MCNAPI void joinRealmWorld(std::string const&, ::IMinecraftEventing::RealmConnectionFlow);

    MCNAPI void joinThirdPartyServer(std::string const&);

    MCNAPI void setEditorConnectionJoinIntent(::EditorConnectionJoinIntent);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[27]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::World::NetworkWorldJoiner&,
        ::ui::ProgressScreenNavigation,
        ::DateManager const&,
        ::IEntitlementManager&,
        std::unique_ptr<PlatformMultiplayerRestrictions>,
        ::brstd::move_only_function<bool()>,
        ::Bedrock::NonOwnerPointer<Editor::IEditorManager>,
        ::Bedrock::NonOwnerPointer<Parties::PartySystem>,
        std::shared_ptr<Social::User>,
        ::OreUI::Router&
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
