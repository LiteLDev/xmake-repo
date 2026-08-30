#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/scores/IdentityDefinition.h"
#include "mc/world/scores/PlayerScoreboardId.h"
#include "mc/world/scores/ScoreboardId.h"

class IdentityDictionary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<PlayerScoreboardId, ScoreboardId>> mPlayers;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, ScoreboardId>>      mEntities;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ScoreboardId>>        mFakes;
    ::ll::TypedStorage<8, 40, std::unordered_map<ScoreboardId, IdentityDefinition>> mIdentityDefs;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool clearIdentity(::ScoreboardId const&);

    MCNAPI ::ScoreboardId const& convertFakeToReal(::ScoreboardId const&, ::PlayerScoreboardId const&);

    MCNAPI std::vector<ScoreboardId> getAllScoreboardIds() const;

    MCNAPI ~IdentityDictionary();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
