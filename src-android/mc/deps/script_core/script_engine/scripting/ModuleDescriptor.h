#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/scripting/Version.h"
#include "mc/platform/UUID.h"

namespace Scripting {

struct ModuleDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>          name;
    ::ll::TypedStorage<8, 16, ::mce::UUID>          uuid;
    ::ll::TypedStorage<8, 32, ::Scripting::Version> version;
    ::ll::TypedStorage<1, 1, bool>                  isPeer;
    ::ll::TypedStorage<1, 1, bool>                  isOptional;
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleDescriptor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string toString() const;

    MCNAPI ~ModuleDescriptor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
