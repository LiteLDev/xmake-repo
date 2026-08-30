#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GameType.h"

namespace OreUI {

struct FriendWorld {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                mJoinId;
    ::ll::TypedStorage<8, 24, std::string>                mOwnerName;
    ::ll::TypedStorage<8, 24, std::string>                mOwnerId;
    ::ll::TypedStorage<8, 24, std::string>                mWorldName;
    ::ll::TypedStorage<4, 4, ::GameType>                  mGameType;
    ::ll::TypedStorage<1, 1, bool>                        mIsHardcore;
    ::ll::TypedStorage<4, 4, int>                         mPlayerCount;
    ::ll::TypedStorage<4, 4, int>                         mCapacity;
    ::ll::TypedStorage<1, 1, bool>                        mFriendOfFriendWorld;
    ::ll::TypedStorage<1, 1, bool>                        mIsSupportedForPartyTravel;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mRealmId;
    ::ll::TypedStorage<1, 1, bool>                        mIsEditorWorld;
    // NOLINTEND

public:
    // prevent constructor by default
    FriendWorld& operator=(FriendWorld const&);
    FriendWorld(FriendWorld const&);
    FriendWorld();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FriendWorld();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
