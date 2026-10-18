#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/scripting/modules/minecraft/player/ScriptPlayer.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct OutgoingPacketEvent;
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptPacketSendBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::MinecraftPacketIds> mPacketId;
    ::ll::UntypedStorage<8, 24>                    mRecipients;
    ::ll::TypedStorage<1, 1, bool>                 mCancel;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk6bc7db;
    ::ll::UntypedStorage<8, 24> mUnkcbb8bb;
    ::ll::UntypedStorage<1, 1>  mUnk5b78aa;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptPacketSendBeforeEvent& operator=(ScriptPacketSendBeforeEvent const&);
    ScriptPacketSendBeforeEvent(ScriptPacketSendBeforeEvent const&);
#endif // @header-generator platform
    ScriptPacketSendBeforeEvent();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraftNet
