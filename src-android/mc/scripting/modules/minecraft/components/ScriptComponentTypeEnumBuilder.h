#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/EnumBindingBuilder.h"
#include "mc/scripting/modules/minecraft/components/ScriptComponentType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ConstantFactory; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptComponentTypeEnumBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptComponentType const> mType;
    ::ll::UntypedStorage<8, 144>                                                 mEnumBuilder;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptComponentTypeEnumBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptComponentTypeEnumBuilder(::ScriptModuleMinecraft::ScriptComponentType);

    MCNAPI ::Scripting::EnumBinding bind(std::optional<Scripting::Version>);

    MCNAPI ::Scripting::ConstantFactory& bindComponentId(std::string const&, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptComponentType);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
