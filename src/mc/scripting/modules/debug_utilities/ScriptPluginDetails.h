#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleDebugUtilities {

struct ScriptPluginDetails {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                          mName;
    ::ll::TypedStorage<8, 24, std::string>                          mPackId;
    ::ll::TypedStorage<8, 24, std::string>                          mModuleUUID;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int>> mHandleCounts;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                            mName;
    ::ll::TypedStorage<8, 32, ::std::string>                            mPackId;
    ::ll::TypedStorage<8, 32, ::std::string>                            mModuleUUID;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mHandleCounts;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptPluginDetails();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptPluginDetails(::ScriptModuleDebugUtilities::ScriptPluginDetails const&);
#else // @header-generator platform
    MCAPI ScriptPluginDetails(::ScriptModuleDebugUtilities::ScriptPluginDetails const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptPluginDetails();
#else // @header-generator platform
    MCAPI ::ScriptModuleDebugUtilities::ScriptPluginDetails&
    operator=(::ScriptModuleDebugUtilities::ScriptPluginDetails const&);

    MCAPI ~ScriptPluginDetails();
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

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptModuleDebugUtilities::ScriptPluginDetails const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleDebugUtilities::ScriptPluginDetails const&);
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

} // namespace ScriptModuleDebugUtilities
