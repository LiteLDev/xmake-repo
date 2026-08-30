#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/effects/ScriptEffectType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEffects {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mEffects;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _generateAllEffectsHandles(::Scripting::WeakLifetimeScope&);

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptEffectType>>
           get(::Scripting::WeakLifetimeScope&, std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);

    MCNAPI static void bindV010(::Scripting::ModuleBindingBuilder&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
