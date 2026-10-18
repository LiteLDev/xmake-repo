#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/scores/PlayerScoreSetFunction.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/server/commands/CommandOperator.h"
#include "mc/server/commands/CommandSoftEnumRegistry.h"
#include "mc/world/events/PlayerScoreboardEventListener.h"
#include "mc/world/events/ScoreboardEventCoordinator.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/scores/DisplayObjective.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/scores/IdentityDictionary.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/scores/ObjectiveRenderType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/scores/ObjectiveSortOrder.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/scores/PlayerScoreSetFunction.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/scores/ScoreboardId.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/scores/ScoreboardIdentityRef.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/scores/ScoreboardOperationResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
class DisplayObjective;
#endif // @header-generator platform
class Objective;
class ObjectiveCriteria;
class PacketSender;
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ScoreboardIdentityRef;
#endif // @header-generator platform
struct ActorUniqueID;
struct PlayerScore;
struct PlayerScoreboardId;
struct ScoreInfo;
// clang-format on

class Scoreboard {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::CommandSoftEnumRegistry>                                            mRegistry;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::DisplayObjective>>             mDisplayObjectives;
    ::ll::TypedStorage<8, 256, ::IdentityDictionary>                                               mIdentityDict;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ScoreboardId, ::ScoreboardIdentityRef>>       mIdentityRefs;
    ::ll::TypedStorage<1, 1, bool>                                                                 mShouldUpdateUI;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::Objective>>> mObjectives;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::Bedrock::NonOwnerPointer<::Objective>>>
        mObjectivesHashLookup;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::ObjectiveCriteria>>> mCriteria;
    ::ll::TypedStorage<8, 96, ::ScoreboardEventCoordinator>    mScoreboardEventCoordinator;
    ::ll::TypedStorage<8, 72, ::PlayerScoreboardEventListener> mPlayerListener;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Scoreboard();

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LLAPI int modifyPlayerScore(
        ScoreboardOperationResult& result,
        ScoreboardId const&        id,
        Objective&                 objective,
        int                        scoreValue,
        PlayerScoreSetFunction     action
    );

    LLNDAPI ScoreboardId getId(PlayerScoreboardId const& playerId) const;

    [[nodiscard]] std::vector<::Objective const*> getObjectives() const {
        std::vector<::Objective const*> result;
        for (auto const& [name, objective] : *mObjectives) {
            result.emplace_back(objective.get());
        }
        return result;
    }

    LLAPI bool resetPlayerScore(::ScoreboardId const& id, ::Objective& objective);

public:
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~Scoreboard();
#else // @header-generator platform
    virtual ~Scoreboard() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::DisplayObjective const* setDisplayObjective(std::string const&, ::Objective const&, ::ObjectiveSortOrder const);
#else // @header-generator platform
    virtual ::DisplayObjective const* setDisplayObjective(
        ::std::string const&       displaySlotName,
        ::Objective const&         objective,
        ::ObjectiveSortOrder const order
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Objective* clearDisplayObjective(std::string const&);
#else // @header-generator platform
    virtual ::Objective* clearDisplayObjective(::std::string const& displaySlotName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ScoreboardId const& createScoreboardId(std::string const&);
#else // @header-generator platform
    virtual ::ScoreboardId const& createScoreboardId(::Player const& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ScoreboardId const& createScoreboardId(::Actor const&);
#else // @header-generator platform
    virtual ::ScoreboardId const& createScoreboardId(::Actor const& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ScoreboardId const& createScoreboardId(::Player const&);
#else // @header-generator platform
    virtual ::ScoreboardId const& createScoreboardId(::std::string const& fakePlayer);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onObjectiveAdded(::Objective const&);
#else // @header-generator platform
    virtual void onObjectiveAdded(::Objective const& objective);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onObjectiveRemoved(::Objective&);
#else // @header-generator platform
    virtual void onObjectiveRemoved(::Objective& objective);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onScoreChanged(::ScoreboardId const&, ::Objective const&);
#else // @header-generator platform
    virtual void onScoreChanged(::ScoreboardId const& id, ::Objective const& obj);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerScoreRemoved(::ScoreboardId const&, ::Objective const&);
#else // @header-generator platform
    virtual void onPlayerScoreRemoved(::ScoreboardId const& id, ::Objective const& objective);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerJoined(::Player const&);
#else // @header-generator platform
    virtual void onPlayerJoined(::Player const& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerIdentityUpdated(::PlayerScoreboardId const&);
#else // @header-generator platform
    virtual void onPlayerIdentityUpdated(::PlayerScoreboardId const& playerId);
#endif // @header-generator platform

    virtual void tick();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPacketSender(::PacketSender*);
#else // @header-generator platform
    virtual void setPacketSender(::PacketSender* sender);
#endif // @header-generator platform

    virtual void writeToLevelStorage();

    virtual bool isClientSide() const;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit Scoreboard(::CommandSoftEnumRegistry);
#else // @header-generator platform
    MCAPI explicit Scoreboard(::CommandSoftEnumRegistry registry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Objective* addObjective(std::string const&, std::string const&, ::ObjectiveCriteria const&);
#else // @header-generator platform
    MCAPI ::Objective*
    addObjective(::std::string const& name, ::std::string const& displayName, ::ObjectiveCriteria const& criteria);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addScoreListener(::Player&, std::string const&);

    MCNAPI int applyPlayerOperation(
        ::ScoreboardOperationResult&,
        std::vector<ScoreboardId>&,
        ::ScoreboardId const&,
        ::Objective&,
        std::vector<ScoreboardId>&,
        ::Objective&,
        ::CommandOperator
#else // @header-generator platform
    MCAPI int applyPlayerOperation(
        ::ScoreboardOperationResult&   result,
        ::std::vector<::ScoreboardId>& sourceErrorIds,
        ::ScoreboardId const&          target,
        ::Objective&                   targetObjective,
        ::std::vector<::ScoreboardId>& selector,
        ::Objective&                   objective,
        ::CommandOperator              opCode
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool clearScoreboardIdentity(::ScoreboardId const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool clearScoreboardIdentity(::ScoreboardId const& scoreboardId);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ObjectiveCriteria const& createObjectiveCriteria(std::string const&, bool, ::ObjectiveRenderType);
#else // @header-generator platform
    MCAPI ::ObjectiveCriteria* getCriteria(::std::string const& criteriaName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachIdentityRef(std::function<void(ScoreboardIdentityRef&)> const);
#else // @header-generator platform
    MCAPI ::std::vector<::PlayerScore> getDisplayInfoFiltered(::std::string const& displaySlot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachObjective(std::function<void(Objective&)> const);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::vector<::PlayerScore> getDisplayInfoSorted(
        ::std::string const&                                                       displaySlot,
        ::std::function<void(::ObjectiveSortOrder, ::std::vector<::PlayerScore>&)> sortMethod
    ) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ObjectiveCriteria* getCriteria(std::string const&) const;
#else // @header-generator platform
    MCAPI ::DisplayObjective const* getDisplayObjective(::std::string const& displaySlotName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> getCriteriaNames() const;
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> getDisplayObjectiveSlotNames() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ObjectiveCriteria const& getDefaultCriteria() const;
#else // @header-generator platform
    MCAPI ::Objective* getObjective(::std::string const& name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<PlayerScore> getDisplayInfoFiltered(std::string const&) const;
#else // @header-generator platform
    MCAPI ::ScoreboardId const& getScoreboardId(::Actor const& entity) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<PlayerScore> getDisplayInfoSorted(
        std::string const&,
        std::function<void(ObjectiveSortOrder, std::vector<PlayerScore>&)> const
    ) const;
#else // @header-generator platform
    MCAPI ::ScoreboardId const& getScoreboardId(::ActorUniqueID const& entityId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DisplayObjective const* getDisplayObjective(std::string const&) const;
#else // @header-generator platform
    MCAPI ::ScoreboardId const& getScoreboardId(::std::string const& name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> getDisplayObjectiveSlotNames() const;
#else // @header-generator platform
    MCAPI ::std::vector<::ScoreboardId> getTrackedIds() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ScoreInfo> getIdScores(::ScoreboardId const&) const;
#else // @header-generator platform
    MCAPI ::ScoreboardIdentityRef const&
    registerScoreboardIdentity(::ScoreboardId const& scoreboardId, ::PlayerScoreboardId const& playerId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Objective* getObjective(std::string const&) const;
#else // @header-generator platform
    MCAPI bool removeObjective(::Objective* objective);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> getObjectiveNames() const;
#else // @header-generator platform
    MCAPI void removeScoreListener(::Player const& player, ::std::string const& objective);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<const Objective*> getObjectives() const;
#else // @header-generator platform
    MCAPI void resetPlayerScore(::ScoreboardId const& id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::std::optional<::ScoreInfo> tryGetIdScore(::ScoreboardId const& id, uint64 const& objectiveHash) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& DEFAULT_CRITERIA();
#else // @header-generator platform
    MCAPI static ::std::string const& DEFAULT_CRITERIA();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& DISPLAY_SLOT_BELOWNAME();
#else // @header-generator platform
    MCAPI static ::std::string const& DISPLAY_SLOT_BELOWNAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& DISPLAY_SLOT_LIST();
#else // @header-generator platform
    MCAPI static ::std::string const& DISPLAY_SLOT_LIST();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& DISPLAY_SLOT_SIDEBAR();
#else // @header-generator platform
    MCAPI static ::std::string const& DISPLAY_SLOT_SIDEBAR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static char const*& OBJECTIVES_ENUM();
#else // @header-generator platform
    MCAPI static char const*& OBJECTIVES_ENUM();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::CommandSoftEnumRegistry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::CommandSoftEnumRegistry registry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DisplayObjective const*
    $setDisplayObjective(std::string const&, ::Objective const&, ::ObjectiveSortOrder const);
#else // @header-generator platform
    MCAPI ::DisplayObjective const* $setDisplayObjective(
        ::std::string const&       displaySlotName,
        ::Objective const&         objective,
        ::ObjectiveSortOrder const order
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Objective* $clearDisplayObjective(std::string const&);
#else // @header-generator platform
    MCAPI ::Objective* $clearDisplayObjective(::std::string const& displaySlotName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScoreboardId const& $createScoreboardId(std::string const&);
#else // @header-generator platform
    MCAPI ::ScoreboardId const& $createScoreboardId(::Player const& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScoreboardId const& $createScoreboardId(::Actor const&);
#else // @header-generator platform
    MCAPI ::ScoreboardId const& $createScoreboardId(::Actor const& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScoreboardId const& $createScoreboardId(::Player const&);
#else // @header-generator platform
    MCAPI ::ScoreboardId const& $createScoreboardId(::std::string const& fakePlayer);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onObjectiveAdded(::Objective const&);
#else // @header-generator platform
    MCAPI void $onObjectiveAdded(::Objective const& objective);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onObjectiveRemoved(::Objective&);
#else // @header-generator platform
    MCAPI void $onObjectiveRemoved(::Objective& objective);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onScoreChanged(::ScoreboardId const&, ::Objective const&);
#else // @header-generator platform
    MCAPI void $onScoreChanged(::ScoreboardId const& id, ::Objective const& obj);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlayerScoreRemoved(::ScoreboardId const&, ::Objective const&);
#else // @header-generator platform
    MCAPI void $onPlayerScoreRemoved(::ScoreboardId const& id, ::Objective const& objective);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlayerJoined(::Player const&);
#else // @header-generator platform
    MCFOLD void $onPlayerJoined(::Player const& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlayerIdentityUpdated(::PlayerScoreboardId const&);
#else // @header-generator platform
    MCAPI void $onPlayerIdentityUpdated(::PlayerScoreboardId const& playerId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCFOLD void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setPacketSender(::PacketSender*);
#else // @header-generator platform
    MCFOLD void $setPacketSender(::PacketSender* sender);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeToLevelStorage();
#else // @header-generator platform
    MCFOLD void $writeToLevelStorage();
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
