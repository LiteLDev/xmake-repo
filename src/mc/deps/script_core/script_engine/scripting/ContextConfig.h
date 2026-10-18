#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/RuntimeConditions.h"
#include "mc/deps/script_core/script_engine/scripting/Capabilities.h"
#include "mc/deps/script_core/script_engine/scripting/ContextBaseGameVersion.h"
#include "mc/deps/script_core/script_engine/scripting/ContextCommandVersion.h"
#include "mc/deps/script_core/script_engine/scripting/ContextMolangVersion.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/script_engine/scripting/DependencyResolutionBehavior.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { class ContextBaseGameVersion; }
namespace Scripting { class ContextCommandVersion; }
namespace Scripting { class ContextMolangVersion; }
namespace Scripting { class RuntimeConditions; }
namespace Scripting { struct Capabilities; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on
#endif // @header-generator platform

namespace Scripting {

struct ContextConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk785f32;
    ::ll::UntypedStorage<8, 32> mUnk8946f9;
    ::ll::UntypedStorage<8, 96> mUnkc9edc0;
    ::ll::UntypedStorage<8, 32> mUnk8d4a5a;
    ::ll::UntypedStorage<1, 1>  mUnkae7c5b;
    ::ll::UntypedStorage<8, 24> mUnk8dcce4;
    ::ll::UntypedStorage<4, 4>  mUnke423f8;
    ::ll::UntypedStorage<4, 8>  mUnk67ca24;
    ::ll::UntypedStorage<4, 8>  mUnkcb7615;
    ::ll::UntypedStorage<8, 40> mUnk3c790a;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ContextConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContextConfig(::Scripting::ContextConfig const&);

    MCNAPI ContextConfig(
#if defined(LL_PLAT_A) // @header-generator platform
        std::string,
        std::string,
        ::Scripting::ModuleDescriptor,
        ::Scripting::Capabilities,
        ::Scripting::RuntimeConditions,
        ::Scripting::DependencyResolutionBehavior,
        std::optional<Scripting::ContextMolangVersion>,
        std::optional<Scripting::ContextCommandVersion>,
        std::optional<Scripting::ContextBaseGameVersion>
#else // @header-generator platform
        ::std::string                                        runtimeName_,
        ::std::string                                        manifestUUID_,
        ::Scripting::ModuleDescriptor                        moduleDescriptor_,
        ::Scripting::Capabilities                            capabilities_,
        ::Scripting::RuntimeConditions                       runtimeConditions_,
        ::Scripting::DependencyResolutionBehavior            dependencyResolutionBehavior_,
        ::std::optional<::Scripting::ContextMolangVersion>   molangVersion_,
        ::std::optional<::Scripting::ContextCommandVersion>  commandVersion_,
        ::std::optional<::Scripting::ContextBaseGameVersion> baseGameVersion_
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        std::string,
        std::string,
        ::Scripting::ModuleDescriptor,
        ::Scripting::Capabilities,
        ::Scripting::RuntimeConditions,
        ::Scripting::DependencyResolutionBehavior,
        std::optional<Scripting::ContextMolangVersion>,
        std::optional<Scripting::ContextCommandVersion>,
        std::optional<Scripting::ContextBaseGameVersion>
#else // @header-generator platform
        ::std::string                                        runtimeName_,
        ::std::string                                        manifestUUID_,
        ::Scripting::ModuleDescriptor                        moduleDescriptor_,
        ::Scripting::Capabilities                            capabilities_,
        ::Scripting::RuntimeConditions                       runtimeConditions_,
        ::Scripting::DependencyResolutionBehavior            dependencyResolutionBehavior_,
        ::std::optional<::Scripting::ContextMolangVersion>   molangVersion_,
        ::std::optional<::Scripting::ContextCommandVersion>  commandVersion_,
        ::std::optional<::Scripting::ContextBaseGameVersion> baseGameVersion_
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
