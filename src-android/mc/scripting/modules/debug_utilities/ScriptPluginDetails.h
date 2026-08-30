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
    ::ll::TypedStorage<8, 24, std::string>                          mName;
    ::ll::TypedStorage<8, 24, std::string>                          mPackId;
    ::ll::TypedStorage<8, 24, std::string>                          mModuleUUID;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int>> mHandleCounts;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPluginDetails(::ScriptModuleDebugUtilities::ScriptPluginDetails const&);

    MCNAPI ~ScriptPluginDetails();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleDebugUtilities::ScriptPluginDetails const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
