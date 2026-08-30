#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/ScriptPluginResult.h"

// auto generated forward declare list
// clang-format off
struct PackIdVersion;
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

class ScriptPluginManagerResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ScriptPluginResult>> mResults;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptPluginResult& getOrCreatePluginResults(::PackIdVersion, ::Scripting::ModuleDescriptor const&);

    MCNAPI void logMessages() const;

    MCNAPI ~ScriptPluginManagerResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
