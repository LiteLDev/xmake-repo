#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptVector : public ::Vec3 {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::Result_deprecated<ScriptModuleMinecraft::ScriptVector>
    divide(::Vec3 const&, std::variant<float, Vec3> const&);
#else // @header-generator platform
    MCAPI static ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptVector>
    divide(::Vec3 const& a, ::std::variant<float, ::Vec3> const& b);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
