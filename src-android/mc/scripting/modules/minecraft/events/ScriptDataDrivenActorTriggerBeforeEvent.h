#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorDefinitionModifier;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptDataDrivenActorTriggerBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                     mActor;
    ::ll::TypedStorage<8, 24, std::string>                          mEvent;
    ::ll::TypedStorage<1, 1, bool>                                  mCancel;
    ::ll::TypedStorage<8, 8, std::vector<ActorDefinitionModifier>&> mModifiers;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataDrivenActorTriggerBeforeEvent& operator=(ScriptDataDrivenActorTriggerBeforeEvent const&);
    ScriptDataDrivenActorTriggerBeforeEvent(ScriptDataDrivenActorTriggerBeforeEvent const&);
    ScriptDataDrivenActorTriggerBeforeEvent();
};

} // namespace ScriptModuleMinecraft
