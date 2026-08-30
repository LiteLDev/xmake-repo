#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/scripting/modules/minecraft/player/ScriptPlayer.h"

// auto generated forward declare list
// clang-format off
struct IncomingPacketEvent;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptPacketReceiveBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::MinecraftPacketIds> mPacketId;
    ::ll::UntypedStorage<8, 40>                    mSender;
    ::ll::TypedStorage<4, 4, uint>                 mPacketSize;
    ::ll::TypedStorage<1, 1, bool>                 mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPacketReceiveBeforeEvent();
};

} // namespace ScriptModuleMinecraftNet
