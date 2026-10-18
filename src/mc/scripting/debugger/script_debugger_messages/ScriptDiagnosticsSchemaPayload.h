#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/ScriptDiagnosticsDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/debugger/script_debugger_messages/EventEnvelope.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace ScriptDebuggerMessages {

class ScriptDiagnosticsSchemaPayload
#if defined(LL_PLAT_A) // @header-generator platform
: public ::ScriptDebuggerMessages::EventEnvelope<ScriptDebuggerMessages::ScriptDiagnosticsSchemaPayload> {
#else // @header-generator platform
: public ::ScriptDebuggerMessages::EventEnvelope<::ScriptDebuggerMessages::ScriptDiagnosticsSchemaPayload> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ScriptDiagnosticsDescriptor>> mDescriptors;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk1f2082;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDiagnosticsSchemaPayload& operator=(ScriptDiagnosticsSchemaPayload const&);
    ScriptDiagnosticsSchemaPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDiagnosticsSchemaPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDiagnosticsSchemaPayload(::ScriptDebuggerMessages::ScriptDiagnosticsSchemaPayload const&);

    MCNAPI ::ScriptDebuggerMessages::ScriptDiagnosticsSchemaPayload&
    operator=(::ScriptDebuggerMessages::ScriptDiagnosticsSchemaPayload&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDebuggerMessages::ScriptDiagnosticsSchemaPayload const&);
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
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
