#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
struct IGameServerShutdown;
// clang-format on

namespace OreUI {

class LeaveGameCommandGroup : public ::OreUI::CommandGroupBase<OreUI::LeaveGameCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::reference_wrapper<IClientInstance>>     mClient;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<IGameServerShutdown>> mGameServerShutdown;
    ::ll::UntypedStorage<8, 144>                                          mLeaveGame;
    ::ll::UntypedStorage<8, 144>                                          mLeaveGameThenJoinFriendsWorld;
    // NOLINTEND
};

} // namespace OreUI
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
