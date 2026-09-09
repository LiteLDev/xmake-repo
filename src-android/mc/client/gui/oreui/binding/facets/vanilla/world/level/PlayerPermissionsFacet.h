#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/commands/PlayerPermissionsCommandsUtils.h"
#include "mc/client/commands/PlayerPermissionsLevelListener.h"
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/PlayerAbilityBindings.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/world/level/PlayerPermissionsActionState.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/world/level/PlayerPermissionsError.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
class MinecraftCommands;
class PacketSender;
class PlayerPermissionsManager;
class PlayerPermissionsSynchroniser;
struct LocalPlayerChangedConnector;
namespace World { class WorldPlayerListTracker; }
// clang-format on

namespace OreUI {

class PlayerPermissionsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::PlayerPermissionsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mLocalPlayerSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mPlayerPermissionsChangedSubscription;
    ::ll::UntypedStorage<8, 24>                                          mPlayerListChangedSubscription;
    ::ll::UntypedStorage<8, 48>                                          mGetCurrentLocalPlayer;
    ::ll::UntypedStorage<8, 48>                                          mIsInGame;
    ::ll::UntypedStorage<8, 48>                                          mIsPrimaryClient;
    ::ll::UntypedStorage<8, 48>                                          mIsHostingLocalDedicatedServer;
    ::ll::UntypedStorage<8, 24>                                          mPlayerPermissionsManager;
    ::ll::UntypedStorage<8, 24>                                          mPlayerPermissionsSynchroniser;
    ::ll::UntypedStorage<8, 64>                                          mCommandsUtils;
    ::ll::TypedStorage<1, 1, bool>                                       mPlayerIdInvalidFlag;
    ::ll::TypedStorage<1, 1, bool>                                       mPlayerPermissionsMissingFlag;
    ::ll::TypedStorage<1, 1, bool>                                       mSelectedPlayerLeftFlag;
    ::ll::TypedStorage<1, 1, bool>                                       mSelectedPlayerPermissionsChangedFlag;
    ::ll::TypedStorage<1, 1, bool>                                       mOperatorCommandsRevokedFlag;
    ::ll::TypedStorage<1, 1, ::OreUI::PlayerPermissionsActionState>      mKickCommandState;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                            mCurrentPlayerID;
    ::ll::TypedStorage<1, 2, std::optional<PlayerPermissionLevel>>       mCurrentPlayerPermissionLevel;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::PlayerAbilityBindings>> mPlayerPermissionList;
    ::ll::TypedStorage<1, 1, bool>                                       mCanEditPermissions;
    ::ll::TypedStorage<1, 1, bool>                                       mCanKickPlayer;
    ::ll::TypedStorage<1, 1, bool>                                       mLocalPlayerLoaded;
    ::ll::TypedStorage<1, 1, bool>                                       mPermissionsChanged;
    ::ll::TypedStorage<1, 1, bool>                                       mStatesChanged;
    ::ll::TypedStorage<1, 1, bool>                                       mErrorFlagsChanged;
    ::ll::TypedStorage<1, 1, bool>                                       mAreCheatsEnabled;
    ::ll::UntypedStorage<1, 9>                                           mIsWorldTemplateOptionsLocked;
    ::ll::UntypedStorage<8, 112>                                         mLevelListener;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerPermissionsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerPermissionsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerPermissionsFacet(
        ::MinecraftCommands&,
        ::PacketSender&,
        ::LocalPlayerChangedConnector const&,
        ::World::WorldPlayerListTracker&,
        std::function<LocalPlayer*()>,
        std::function<bool()>,
        std::function<bool()>,
        std::function<bool()>
    );

    MCNAPI bool _evaluateCanKickPlayer(::ActorUniqueID);

    MCNAPI void _evaluateStates();

    MCNAPI void _initResources();

    MCNAPI void _reloadPermissions();

    MCNAPI bool _validateLocalPlayer();

    MCNAPI bool areCheatsEnabled() const;

    MCNAPI bool canEditPermissions() const;

    MCNAPI bool canKickPlayer() const;

    MCNAPI void clearErrorFlag(::OreUI::PlayerPermissionsError);

    MCNAPI void enableCheats();

    MCNAPI std::optional<PlayerPermissionLevel> const& getCurrentPlayerPermissionLevel() const;

    MCNAPI ::OreUI::PlayerPermissionsActionState const& getKickCommandState() const;

    MCNAPI bool getOperatorCommandsRevokedFlag() const;

    MCNAPI bool getPlayerIdInvalidFlag() const;

    MCNAPI std::vector<OreUI::PlayerAbilityBindings> const& getPlayerPermissionList() const;

    MCNAPI bool getPlayerPermissionsMissingFlag() const;

    MCNAPI bool getSelectedPlayerLeftFlag() const;

    MCNAPI bool getSelectedPlayerPermissionsChangedFlag() const;

    MCNAPI bool isWorldTemplateOptionsLocked() const;

    MCNAPI void kickPlayer(std::string);

    MCNAPI void loadPlayerPermissions(std::string);

    MCNAPI void requestSavePermissions();

    MCNAPI void setPlayerPermission(std::string, ::AbilitiesIndex, bool);

    MCNAPI void setPlayerPermissionLevel(std::string, ::PlayerPermissionLevel);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[26]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::MinecraftCommands&,
        ::PacketSender&,
        ::LocalPlayerChangedConnector const&,
        ::World::WorldPlayerListTracker&,
        std::function<LocalPlayer*()>,
        std::function<bool()>,
        std::function<bool()>,
        std::function<bool()>
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
