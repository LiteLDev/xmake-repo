#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/screens/ProgressScreenNavigation.h"
#include "mc/client/world/JoinRealmWorldResult.h"
#include "mc/client/world/JoinServerWorldResult.h"

namespace OreUI {

struct NetworkWorldJoinerSharedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mJoinThirdPartyServerTask;
    ::ll::UntypedStorage<4, 16> mJoinExternalServerTask;
    ::ll::UntypedStorage<4, 16> mJoinFriendServerTask;
    ::ll::UntypedStorage<4, 16> mJoinLANServerTask;
    ::ll::UntypedStorage<4, 16> mJoinRealmTask;
    ::ll::UntypedStorage<8, 96> mProgressScreenNavigation;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkWorldJoinerSharedData();
};

} // namespace OreUI
