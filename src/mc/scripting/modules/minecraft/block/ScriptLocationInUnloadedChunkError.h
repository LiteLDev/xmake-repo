#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptLocationInUnloadedChunkError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptLocationInUnloadedChunkError();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptLocationInUnloadedChunkError(::Vec3 const&);
#else // @header-generator platform
    MCAPI explicit ScriptLocationInUnloadedChunkError(::Vec3 const& pos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ErrorBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ErrorBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Vec3 const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Vec3 const& pos);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
