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
class ServerLevel;
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
    enum class Category : int {
        Objectives = 0,
        Players    = 1,
    };

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
    };

    struct SetScoreOutput {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>          mSuccessCount;
        ::ll::TypedStorage<4, 4, int>          mFirstNewScore;
        ::ll::TypedStorage<8, 24, std::string> mFirstSuccess;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScoreboardCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Objective* _getObjective(::Scoreboard const&, std::string const&, bool, ::CommandOutput&) const;

    MCNAPI std::vector<ScoreboardId> _getScoreboardIdsForSelector(
        ::Scoreboard&,
        ::WildcardCommandSelector<Actor> const&,
        ::CommandOrigin const&,
        ::CommandOutput&,
        bool
    ) const;

    MCNAPI void addPlayerScore(
        ::Scoreboard&,
        ::PlayerScoreSetFunction,
        ::ScoreboardId const&,
        ::Objective&,
        std::function<const std::string&(ActorUniqueID)> const&,
        ::CommandOutput&,
        ::ScoreboardCommand::SetScoreOutput&
    ) const;

    MCNAPI void players(::Scoreboard&, ::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setup(::CommandRegistry&, ::ScoreboardCommand::InitProxy&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
