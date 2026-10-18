#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/GameType.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/GameType.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct FriendWorld {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                  mJoinId;
    ::ll::TypedStorage<8, 32, ::std::string>                  mOwnerName;
    ::ll::TypedStorage<8, 32, ::std::string>                  mOwnerId;
    ::ll::TypedStorage<8, 32, ::std::string>                  mWorldName;
    ::ll::TypedStorage<4, 4, ::GameType>                      mGameType;
    ::ll::TypedStorage<1, 1, bool>                            mIsHardcore;
    ::ll::TypedStorage<4, 4, int>                             mPlayerCount;
    ::ll::TypedStorage<4, 4, int>                             mCapacity;
    ::ll::TypedStorage<1, 1, bool>                            mFriendOfFriendWorld;
    ::ll::TypedStorage<1, 1, bool>                            mIsSupportedForPartyTravel;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mRealmId;
    ::ll::TypedStorage<1, 1, bool>                            mIsEditorWorld;
    // NOLINTEND
};
#else // @header-generator platform
struct FriendWorld {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
