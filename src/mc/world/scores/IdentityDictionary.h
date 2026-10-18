#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/scores/IdentityDefinition.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/scores/PlayerScoreboardId.h"
#include "mc/world/scores/ScoreboardId.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class IdentityDefinition;
// clang-format on
#endif // @header-generator platform

class IdentityDictionary {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<PlayerScoreboardId, ScoreboardId>> mPlayers;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, ScoreboardId>>      mEntities;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ScoreboardId>>        mFakes;
    ::ll::TypedStorage<8, 40, std::unordered_map<ScoreboardId, IdentityDefinition>> mIdentityDefs;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::PlayerScoreboardId, ::ScoreboardId>> mPlayers;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::ScoreboardId>>      mEntities;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::ScoreboardId>>        mFakes;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ScoreboardId, ::IdentityDefinition>> mIdentityDefs;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool clearIdentity(::ScoreboardId const&);
#else // @header-generator platform
    MCAPI bool clearIdentity(::ScoreboardId const& scoreboardId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScoreboardId const& convertFakeToReal(::ScoreboardId const&, ::PlayerScoreboardId const&);
#else // @header-generator platform
    MCAPI ::ScoreboardId const&
    convertFakeToReal(::ScoreboardId const& scoreboardId, ::PlayerScoreboardId const& playerId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ScoreboardId> getAllScoreboardIds() const;

    MCNAPI ~IdentityDictionary();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::ScoreboardId const& getScoreboardId(::std::string const& fakePlayerName) const;
#endif // @header-generator platform
    // NOLINTEND
};
