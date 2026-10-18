#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptServerStateMonitor.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ServerScriptManagerEvents;
namespace SharedTypes { class DynamicValueComplexityConstraint; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptCustomComponentRegistry : public ::ScriptModuleMinecraft::ScriptServerStateMonitor {
public:
    // prevent constructor by default
    ScriptCustomComponentRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptCustomComponentRegistry();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptCustomComponentRegistry(::ServerScriptManagerEvents&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SharedTypes::DynamicValueComplexityConstraint makeJsonParametersConstraint();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerScriptManagerEvents&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ScriptCustomComponentRegistry : public ::ScriptModuleMinecraft::ScriptServerStateMonitor {};
#endif // @header-generator platform

} // namespace ScriptModuleMinecraft
