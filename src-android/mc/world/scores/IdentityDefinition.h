#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/scores/PlayerScoreboardId.h"
#include "mc/world/scores/ScoreboardId.h"

class IdentityDefinition {
public:
    // IdentityDefinition inner types define
    enum class Type : uchar {
        Invalid    = 0,
        Player     = 1,
        Entity     = 2,
        FakePlayer = 3,
    };

    using PlayerNameResolver = std::function<const std::string&(ActorUniqueID)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ScoreboardId>            mScoreboardId;
    ::ll::TypedStorage<1, 1, bool>                       mIsHiddenFakePlayer;
    ::ll::TypedStorage<8, 8, ::PlayerScoreboardId>       mPlayerId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>            mEntityId;
    ::ll::TypedStorage<8, 24, std::string>               mPlayerName;
    ::ll::TypedStorage<1, 1, ::IdentityDefinition::Type> mIdentityType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ActorUniqueID const& getEntityId() const;

    MCNAPI std::string const& getFakePlayerName() const;

    MCNAPI ::IdentityDefinition::Type getIdentityType() const;

    MCNAPI std::string const& getName(std::function<const std::string&(ActorUniqueID)> const&) const;

    MCNAPI ::PlayerScoreboardId const& getPlayerId() const;

    MCNAPI bool isEntityType() const;

    MCNAPI bool isFakeType() const;

    MCNAPI bool isPlayerType() const;

    MCNAPI bool isValid() const;

    MCNAPI explicit operator bool() const;

    MCNAPI ::IdentityDefinition& operator=(::IdentityDefinition const&);

    MCNAPI ::IdentityDefinition& operator=(::IdentityDefinition&&);

    MCNAPI ~IdentityDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isHiddenFakePlayerNameString(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::IdentityDefinition const& Invalid();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
