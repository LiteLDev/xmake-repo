#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/RuntimeConditions.h"
#include "mc/deps/script_core/script_engine/scripting/Capabilities.h"
#include "mc/deps/script_core/script_engine/scripting/ContextBaseGameVersion.h"
#include "mc/deps/script_core/script_engine/scripting/ContextCommandVersion.h"
#include "mc/deps/script_core/script_engine/scripting/ContextMolangVersion.h"
#include "mc/deps/script_core/script_engine/scripting/DependencyResolutionBehavior.h"
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"

namespace Scripting {

struct ContextConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                      runtimeName;
    ::ll::TypedStorage<8, 24, std::string>                                      manifestUUID;
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor>                    moduleDescriptor;
    ::ll::TypedStorage<8, 24, std::string>                                      moduleUUIDStr;
    ::ll::TypedStorage<1, 1, ::Scripting::Capabilities>                         capabilities;
    ::ll::TypedStorage<8, 24, ::Scripting::RuntimeConditions>                   currentRuntimeConditions;
    ::ll::TypedStorage<4, 4, ::Scripting::DependencyResolutionBehavior>         dependencyResolutionBehavior;
    ::ll::TypedStorage<4, 8, std::optional<Scripting::ContextMolangVersion>>    molangVersion;
    ::ll::TypedStorage<4, 8, std::optional<Scripting::ContextCommandVersion>>   commandVersion;
    ::ll::TypedStorage<8, 32, std::optional<Scripting::ContextBaseGameVersion>> baseGameVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContextConfig(::Scripting::ContextConfig const&);

    MCNAPI ContextConfig(
        std::string,
        std::string,
        ::Scripting::ModuleDescriptor,
        ::Scripting::Capabilities,
        ::Scripting::RuntimeConditions,
        ::Scripting::DependencyResolutionBehavior,
        std::optional<Scripting::ContextMolangVersion>,
        std::optional<Scripting::ContextCommandVersion>,
        std::optional<Scripting::ContextBaseGameVersion>
    );

    MCNAPI ::Scripting::ContextConfig& operator=(::Scripting::ContextConfig&&);

    MCNAPI ::Scripting::ContextConfig& operator=(::Scripting::ContextConfig const&);

    MCNAPI ~ContextConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ContextConfig const&);

    MCNAPI void* $ctor(
        std::string,
        std::string,
        ::Scripting::ModuleDescriptor,
        ::Scripting::Capabilities,
        ::Scripting::RuntimeConditions,
        ::Scripting::DependencyResolutionBehavior,
        std::optional<Scripting::ContextMolangVersion>,
        std::optional<Scripting::ContextCommandVersion>,
        std::optional<Scripting::ContextBaseGameVersion>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
