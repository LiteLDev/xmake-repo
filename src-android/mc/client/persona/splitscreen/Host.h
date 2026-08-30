#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/splitscreen/User.h"

namespace splitscreen {

struct Host {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                    mPlayfabID;
    ::ll::TypedStorage<8, 24, std::vector<splitscreen::User>> mSplitscreenPlayers;
    // NOLINTEND
};

} // namespace splitscreen
