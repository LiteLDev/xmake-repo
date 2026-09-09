#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/scores/ObjectiveRenderType.h"
#include "mc/world/scores/PlayerScoreSetFunction.h"
#include "mc/world/scores/ScoreboardId.h"
#include "mc/world/scores/ScoreboardOperationResult.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ObjectiveCriteria;
class Scoreboard;
class ScoreboardIdentityRef;
struct ScoreInfo;
struct ScoreInfoRef;
// clang-format on

class Objective : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<ScoreboardId, int>> mScores;
    ::ll::TypedStorage<8, 24, std::string const>                     mName;
    ::ll::TypedStorage<8, 24, std::string>                           mDisplayName;
    ::ll::TypedStorage<8, 8, ::ObjectiveCriteria const&>             mCriteria;
    // NOLINTEND

public:
    // prevent constructor by default
    Objective& operator=(Objective const&);
    Objective(Objective const&);
    Objective();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Objective();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Objective(std::string const&, ::ObjectiveCriteria const&);

    MCNAPI ::ScoreboardOperationResult _modifyPlayerScore(int&, ::ScoreboardId const&, int, ::PlayerScoreSetFunction);

    MCNAPI ::ObjectiveCriteria const& getCriteria() const;

    MCNAPI std::string const& getDisplayName() const;

    MCNAPI std::string const& getName() const;

    MCNAPI ::ScoreInfo getPlayerScore(::ScoreboardId const&) const;

    MCNAPI std::vector<ScoreboardId> getPlayers() const;

    MCNAPI std::unordered_map<ScoreboardId, int> const& getScores() const;

    MCNAPI bool hasScore(::ScoreboardId const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, ::ObjectiveCriteria const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
