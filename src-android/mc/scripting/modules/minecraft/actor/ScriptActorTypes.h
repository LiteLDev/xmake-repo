#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorType.h"

// auto generated forward declare list
// clang-format off
class ActorDefinition;
class Level;
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorTypes {
public:
    // ScriptActorTypes inner types define
    using ActorTypesMap =
        std::unordered_map<std::string, Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorType>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>                                   mActorTypes;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<const Level>> mLevel;
    ::ll::TypedStorage<1, 1, bool>                                mRegisteredTypes;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorTypes();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void add(::Scripting::WeakLifetimeScope&, std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&, ::Level const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
