#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/World.h"
#include "mc/client/world/WorldInfo.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct Player; }
// clang-format on

struct RealmsWorldInfo : public ::WorldInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>               mPlayerCount;
    ::ll::TypedStorage<4, 4, int>               mUnreadStoryCount;
    ::ll::TypedStorage<8, 24, std::string>      mOwnerName;
    ::ll::TypedStorage<8, 24, std::string>      mOwnerXuid;
    ::ll::TypedStorage<8, 24, std::string>      mWorldName;
    ::ll::TypedStorage<8, 24, std::string>      mSlotName;
    ::ll::TypedStorage<8, 24, std::string>      mFriendlyId;
    ::ll::TypedStorage<1, 1, bool>              mOwner;
    ::ll::TypedStorage<1, 1, bool>              mExpired;
    ::ll::TypedStorage<1, 1, bool>              mFull;
    ::ll::TypedStorage<8, 608, ::Realms::World> mWorld;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldInfo& operator=(RealmsWorldInfo const&);
    RealmsWorldInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsWorldInfo(::RealmsWorldInfo const&);

    MCNAPI RealmsWorldInfo(::RealmsWorldInfo&&);

    MCNAPI RealmsWorldInfo(::Realms::World const&, std::string const&);

    MCNAPI std::string const getOwnerName() const;

    MCNAPI int getPlayerCount() const;

    MCNAPI bool getRealmFull() const;

    MCNAPI ::Realms::World const& getRealmWorld() const;

    MCNAPI ::Realms::World& getRealmWorld();

    MCNAPI bool getStoriesAreNotificationsEnabled() const;

    MCNAPI int getUnreadStoryCount() const;

    MCNAPI std::string const& getWorldName() const;

    MCNAPI bool hasExpired() const;

    MCNAPI bool isHardcore() const;

    MCNAPI bool isOwner() const;

    MCNAPI void setExpired(bool);

    MCNAPI void setIsHardcore(bool);

    MCNAPI void setOwnerName(std::string const&);

    MCNAPI void setOwnerXuid(std::string const&);

    MCNAPI void setPlayerCount(int);

    MCNAPI void setRealmFull(bool);

    MCNAPI void setRealmWorld(::Realms::World&);

    MCNAPI void setSlotName(std::string const&);

    MCNAPI void setUnreadStoryCount(int);

    MCNAPI void setWorldName(std::string const&);

    MCNAPI bool updateOnlinePlayers(std::vector<Realms::Player>);

    MCNAPI ~RealmsWorldInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RealmsWorldInfo const&);

    MCNAPI void* $ctor(::RealmsWorldInfo&&);

    MCNAPI void* $ctor(::Realms::World const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
