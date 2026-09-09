#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptDimensionType.h"

// auto generated forward declare list
// clang-format off
struct DimensionType;
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDimensionTypes {
public:
    // ScriptDimensionTypes inner types define
    using DimensionTypeMap =
        std::map<std::string, Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptDimensionType>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>    mDimensionTypes;
    ::ll::TypedStorage<1, 1, bool> mRegisteredTypes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void registerTypes(::Scripting::WeakLifetimeScope);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unordered_map<std::string, std::string> _getDimensionStringNames();

    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);

    MCNAPI static ::DimensionType fromString(std::string const&);

    MCNAPI static std::string toString(::DimensionType const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& sMinecraftNamespace();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
