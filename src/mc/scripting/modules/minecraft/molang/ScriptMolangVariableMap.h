#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/util/MolangVariableMap.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptColor; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptRGB; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace ScriptModuleMinecraft { class ScriptVector; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptMolangVariableMap : public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptMolangVariableMap> {
#else // @header-generator platform
class ScriptMolangVariableMap
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptMolangVariableMap> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::MolangVariableMap> mVariableMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::string> _prependVariable(std::string const&);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::string> _prependVariable(::std::string const& variableName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MolangVariableMap& getVariableMap();
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void>
    setColorRBGA_V010(::std::string const& variableName, ::ScriptModuleMinecraft::ScriptColor const& color);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void>
    setColorRBGA_V010(std::string const&, ::ScriptModuleMinecraft::ScriptColor const&);

    MCNAPI ::Scripting::Result_deprecated<void>
    setColorRBG_V010(std::string const&, ::ScriptModuleMinecraft::ScriptColor const&);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void>
    setColorRBG_V010(::std::string const& variableName, ::ScriptModuleMinecraft::ScriptColor const& color);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
