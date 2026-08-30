#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
namespace Social { class MultiplayerPlatformFactory; }
namespace World { class WorldSystem; }
namespace World { struct WorldSystemModuleGameDependencies; }
// clang-format on

struct MinecraftGameArguments {
public:
    // MinecraftGameArguments inner types define
    using CreateWorldSystem =
        ::brstd::move_only_function<std::unique_ptr<World::WorldSystem>(World::WorldSystemModuleGameDependencies&&)
                                        const>;

    using EventSender = ::brstd::move_only_function<void(IMinecraftEventing&) const>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mMultiplayerPlatformFactory;
    ::ll::UntypedStorage<8, 64> mCreateWorldSystem;
    ::ll::UntypedStorage<8, 64> mSendInitEvents;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGameArguments& operator=(MinecraftGameArguments const&);
    MinecraftGameArguments(MinecraftGameArguments const&);
    MinecraftGameArguments();
};
