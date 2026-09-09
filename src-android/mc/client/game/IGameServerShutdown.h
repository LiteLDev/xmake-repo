#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
