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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptComponentType const> mType;
    ::ll::UntypedStorage<8, 144>                                                 mEnumBuilder;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptComponentType const>              mType;
    ::ll::TypedStorage<8, 152, ::Scripting::EnumBindingBuilder<::std::string, ::std::string>> mEnumBuilder;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptComponentTypeEnumBuilder();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptComponentTypeEnumBuilder(::ScriptModuleMinecraft::ScriptComponentType);
#else // @header-generator platform
    MCAPI explicit ScriptComponentTypeEnumBuilder(::ScriptModuleMinecraft::ScriptComponentType componentType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::EnumBinding bind(std::optional<Scripting::Version>);
#else // @header-generator platform
    MCAPI ::Scripting::EnumBinding bind(::std::optional<::Scripting::Version> releaseVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ConstantFactory& bindComponentId(std::string const&, std::string const&);
#else // @header-generator platform
    MCAPI ::Scripting::ConstantFactory&
    bindComponentId(::std::string const& componentName, ::std::string const& componentId);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptComponentType);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptComponentType componentType);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
