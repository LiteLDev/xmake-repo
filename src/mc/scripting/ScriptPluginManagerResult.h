#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/scripting/ScriptPluginResult.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ScriptPluginResult;
#endif // @header-generator platform
struct PackIdVersion;
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

class ScriptPluginManagerResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ScriptPluginResult>> mResults;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk2bc955;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptPluginManagerResult& operator=(ScriptPluginManagerResult const&);
    ScriptPluginManagerResult(ScriptPluginManagerResult const&);
    ScriptPluginManagerResult();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptPluginResult& getOrCreatePluginResults(::PackIdVersion, ::Scripting::ModuleDescriptor const&);
#else // @header-generator platform
    MCNAPI ::ScriptPluginResult&
    getOrCreatePluginResults(::PackIdVersion packId, ::Scripting::ModuleDescriptor const& descriptor);
#endif // @header-generator platform

    MCNAPI void logMessages() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptPluginManagerResult();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~ScriptPluginManagerResult();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
