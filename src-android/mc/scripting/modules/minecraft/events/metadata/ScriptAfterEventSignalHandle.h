#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptAfterEventSignal; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptAfterEventSignalHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>              mSignalHashCode;
    ::ll::UntypedStorage<8, 32>                  mSignal;
    ::ll::TypedStorage<8, 8, ulong>              mInstanceHashCode;
    ::ll::TypedStorage<8, 24, std::string const> mEventTypeName;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAfterEventSignalHandle& operator=(ScriptAfterEventSignalHandle const&);
    ScriptAfterEventSignalHandle();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptAfterEventSignalHandle();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
