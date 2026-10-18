#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptSpawnEntityOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 2, std::optional<bool>>         mInitialPersistence;
    ::ll::TypedStorage<4, 8, std::optional<float>>        mInitialRotation;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mSpawnEvent;
#else // @header-generator platform
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>           mInitialPersistence;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>          mInitialRotation;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mSpawnEvent;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
