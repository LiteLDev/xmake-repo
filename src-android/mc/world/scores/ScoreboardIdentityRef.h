#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/IdentityDefinition.h"
#include "mc/world/scores/PlayerScoreSetFunction.h"
#include "mc/world/scores/ScoreboardId.h"
#include "mc/world/scores/ScoreboardOperationResult.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Objective;
class Scoreboard;
struct ActorUniqueID;
struct PlayerScoreboardId;
// clang-format on

class ScoreboardIdentityRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>            mObjectiveReferences;
    ::ll::TypedStorage<8, 16, ::ScoreboardId> mScoreboardId;
    // NOLINTEND

public:
    // prevent constructor by default
    ScoreboardIdentityRef& operator=(ScoreboardIdentityRef const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ActorUniqueID const& getEntityId() const;

    MCNAPI ::IdentityDefinition::Type getIdentityType() const;

    MCNAPI std::string const& getName(std::function<const std::string&(ActorUniqueID)> const&) const;

    MCNAPI ::PlayerScoreboardId const& getPlayerId() const;

    MCNAPI ::ScoreboardId const& getScoreboardId() const;

    MCNAPI bool removeFromObjective(::Scoreboard&, ::Objective&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ScoreboardIdentityRef const& Undefined();
    // NOLINTEND
};
