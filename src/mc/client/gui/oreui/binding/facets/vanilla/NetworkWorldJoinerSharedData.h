#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/screens/ProgressScreenNavigation.h"
#include "mc/client/world/JoinRealmWorldResult.h"
#include "mc/client/world/JoinServerWorldResult.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/screens/ProgressScreenNavigation.h"
#include "mc/client/world/JoinRealmWorldResult.h"
#include "mc/client/world/JoinServerWorldResult.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct NetworkWorldJoinerSharedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::JoinServerWorldResult>> mJoinThirdPartyServerTask;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::JoinServerWorldResult>> mJoinExternalServerTask;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::JoinServerWorldResult>> mJoinFriendServerTask;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::JoinServerWorldResult>> mJoinLANServerTask;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::JoinRealmWorldResult>>  mJoinRealmTask;
    ::ll::TypedStorage<8, 104, ::ui::ProgressScreenNavigation>                           mProgressScreenNavigation;
    // NOLINTEND
};
#else // @header-generator platform
struct NetworkWorldJoinerSharedData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
