#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ItemChargeEvent;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemChargeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>   mScriptItem;
    ::ll::UntypedStorage<8, 32>   mSource;
    ::ll::TypedStorage<4, 4, int> mUseDuration;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemChargeAfterEvent();
};

} // namespace ScriptModuleMinecraft
