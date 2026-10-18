#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/scores/IdentityDefinition.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/scores/PlayerScoreSetFunction.h"
#include "mc/world/scores/ScoreboardId.h"
#include "mc/world/scores/ScoreboardOperationResult.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
class Objective;
class Scoreboard;
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorUniqueID;
struct PlayerScoreboardId;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ScoreboardIdentityRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>            mObjectiveReferences;
    ::ll::TypedStorage<8, 16, ::ScoreboardId> mScoreboardId;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ScoreboardIdentityRef& operator=(ScoreboardIdentityRef const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID const& getEntityId() const;
#else // @header-generator platform
    MCAPI ::ScoreboardOperationResult
    modifyScoreInObjective(int& result, ::Objective& objective, int score, ::PlayerScoreSetFunction fn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IdentityDefinition::Type getIdentityType() const;

    MCNAPI std::string const& getName(std::function<const std::string&(ActorUniqueID)> const&) const;

    MCNAPI ::PlayerScoreboardId const& getPlayerId() const;

    MCNAPI ::ScoreboardId const& getScoreboardId() const;

    MCNAPI bool removeFromObjective(::Scoreboard&, ::Objective&);
#else // @header-generator platform
    MCAPI bool removeFromObjective(::Scoreboard& scoreboard, ::Objective& objective);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ScoreboardIdentityRef const& Undefined();
#else // @header-generator platform
    MCAPI static ::ScoreboardIdentityRef const& Undefined();
#endif // @header-generator platform
    // NOLINTEND
};
