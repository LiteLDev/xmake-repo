#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/server/commands/CommandOperator.h"
#include "mc/server/commands/CommandSoftEnumRegistry.h"
#include "mc/world/events/PlayerScoreboardEventListener.h"
#include "mc/world/events/ScoreboardEventCoordinator.h"
#include "mc/world/scores/DisplayObjective.h"
#include "mc/world/scores/IdentityDictionary.h"
#include "mc/world/scores/ObjectiveRenderType.h"
#include "mc/world/scores/ObjectiveSortOrder.h"
#include "mc/world/scores/PlayerScoreSetFunction.h"
#include "mc/world/scores/ScoreboardId.h"
#include "mc/world/scores/ScoreboardIdentityRef.h"
#include "mc/world/scores/ScoreboardOperationResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class Objective;
class ObjectiveCriteria;
class PacketSender;
class Player;
struct ActorUniqueID;
struct PlayerScore;
struct PlayerScoreboardId;
struct ScoreInfo;
// clang-format on

class Scoreboard {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CommandSoftEnumRegistry>                                    mRegistry;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, DisplayObjective>>           mDisplayObjectives;
    ::ll::TypedStorage<8, 160, ::IdentityDictionary>                                       mIdentityDict;
    ::ll::TypedStorage<8, 40, std::unordered_map<ScoreboardId, ScoreboardIdentityRef>>     mIdentityRefs;
    ::ll::TypedStorage<1, 1, bool>                                                         mShouldUpdateUI;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<Objective>>> mObjectives;
    ::ll::UntypedStorage<8, 40>                                                            mObjectivesHashLookup;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<ObjectiveCriteria>>> mCriteria;
    ::ll::UntypedStorage<8, 104>                               mScoreboardEventCoordinator;
    ::ll::TypedStorage<8, 48, ::PlayerScoreboardEventListener> mPlayerListener;
    // NOLINTEND

public:
    // prevent constructor by default
    Scoreboard();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~Scoreboard();

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
    MCNAPI explicit Scoreboard(::CommandSoftEnumRegistry);

    MCNAPI ::Objective* addObjective(std::string const&, std::string const&, ::ObjectiveCriteria const&);

    MCNAPI void addScoreListener(::Player&, std::string const&);

    MCNAPI int applyPlayerOperation(
        ::ScoreboardOperationResult&,
        std::vector<ScoreboardId>&,
        ::ScoreboardId const&,
        ::Objective&,
        std::vector<ScoreboardId>&,
        ::Objective&,
        ::CommandOperator
    );

    MCNAPI bool clearScoreboardIdentity(::ScoreboardId const&);

    MCNAPI ::ObjectiveCriteria const& createObjectiveCriteria(std::string const&, bool, ::ObjectiveRenderType);

    MCNAPI void forEachIdentityRef(std::function<void(ScoreboardIdentityRef&)> const);

    MCNAPI void forEachObjective(std::function<void(Objective&)> const);

    MCNAPI ::ObjectiveCriteria* getCriteria(std::string const&) const;

    MCNAPI std::vector<std::string> getCriteriaNames() const;

    MCNAPI ::ObjectiveCriteria const& getDefaultCriteria() const;

    MCNAPI std::vector<PlayerScore> getDisplayInfoFiltered(std::string const&) const;

    MCNAPI std::vector<PlayerScore> getDisplayInfoSorted(
        std::string const&,
        std::function<void(ObjectiveSortOrder, std::vector<PlayerScore>&)> const
    ) const;

    MCNAPI ::DisplayObjective const* getDisplayObjective(std::string const&) const;

    MCNAPI std::vector<std::string> getDisplayObjectiveSlotNames() const;

    MCNAPI std::vector<ScoreInfo> getIdScores(::ScoreboardId const&) const;

    MCNAPI ::Objective* getObjective(std::string const&) const;

    MCNAPI std::vector<std::string> getObjectiveNames() const;

    MCNAPI std::vector<const Objective*> getObjectives() const;

    MCNAPI ::ScoreboardEventCoordinator& getScoreboardEventCoordinator();

    MCNAPI ::ScoreboardId const& getScoreboardId(::Actor const&) const;

    MCNAPI ::ScoreboardId const& getScoreboardId(::Player const&) const;

    MCNAPI ::ScoreboardId const& getScoreboardId(::PlayerScoreboardId const&) const;

    MCNAPI ::ScoreboardId const& getScoreboardId(::ActorUniqueID const&) const;

    MCNAPI ::ScoreboardId const& getScoreboardId(std::string const&) const;

    MCNAPI ::ScoreboardIdentityRef* getScoreboardIdentityRef(::ScoreboardId const&);

    MCNAPI std::vector<ScoreboardIdentityRef> getScoreboardIdentityRefs() const;

    MCNAPI std::vector<ScoreboardId> getTrackedIds() const;

    MCNAPI bool hasIdentityFor(::ScoreboardId const&) const;

    MCNAPI bool isObjectiveDisplayed(::Objective const&) const;

    MCNAPI int modifyPlayerScore(
        ::ScoreboardOperationResult&,
        ::ScoreboardIdentityRef*,
        ::Objective&,
        int,
        ::PlayerScoreSetFunction
    );

    MCNAPI int
    modifyPlayerScore(::ScoreboardOperationResult&, ::ScoreboardId const&, ::Objective&, int, ::PlayerScoreSetFunction);

    MCNAPI void onUpdateUI();

    MCNAPI ::ScoreboardIdentityRef const&
    registerScoreboardIdentity(::ScoreboardId const&, ::PlayerScoreboardId const&);

    MCNAPI ::ScoreboardIdentityRef const& registerScoreboardIdentity(::ScoreboardId const&, ::ActorUniqueID const&);

    MCNAPI ::ScoreboardIdentityRef const& registerScoreboardIdentity(::ScoreboardId const&, std::string const&);

    MCNAPI bool removeObjective(::Objective*);

    MCNAPI void removeScoreListener(::Player const&, std::string const&);

    MCNAPI void replaceFakePlayer(::ScoreboardId const&, ::PlayerScoreboardId const&);

    MCNAPI bool resetPlayerScore(::ScoreboardId const&, ::Objective&);

    MCNAPI void resetPlayerScore(::ScoreboardId const&);

    MCNAPI bool shouldUpdateUI() const;

    MCNAPI std::optional<ScoreInfo> tryGetIdScore(::ScoreboardId const&, ulong const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& DEFAULT_CRITERIA();

    MCNAPI static std::string const& DISPLAY_SLOT_BELOWNAME();

    MCNAPI static std::string const& DISPLAY_SLOT_LIST();

    MCNAPI static std::string const& DISPLAY_SLOT_SIDEBAR();

    MCNAPI static char const*& OBJECTIVES_ENUM();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CommandSoftEnumRegistry);
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
