#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/commands/PlayerPermissionsCommandsUtils.h"
#include "mc/client/commands/PlayerPermissionsLevelListener.h"
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/world/level/PlayerPermissionsActionState.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/world/level/PlayerPermissionsError.h"
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
namespace OreUI { struct PlayerAbilityBindings; }
namespace World { class WorldPlayerListTracker; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class PlayerPermissionsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::PlayerPermissionsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>   mLocalPlayerSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>   mPlayerPermissionsChangedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>   mPlayerListChangedSubscription;
    ::ll::TypedStorage<8, 64, ::std::function<::LocalPlayer*()>> mGetCurrentLocalPlayer;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>           mIsInGame;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>           mIsPrimaryClient;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>           mIsHostingLocalDedicatedServer;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PlayerPermissionsManager>> mPlayerPermissionsManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PlayerPermissionsSynchroniser>>
                                                                             mPlayerPermissionsSynchroniser;
    ::ll::TypedStorage<8, 80, ::PlayerPermissionsCommandsUtils>              mCommandsUtils;
    ::ll::TypedStorage<1, 1, bool>                                           mPlayerIdInvalidFlag;
    ::ll::TypedStorage<1, 1, bool>                                           mPlayerPermissionsMissingFlag;
    ::ll::TypedStorage<1, 1, bool>                                           mSelectedPlayerLeftFlag;
    ::ll::TypedStorage<1, 1, bool>                                           mSelectedPlayerPermissionsChangedFlag;
    ::ll::TypedStorage<1, 1, bool>                                           mOperatorCommandsRevokedFlag;
    ::ll::TypedStorage<1, 1, ::OreUI::PlayerPermissionsActionState>          mKickCommandState;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                mCurrentPlayerID;
    ::ll::TypedStorage<1, 2, ::std::optional<::PlayerPermissionLevel>>       mCurrentPlayerPermissionLevel;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::PlayerAbilityBindings>> mPlayerPermissionList;
    ::ll::TypedStorage<1, 1, bool>                                           mCanEditPermissions;
    ::ll::TypedStorage<1, 1, bool>                                           mCanKickPlayer;
    ::ll::TypedStorage<1, 1, bool>                                           mLocalPlayerLoaded;
    ::ll::TypedStorage<1, 1, bool>                                           mPermissionsChanged;
    ::ll::TypedStorage<1, 1, bool>                                           mStatesChanged;
    ::ll::TypedStorage<1, 1, bool>                                           mErrorFlagsChanged;
    ::ll::TypedStorage<1, 1, bool>                                           mAreCheatsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                           mIsWorldTemplateOptionsLocked;
    ::ll::TypedStorage<8, 136, ::PlayerPermissionsLevelListener>             mLevelListener;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerPermissionsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerPermissionsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerPermissionsFacet(
        ::MinecraftCommands&                 commands,
        ::PacketSender&                      packetSender,
        ::LocalPlayerChangedConnector const& localPlayerChangedConnector,
        ::World::WorldPlayerListTracker&     worldPlayerListTracker,
        ::std::function<::LocalPlayer*()>    getCurrentLocalPlayer,
        ::std::function<bool()>              isInGame,
        ::std::function<bool()>              isPrimaryClient,
        ::std::function<bool()>              isHostingLocalDedicatedServer
    );

    MCAPI bool _evaluateCanKickPlayer(::ActorUniqueID playerId);

    MCAPI void _evaluateStates();

    MCAPI void _initResources();

    MCAPI void _reloadPermissions();

    MCAPI bool _validateLocalPlayer();

    MCAPI bool areCheatsEnabled() const;

    MCAPI bool canEditPermissions() const;

    MCAPI bool canKickPlayer() const;

    MCAPI void clearErrorFlag(::OreUI::PlayerPermissionsError error);

    MCAPI void enableCheats();

    MCAPI ::std::optional<::PlayerPermissionLevel> const& getCurrentPlayerPermissionLevel() const;

    MCAPI ::OreUI::PlayerPermissionsActionState const& getKickCommandState() const;

    MCAPI bool getOperatorCommandsRevokedFlag() const;

    MCAPI bool getPlayerIdInvalidFlag() const;

    MCFOLD ::std::vector<::OreUI::PlayerAbilityBindings> const& getPlayerPermissionList() const;

    MCAPI bool getPlayerPermissionsMissingFlag() const;

    MCAPI bool getSelectedPlayerLeftFlag() const;

    MCAPI bool getSelectedPlayerPermissionsChangedFlag() const;

    MCAPI bool isWorldTemplateOptionsLocked() const;

    MCAPI void kickPlayer(::std::string playerId);

    MCAPI void loadPlayerPermissions(::std::string playerId);

    MCAPI void requestSavePermissions();

    MCAPI void setPlayerPermission(::std::string playerId, ::AbilitiesIndex abilityIndex, bool isEnabled);

    MCAPI void setPlayerPermissionLevel(::std::string playerId, ::PlayerPermissionLevel playerPermissionLevel);
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
        ::MinecraftCommands&                 commands,
        ::PacketSender&                      packetSender,
        ::LocalPlayerChangedConnector const& localPlayerChangedConnector,
        ::World::WorldPlayerListTracker&     worldPlayerListTracker,
        ::std::function<::LocalPlayer*()>    getCurrentLocalPlayer,
        ::std::function<bool()>              isInGame,
        ::std::function<bool()>              isPrimaryClient,
        ::std::function<bool()>              isHostingLocalDedicatedServer
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class PlayerPermissionsFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
