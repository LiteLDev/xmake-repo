#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/ModuleResolveResult.h"
#include "mc/deps/script_core/script_engine/scripting/ScriptContext.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

struct ScriptContextResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::optional<Scripting::ScriptContext>> context;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>              missingRuntimeName;
    ::ll::TypedStorage<8, 120, ::Scripting::ModuleResolveResult>       resolveResult;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 40>  mUnk748fa8;
    ::ll::UntypedStorage<8, 40>  mUnk82e013;
    ::ll::UntypedStorage<8, 120> mUnkd0c8cb;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptContextResult& operator=(ScriptContextResult const&);
    ScriptContextResult(ScriptContextResult const&);
    ScriptContextResult();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptContextResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
