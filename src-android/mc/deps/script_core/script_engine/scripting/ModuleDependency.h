#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/scripting/Version.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace Scripting {

struct ModuleDependency {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                     name;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                     uuid;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::Version>> versions;
    ::ll::TypedStorage<1, 1, bool>                             isPeer;
    ::ll::TypedStorage<1, 1, bool>                             isNested;
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleDependency& operator=(ModuleDependency const&);
    ModuleDependency();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ModuleDependency(std::string, ::mce::UUID, std::vector<Scripting::Version>);

    MCNAPI ModuleDependency(std::string, ::mce::UUID, std::vector<Scripting::Version>, bool);

    MCNAPI bool operator==(::Scripting::ModuleDependency const&) const;

    MCNAPI bool satisfiedBy(::Scripting::ModuleDescriptor const&) const;

    MCNAPI std::string toString() const;

    MCNAPI ~ModuleDependency();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string, ::mce::UUID, std::vector<Scripting::Version>);

    MCNAPI void* $ctor(std::string, ::mce::UUID, std::vector<Scripting::Version>, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
