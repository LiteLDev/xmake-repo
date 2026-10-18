#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/common/SubClientId.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/scores/ObjectiveSortOrder.h"
#include "mc/world/scores/Scoreboard.h"
#include "mc/world/scores/ScoreboardId.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BasicTimer;
class CommandSoftEnumRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
class DisplayObjective;
class EntityContext;
class GameplayUserManager;
class IActorManagerConnector;
class ILevelStorageManagerConnector;
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
#else // @header-generator platform
#endif // @header-generator platform
class LevelStorage;
#if defined(LL_PLAT_A) // @header-generator platform
class NetworkIdentifier;
#else // @header-generator platform
#endif // @header-generator platform
class Objective;
#if defined(LL_PLAT_A) // @header-generator platform
class Packet;
#else // @header-generator platform
#endif // @header-generator platform
class PacketSender;
class Player;
class ScoreboardIdentityRef;
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorUniqueID;
#else // @header-generator platform
#endif // @header-generator platform
struct ChangeEntityScore;
struct ChangeFakePlayerScore;
struct ChangePlayerScore;
struct PlayerScoreboardId;
struct RemoveScore;
// clang-format on

class ServerScoreboard : public ::Scoreboard {
public:
    // ServerScoreboard inner types declare
    // clang-format off
    struct unit_test_ctor_t;
    // clang-format on

    // ServerScoreboard inner types define
    struct unit_test_ctor_t {};

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<BasicTimer>>      mSaveTimer;
    ::ll::TypedStorage<8, 8, ::LevelStorage*>                  mLevelStorage;
    ::ll::TypedStorage<1, 1, bool>                             mIsDirty;
    ::ll::UntypedStorage<8, 24>                                mGameplayUserManager;
    ::ll::TypedStorage<8, 24, std::vector<const Objective*>>   mTrackedObjectives;
    ::ll::TypedStorage<8, 8, ::PacketSender*>                  mPacketSender;
    ::ll::TypedStorage<8, 16, ::ScoreboardId>                  mLastUniqueSBID;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveSubscription;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BasicTimer>>                             mSaveTimer;
    ::ll::TypedStorage<8, 8, ::LevelStorage*>                                             mLevelStorage;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDirty;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> const> mGameplayUserManager;
    ::ll::TypedStorage<8, 24, ::std::vector<::Objective const*>>                          mTrackedObjectives;
    ::ll::TypedStorage<8, 8, ::PacketSender*>                                             mPacketSender;
    ::ll::TypedStorage<8, 16, ::ScoreboardId>                                             mLastUniqueSBID;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mOnSaveSubscription;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLevelStorageManagerStartLeaveGameSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnRemoveActorEntityReferencesSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserRemovedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerScoreboard();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ServerScoreboard();
#else // @header-generator platform
    virtual ~ServerScoreboard() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::DisplayObjective const* setDisplayObjective(std::string const&, ::Objective const&, ::ObjectiveSortOrder const);
#else // @header-generator platform
    virtual void onObjectiveAdded(::Objective const& objective) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Objective* clearDisplayObjective(std::string const&);
#else // @header-generator platform
    virtual void onObjectiveRemoved(::Objective& objective) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ScoreboardId const& createScoreboardId(std::string const&);
#else // @header-generator platform
    virtual void onScoreChanged(::ScoreboardId const& id, ::Objective const& obj) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ScoreboardId const& createScoreboardId(::Actor const&);
#else // @header-generator platform
    virtual void onPlayerScoreRemoved(::ScoreboardId const& id, ::Objective const& objective) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ScoreboardId const& createScoreboardId(::Player const&);
#else // @header-generator platform
    virtual void setPacketSender(::PacketSender* sender) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onObjectiveAdded(::Objective const&);
#else // @header-generator platform
    virtual ::DisplayObjective const* setDisplayObjective(
        ::std::string const&       displaySlotName,
        ::Objective const&         objective,
        ::ObjectiveSortOrder const order
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onObjectiveRemoved(::Objective&);
#else // @header-generator platform
    virtual ::Objective* clearDisplayObjective(::std::string const& displaySlotName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onScoreChanged(::ScoreboardId const&, ::Objective const&);
#else // @header-generator platform
    virtual void onPlayerJoined(::Player const& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerScoreRemoved(::ScoreboardId const&, ::Objective const&);
#else // @header-generator platform
    virtual void onPlayerIdentityUpdated(::PlayerScoreboardId const& playerId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerJoined(::Player const&);
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerIdentityUpdated(::PlayerScoreboardId const&);
#else // @header-generator platform
    virtual ::ScoreboardId const& createScoreboardId(::Player const& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick();
#else // @header-generator platform
    virtual ::ScoreboardId const& createScoreboardId(::Actor const& entity) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPacketSender(::PacketSender*);
#else // @header-generator platform
    virtual ::ScoreboardId const& createScoreboardId(::std::string const& name) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeToLevelStorage();
#else // @header-generator platform
    virtual void writeToLevelStorage() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isClientSide() const;
    // clang-format on
#else // @header-generator platform
    virtual bool isClientSide() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ServerScoreboard(
        ::CommandSoftEnumRegistry,
        ::LevelStorage*,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>
#else // @header-generator platform
    MCAPI ServerScoreboard(
        ::CommandSoftEnumRegistry                            registry,
        ::LevelStorage*                                      levelStorage,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _clearAllScoreTagsForObjective(std::string const&, ::DisplayObjective const&);
#else // @header-generator platform
    MCAPI void
    _clearAllScoreTagsForObjective(::std::string const& displaySlotName, ::DisplayObjective const& displayObjective);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onGameplayUserRemoved(::EntityContext&);
#else // @header-generator platform
    MCAPI void _onGameplayUserRemoved(::EntityContext& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onRemoveActorEntityReferences(::Actor&);
#else // @header-generator platform
    MCAPI void _onRemoveActorEntityReferences(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onSaveEvent(::LevelStorage&);
#else // @header-generator platform
    MCAPI void _onSaveEvent(::LevelStorage&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::variant<RemoveScore, ChangePlayerScore, ChangeEntityScore, ChangeFakePlayerScore>
           _unpackIdentityDefToScorePacket(::ScoreboardIdentityRef const&, std::string const&, int);
#else // @header-generator platform
    MCAPI ::std::variant<::RemoveScore, ::ChangePlayerScore, ::ChangeEntityScore, ::ChangeFakePlayerScore>
    _unpackIdentityDefToScorePacket(
        ::ScoreboardIdentityRef const& identityDef,
        ::std::string const&           objName,
        int                            score
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _updateScoreTag(::ScoreboardId const&, bool);
#else // @header-generator platform
    MCAPI void _updateScoreTag(::ScoreboardId const& scoreboardId, bool assertOnFakePlayer);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector&);
#else // @header-generator platform
    MCAPI void
    initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void intializeWithActorManager(::IActorManagerConnector&);
#else // @header-generator platform
    MCAPI void intializeWithActorManager(::IActorManagerConnector& actorManagerConnector);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(::CommandSoftEnumRegistry, ::LevelStorage*, ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::CommandSoftEnumRegistry                            registry,
        ::LevelStorage*                                      levelStorage,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DisplayObjective const*
    $setDisplayObjective(std::string const&, ::Objective const&, ::ObjectiveSortOrder const);
#else // @header-generator platform
    MCAPI void $onObjectiveAdded(::Objective const& objective);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Objective* $clearDisplayObjective(std::string const&);
#else // @header-generator platform
    MCAPI void $onObjectiveRemoved(::Objective& objective);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScoreboardId const& $createScoreboardId(std::string const&);
#else // @header-generator platform
    MCAPI void $onScoreChanged(::ScoreboardId const& id, ::Objective const& obj);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScoreboardId const& $createScoreboardId(::Actor const&);
#else // @header-generator platform
    MCAPI void $onPlayerScoreRemoved(::ScoreboardId const& id, ::Objective const& objective);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScoreboardId const& $createScoreboardId(::Player const&);
#else // @header-generator platform
    MCAPI void $setPacketSender(::PacketSender* sender);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onObjectiveAdded(::Objective const&);
#else // @header-generator platform
    MCAPI ::DisplayObjective const* $setDisplayObjective(
        ::std::string const&       displaySlotName,
        ::Objective const&         objective,
        ::ObjectiveSortOrder const order
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onObjectiveRemoved(::Objective&);
#else // @header-generator platform
    MCAPI ::Objective* $clearDisplayObjective(::std::string const& displaySlotName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onScoreChanged(::ScoreboardId const&, ::Objective const&);
#else // @header-generator platform
    MCAPI void $onPlayerJoined(::Player const& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlayerScoreRemoved(::ScoreboardId const&, ::Objective const&);
#else // @header-generator platform
    MCAPI void $onPlayerIdentityUpdated(::PlayerScoreboardId const& playerId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlayerJoined(::Player const&);
#else // @header-generator platform
    MCAPI void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlayerIdentityUpdated(::PlayerScoreboardId const&);
#else // @header-generator platform
    MCAPI ::ScoreboardId const& $createScoreboardId(::Player const& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCAPI ::ScoreboardId const& $createScoreboardId(::Actor const& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setPacketSender(::PacketSender*);
#else // @header-generator platform
    MCAPI ::ScoreboardId const& $createScoreboardId(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeToLevelStorage();
#else // @header-generator platform
    MCAPI void $writeToLevelStorage();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isClientSide() const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD bool $isClientSide() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
