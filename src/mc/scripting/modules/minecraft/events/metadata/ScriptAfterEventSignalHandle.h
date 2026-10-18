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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>              mSignalHashCode;
    ::ll::UntypedStorage<8, 32>                  mSignal;
    ::ll::TypedStorage<8, 8, ulong>              mInstanceHashCode;
    ::ll::TypedStorage<8, 24, std::string const> mEventTypeName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64> mSignalHashCode;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::IScriptAfterEventSignal>>
                                                   mSignal;
    ::ll::TypedStorage<8, 8, uint64>               mInstanceHashCode;
    ::ll::TypedStorage<8, 32, ::std::string const> mEventTypeName;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptAfterEventSignalHandle& operator=(ScriptAfterEventSignalHandle const&);
    ScriptAfterEventSignalHandle();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptAfterEventSignalHandle();
#else // @header-generator platform
    MCAPI ~ScriptAfterEventSignalHandle();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
