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

#if defined(LL_PLAT_A) // @header-generator platform
    using PlayerNameResolver = std::function<const std::string&(ActorUniqueID)>;
#else // @header-generator platform
    using PlayerNameResolver = ::std::function<::std::string const&(::ActorUniqueID)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ScoreboardId>            mScoreboardId;
    ::ll::TypedStorage<1, 1, bool>                       mIsHiddenFakePlayer;
    ::ll::TypedStorage<8, 8, ::PlayerScoreboardId>       mPlayerId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>            mEntityId;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>               mPlayerName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>             mPlayerName;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::IdentityDefinition::Type> mIdentityType;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    // prevent constructor by default
    IdentityDefinition& operator=(IdentityDefinition const&);
    IdentityDefinition();
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static functions
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isHiddenFakePlayerNameString(std::string const&);
#else // @header-generator platform
    MCAPI IdentityDefinition(::IdentityDefinition const& o);

    MCAPI ::std::string const&
    getName(::std::function<::std::string const&(::ActorUniqueID)> const& playerNameResolver) const;

    MCAPI ::IdentityDefinition& operator=(::IdentityDefinition&& o);

#ifdef LL_PLAT_C
    MCAPI ~IdentityDefinition();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::IdentityDefinition const& Invalid();
#else // @header-generator platform
    MCAPI static ::IdentityDefinition const& Invalid();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IdentityDefinition const& o);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
