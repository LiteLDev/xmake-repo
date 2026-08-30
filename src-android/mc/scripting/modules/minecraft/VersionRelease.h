#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/scripting/Version.h"

namespace ScriptModuleMinecraft::Releases {

struct VersionRelease {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::Version> version;
    ::ll::TypedStorage<8, 32, ::Scripting::Version> commonDependencyVersion;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~VersionRelease();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::Releases
