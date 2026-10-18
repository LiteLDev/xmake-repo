#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/EventEnvelope.h"
#include "mc/scripting/diagnostics/ScriptStatEvent.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#endif // @header-generator platform
namespace ScriptDebuggerMessages {

class ScriptDebuggerDiagnosticsPayload
#if defined(LL_PLAT_A) // @header-generator platform
: public ::ScriptDebuggerMessages::EventEnvelope<ScriptDebuggerMessages::ScriptDebuggerDiagnosticsPayload>,
  public ::ScriptStatEvent {};
#else // @header-generator platform
: public ::ScriptDebuggerMessages::EventEnvelope<::ScriptDebuggerMessages::ScriptDebuggerDiagnosticsPayload>,
  public ::ScriptStatEvent {
public:
    // prevent constructor by default
    ScriptDebuggerDiagnosticsPayload& operator=(ScriptDebuggerDiagnosticsPayload const&);
    ScriptDebuggerDiagnosticsPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDebuggerDiagnosticsPayload(::ScriptDebuggerMessages::ScriptDebuggerDiagnosticsPayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDebuggerMessages::ScriptDebuggerDiagnosticsPayload const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace ScriptDebuggerMessages
