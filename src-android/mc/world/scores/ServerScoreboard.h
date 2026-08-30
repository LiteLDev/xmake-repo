#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
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
class CompoundTag;
class DisplayObjective;
class EntityContext;
class GameplayUserManager;
class IActorManagerConnector;
class ILevelStorageManagerConnector;
class Level;
class LevelStorage;
class NetworkIdentifier;
class Objective;
class Packet;
class PacketSender;
class Player;
class ScoreboardIdentityRef;
struct ActorUniqueID;
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
    ::ll::TypedStorage<8, 8, std::unique_ptr<BasicTimer>>      mSaveTimer;
    ::ll::TypedStorage<8, 8, ::LevelStorage*>                  mLevelStorage;
    ::ll::TypedStorage<1, 1, bool>                             mIsDirty;
    ::ll::UntypedStorage<8, 24>                                mGameplayUserManager;
    ::ll::TypedStorage<8, 24, std::vector<const Objective*>>   mTrackedObjectives;
    ::ll::TypedStorage<8, 8, ::PacketSender*>                  mPacketSender;
    ::ll::TypedStorage<8, 16, ::ScoreboardId>                  mLastUniqueSBID;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveSubscription;
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
    // clang-format off
    virtual ~ServerScoreboard();

    virtual ::DisplayObjective const* setDisplayObjective(std::string const&, ::Objective const&, ::ObjectiveSortOrder const);

    virtual ::Objective* clearDisplayObjective(std::string const&);

    virtual ::ScoreboardId const& createScoreboardId(std::string const&);

    virtual ::ScoreboardId const& createScoreboardId(::Actor const&);

    virtual ::ScoreboardId const& createScoreboardId(::Player const&);

    virtual void onObjectiveAdded(::Objective const&);

    virtual void onObjectiveRemoved(::Objective&);

    virtual void onScoreChanged(::ScoreboardId const&, ::Objective const&);

    virtual void onPlayerScoreRemoved(::ScoreboardId const&, ::Objective const&);

    virtual void onPlayerJoined(::Player const&);

    virtual void onPlayerIdentityUpdated(::PlayerScoreboardId const&);

    virtual void tick();

    virtual void setPacketSender(::PacketSender*);

    virtual void writeToLevelStorage();

    virtual bool isClientSide() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerScoreboard(
        ::CommandSoftEnumRegistry,
        ::LevelStorage*,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>
    );

    MCNAPI void _clearAllScoreTagsForObjective(std::string const&, ::DisplayObjective const&);

    MCNAPI void _onGameplayUserRemoved(::EntityContext&);

    MCNAPI void _onRemoveActorEntityReferences(::Actor&);

    MCNAPI void _onSaveEvent(::LevelStorage&);

    MCNAPI std::variant<RemoveScore, ChangePlayerScore, ChangeEntityScore, ChangeFakePlayerScore>
           _unpackIdentityDefToScorePacket(::ScoreboardIdentityRef const&, std::string const&, int);

    MCNAPI void _updateScoreTag(::ScoreboardId const&, bool);

    MCNAPI void initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector&);

    MCNAPI void intializeWithActorManager(::IActorManagerConnector&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::CommandSoftEnumRegistry, ::LevelStorage*, ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::DisplayObjective const*
    $setDisplayObjective(std::string const&, ::Objective const&, ::ObjectiveSortOrder const);

    MCNAPI ::Objective* $clearDisplayObjective(std::string const&);

    MCNAPI ::ScoreboardId const& $createScoreboardId(std::string const&);

    MCNAPI ::ScoreboardId const& $createScoreboardId(::Actor const&);

    MCNAPI ::ScoreboardId const& $createScoreboardId(::Player const&);

    MCNAPI void $onObjectiveAdded(::Objective const&);

    MCNAPI void $onObjectiveRemoved(::Objective&);

    MCNAPI void $onScoreChanged(::ScoreboardId const&, ::Objective const&);

    MCNAPI void $onPlayerScoreRemoved(::ScoreboardId const&, ::Objective const&);

    MCNAPI void $onPlayerJoined(::Player const&);

    MCNAPI void $onPlayerIdentityUpdated(::PlayerScoreboardId const&);

    MCNAPI void $tick();

    MCNAPI void $setPacketSender(::PacketSender*);

    MCNAPI void $writeToLevelStorage();

    MCNAPI bool $isClientSide() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
