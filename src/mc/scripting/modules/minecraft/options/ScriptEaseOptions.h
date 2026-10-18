#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptEaseOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<float>>      mEasingTime;
    ::ll::TypedStorage<4, 8, std::optional<EasingType>> mEasingType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptEaseOptions const&) const;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::optional<float>>        mEasingTime;
    ::ll::TypedStorage<4, 8, ::std::optional<::EasingType>> mEasingType;
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

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bindV1();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bindV1();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
