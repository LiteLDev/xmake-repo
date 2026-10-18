#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDimensionType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionType;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ScriptDimensionType();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::DimensionType getDimensionType() const;

    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptDimensionType const&) const;
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);
#else // @header-generator platform
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& module);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
