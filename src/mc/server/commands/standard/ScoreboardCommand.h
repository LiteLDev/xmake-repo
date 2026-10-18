#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandOperator.h"
#include "mc/server/commands/CommandWildcardInt.h"
#include "mc/server/commands/WildcardCommandSelector.h"
#include "mc/world/scores/ObjectiveSortOrder.h"
#include "mc/world/scores/PlayerScoreSetFunction.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Objective;
class Scoreboard;
#if defined(LL_PLAT_A) // @header-generator platform
class ServerLevel;
#else // @header-generator platform
#endif // @header-generator platform
struct ActorUniqueID;
struct ScoreboardId;
// clang-format on

class ScoreboardCommand : public ::Command {
public:
    // ScoreboardCommand inner types declare
    // clang-format off
    struct InitProxy;
    struct SetScoreOutput;
    // clang-format on

    // ScoreboardCommand inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class Category : int {
        Objectives = 0,
        Players    = 1,
    };

#else // @header-generator platform
#endif // @header-generator platform
    enum class Action : int {
        Invalid    = 0,
        Add        = 1,
        List       = 2,
        Operation  = 3,
        Random     = 4,
        Remove     = 5,
        Reset      = 6,
        Set        = 7,
        SetDisplay = 8,
        Test       = 9,
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    };

    enum class Category : int {
        Objectives = 0,
        Players    = 1,
#endif // @header-generator platform
    };

    struct InitProxy {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Scoreboard&> mScoreboard;
        // NOLINTEND

    public:
        // prevent constructor by default
        InitProxy& operator=(InitProxy const&);
        InitProxy(InitProxy const&);
        InitProxy();
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit InitProxy(::ServerLevel&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::ServerLevel&);
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
    };

    struct SetScoreOutput {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, int>          mSuccessCount;
        ::ll::TypedStorage<4, 4, int>          mFirstNewScore;
        ::ll::TypedStorage<8, 24, std::string> mFirstSuccess;
#else // @header-generator platform
        ::ll::TypedStorage<4, 4, int>            mSuccessCount;
        ::ll::TypedStorage<4, 4, int>            mFirstNewScore;
        ::ll::TypedStorage<8, 32, ::std::string> mFirstSuccess;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ScoreboardCommand::Category> mCategory;
    ::ll::TypedStorage<4, 4, ::ScoreboardCommand::Action>   mAction;
    ::ll::TypedStorage<8, 24, std::string>                  mObjective;
    ::ll::TypedStorage<8, 24, std::string>                  mSourceObjective;
    ::ll::TypedStorage<1, 1, ::ObjectiveSortOrder>          mOrder;
    ::ll::TypedStorage<8, 24, std::string>                  mCriteria;
    ::ll::TypedStorage<8, 24, std::string>                  mName;
    ::ll::TypedStorage<8, 24, std::string>                  mDisplayName;
    ::ll::UntypedStorage<8, 200>                            mTargets;
    ::ll::UntypedStorage<8, 200>                            mSources;
    ::ll::TypedStorage<1, 1, ::CommandOperator>             mOperator;
    ::ll::TypedStorage<4, 8, ::CommandWildcardInt>          mMin;
    ::ll::TypedStorage<4, 8, ::CommandWildcardInt>          mMax;
    ::ll::TypedStorage<4, 4, int>                           mRandMin;
    ::ll::TypedStorage<4, 4, int>                           mRandMax;
    ::ll::TypedStorage<4, 4, int>                           mValue;
    ::ll::TypedStorage<1, 1, bool>                          mTargetsSet;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ScoreboardCommand::Category>        mCategory;
    ::ll::TypedStorage<4, 4, ::ScoreboardCommand::Action>          mAction;
    ::ll::TypedStorage<8, 32, ::std::string>                       mObjective;
    ::ll::TypedStorage<8, 32, ::std::string>                       mSourceObjective;
    ::ll::TypedStorage<1, 1, ::ObjectiveSortOrder>                 mOrder;
    ::ll::TypedStorage<8, 32, ::std::string>                       mCriteria;
    ::ll::TypedStorage<8, 32, ::std::string>                       mName;
    ::ll::TypedStorage<8, 32, ::std::string>                       mDisplayName;
    ::ll::TypedStorage<8, 200, ::WildcardCommandSelector<::Actor>> mTargets;
    ::ll::TypedStorage<8, 200, ::WildcardCommandSelector<::Actor>> mSources;
    ::ll::TypedStorage<1, 1, ::CommandOperator>                    mOperator;
    ::ll::TypedStorage<4, 8, ::CommandWildcardInt>                 mMin;
    ::ll::TypedStorage<4, 8, ::CommandWildcardInt>                 mMax;
    ::ll::TypedStorage<4, 4, int>                                  mRandMin;
    ::ll::TypedStorage<4, 4, int>                                  mRandMax;
    ::ll::TypedStorage<4, 4, int>                                  mValue;
    ::ll::TypedStorage<1, 1, bool>                                 mTargetsSet;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScoreboardCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Objective* _getObjective(::Scoreboard const&, std::string const&, bool, ::CommandOutput&) const;

    MCNAPI std::vector<ScoreboardId> _getScoreboardIdsForSelector(
        ::Scoreboard&,
        ::WildcardCommandSelector<Actor> const&,
        ::CommandOrigin const&,
        ::CommandOutput&,
        bool
#else // @header-generator platform
    MCAPI ::Objective* _getObjective(
        ::Scoreboard const&  scoreboard,
        ::std::string const& name,
        bool                 forWrite,
        ::CommandOutput&     output
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addPlayerScore(
        ::Scoreboard&,
        ::PlayerScoreSetFunction,
        ::ScoreboardId const&,
        ::Objective&,
        std::function<const std::string&(ActorUniqueID)> const&,
        ::CommandOutput&,
        ::ScoreboardCommand::SetScoreOutput&
#else // @header-generator platform
    MCAPI ::std::vector<::ScoreboardId> _getScoreboardIdsForSelector(
        ::Scoreboard&                             scoreboard,
        ::WildcardCommandSelector<::Actor> const& selector,
        ::CommandOrigin const&                    origin,
        ::CommandOutput&                          output,
        bool                                      shouldCreateMissingId
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void players(::Scoreboard&, ::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    MCAPI void addPlayerScore(
        ::Scoreboard&                                                 scoreboard,
        ::PlayerScoreSetFunction                                      fn,
        ::ScoreboardId const&                                         targetId,
        ::Objective&                                                  objective,
        ::std::function<::std::string const&(::ActorUniqueID)> const& playerNameResolver,
        ::CommandOutput&                                              output,
        ::ScoreboardCommand::SetScoreOutput&                          cumulativeOutput
    ) const;

    MCAPI void players(::Scoreboard& scoreboard, ::CommandOrigin const& origin, ::CommandOutput& output) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setup(::CommandRegistry&, ::ScoreboardCommand::InitProxy&&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI static ::std::vector<::std::string> _getNonSortableDisplaySlots(::Scoreboard& scoreboard);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void setup(::CommandRegistry& registry, ::ScoreboardCommand::InitProxy&& dependencies);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
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
