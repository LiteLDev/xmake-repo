#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct IGameServerShutdown {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameServerShutdown() = default;

    virtual void requestLeaveGame(bool, bool) = 0;

    virtual void requestLeaveThenJoinFriendsWorld(std::string_view) = 0;

    virtual void requestLeaveGameWithWorldThumbnail() = 0;

    virtual void requestLeaveGameWithWorldThumbnailThenJoinFriendsWorld(std::string_view) = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct IGameServerShutdown {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameServerShutdown() = default;

    virtual void requestLeaveGame(bool switchScreen, bool sync) = 0;

    virtual void requestLeaveThenJoinFriendsWorld(::std::string_view serverId) = 0;

    virtual void requestLeaveGameWithWorldThumbnail() = 0;

    virtual void requestLeaveGameWithWorldThumbnailThenJoinFriendsWorld(::std::string_view serverId) = 0;
    // NOLINTEND
};
#else // @header-generator platform
struct IGameServerShutdown {};
#endif // @header-generator platform
#endif // @header-generator platform
