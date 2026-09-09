#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class InvocationStatus; }
namespace Social { class MultiplayerServiceManager; }
// clang-format on

namespace OreUI {

class GameInviteCommandGroup : public ::OreUI::CommandGroupBase<OreUI::GameInviteCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mMultiplayerService;
    ::ll::UntypedStorage<8, 144> mInviteXboxPlayers;
    ::ll::UntypedStorage<8, 144> mInvitePlatformPlayers;
    // NOLINTEND

public:
    // prevent constructor by default
    GameInviteCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameInviteCommandGroup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
