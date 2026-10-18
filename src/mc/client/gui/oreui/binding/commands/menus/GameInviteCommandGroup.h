#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace Social { class MultiplayerServiceManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class GameInviteCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::GameInviteCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>> mMultiplayerService;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::vector<::std::string>>> mInviteXboxPlayers;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::vector<::std::string>>>
        mInvitePlatformPlayers;
    // NOLINTEND

public:
    // prevent constructor by default
    GameInviteCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GameInviteCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};
#else // @header-generator platform
class GameInviteCommandGroup {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
