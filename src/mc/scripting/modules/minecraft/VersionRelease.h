#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/scripting/Version.h"

namespace ScriptModuleMinecraft::Releases {

struct VersionRelease {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::Scripting::Version> version;
    ::ll::TypedStorage<8, 40, ::Scripting::Version> commonDependencyVersion;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::Releases
