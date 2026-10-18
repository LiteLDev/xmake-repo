#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
struct IGameServerShutdown;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class LeaveGameCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::LeaveGameCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IClientInstance>>          mClient;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IGameServerShutdown>>      mGameServerShutdown;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                mLeaveGame;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>> mLeaveGameThenJoinFriendsWorld;
    // NOLINTEND

public:
    // prevent constructor by default
    LeaveGameCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LeaveGameCommandGroup(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);

    MCAPI void leaveGame();

    MCAPI void leaveGameThenJoinFriendsWorld(::std::string const& serverId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class LeaveGameCommandGroup {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
