#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class IModuleBindingFactory; }
namespace Scripting { class IPrinter; }
namespace Scripting { class IRuntime; }
namespace Scripting { class RegistryManager; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ScriptContextResult; }
namespace Scripting { struct SupportedBindingModule; }
namespace Scripting { struct Version; }
namespace mce { class UUID; }
// clang-format on

namespace Scripting {

class ScriptEngine {
public:
    // ScriptEngine inner types define
    using RuntimeFactory = std::function<std::shared_ptr<
        Scripting::IRuntime>(const Scripting::ContextConfig&, const std::vector<Scripting::ModuleDescriptor>&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scripting::RegistryManager>> mRegistryManagerUP;
    ::ll::TypedStorage<8, 8, ::Scripting::RegistryManager*>               mRegistryManager;
    ::ll::UntypedStorage<8, 48>                                           mRuntimeFactoryFn;
    ::ll::UntypedStorage<8, 32>                                           mModuleFactories;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEngine();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptEngine(::Scripting::RegistryManager*);

    MCNAPI void addModuleBindingFactory(std::unique_ptr<Scripting::IModuleBindingFactory>);

    MCNAPI ::Scripting::ScriptContextResult createScriptingContext(
        ::Scripting::ContextConfig const&,
        ::Scripting::ModuleDescriptor const&,
        std::vector<Scripting::ModuleDescriptor> const&,
        ::Scripting::IDependencyLoader*,
        ::Scripting::IPrinter*
    );

    MCNAPI std::optional<Scripting::Version>
           getLatestVersionOfModuleWithPreRelease(std::string const&, std::string_view) const;

    MCNAPI std::optional<Scripting::ModuleDescriptor> getModuleDescriptor(::mce::UUID) const;

    MCNAPI std::optional<Scripting::ModuleDescriptor> getModuleDescriptorByName(std::string const&) const;

    MCNAPI ::Scripting::RegistryManager& getRegistryManager();

    MCNAPI std::vector<Scripting::SupportedBindingModule> getSupportedBindingModules() const;

    MCNAPI void setRuntimeFactory(
        std::function<std::shared_ptr<
            Scripting::IRuntime>(const Scripting::ContextConfig&, const std::vector<Scripting::ModuleDescriptor>&)>
    );

    MCNAPI ~ScriptEngine();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::RegistryManager*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
