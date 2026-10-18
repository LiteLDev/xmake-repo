#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class IModuleBindingFactory; }
namespace Scripting { class IPrinter; }
namespace Scripting { class IRuntime; }
namespace Scripting { class RegistryManager; }
namespace Scripting { struct ContextConfig; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Scripting { struct ModuleDescriptor; }
#endif // @header-generator platform
namespace Scripting { struct ScriptContextResult; }
namespace Scripting { struct SupportedBindingModule; }
namespace Scripting { struct Version; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace mce { class UUID; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Scripting {

class ScriptEngine {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ScriptEngine inner types define
    using RuntimeFactory = std::function<std::shared_ptr<
        Scripting::IRuntime>(const Scripting::ContextConfig&, const std::vector<Scripting::ModuleDescriptor>&)>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scripting::RegistryManager>> mRegistryManagerUP;
    ::ll::TypedStorage<8, 8, ::Scripting::RegistryManager*>               mRegistryManager;
    ::ll::UntypedStorage<8, 48>                                           mRuntimeFactoryFn;
    ::ll::UntypedStorage<8, 32>                                           mModuleFactories;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk6e40b8;
    ::ll::UntypedStorage<8, 8>  mUnk46b9bc;
    ::ll::UntypedStorage<8, 64> mUnkda1d7a;
    ::ll::UntypedStorage<8, 24> mUnk61ec6c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptEngine& operator=(ScriptEngine const&);
    ScriptEngine(ScriptEngine const&);
#endif // @header-generator platform
    ScriptEngine();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptEngine(::Scripting::RegistryManager*);
#else // @header-generator platform
    MCNAPI explicit ScriptEngine(::Scripting::RegistryManager* registryManager);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addModuleBindingFactory(std::unique_ptr<Scripting::IModuleBindingFactory>);
#else // @header-generator platform
    MCNAPI ::Scripting::IModuleBindingFactory* _getModuleBindingFactoryByName(::std::string const& name) const;

    MCNAPI void addModuleBindingFactory(::std::unique_ptr<::Scripting::IModuleBindingFactory> moduleBindingFactory);
#endif // @header-generator platform

    MCNAPI ::Scripting::ScriptContextResult createScriptingContext(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Scripting::ContextConfig const&,
        ::Scripting::ModuleDescriptor const&,
        std::vector<Scripting::ModuleDescriptor> const&,
        ::Scripting::IDependencyLoader*,
        ::Scripting::IPrinter*
#else // @header-generator platform
        ::Scripting::ContextConfig const&                   config,
        ::Scripting::ModuleDescriptor const&                forModule,
        ::std::vector<::Scripting::ModuleDescriptor> const& dependencies,
        ::Scripting::IDependencyLoader*                     loader,
        ::Scripting::IPrinter*                              printer
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::Version>
           getLatestVersionOfModuleWithPreRelease(std::string const&, std::string_view) const;
#else // @header-generator platform
    MCNAPI ::std::optional<::Scripting::Version>
    getLatestVersionOfModuleWithPreRelease(::std::string const& name, ::std::string_view preRelease) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::ModuleDescriptor> getModuleDescriptor(::mce::UUID) const;
#else // @header-generator platform
    MCNAPI ::std::optional<::Scripting::ModuleDescriptor> getModuleDescriptorByName(::std::string const& name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::ModuleDescriptor> getModuleDescriptorByName(std::string const&) const;

    MCNAPI ::Scripting::RegistryManager& getRegistryManager();

    MCNAPI std::vector<Scripting::SupportedBindingModule> getSupportedBindingModules() const;

    MCNAPI void setRuntimeFactory(
        std::function<std::shared_ptr<
            Scripting::IRuntime>(const Scripting::ContextConfig&, const std::vector<Scripting::ModuleDescriptor>&)>
    );
#else // @header-generator platform
    MCNAPI ::std::vector<::Scripting::SupportedBindingModule> getSupportedBindingModules() const;
#endif // @header-generator platform

    MCNAPI ~ScriptEngine();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Scripting::RegistryManager*);
#else // @header-generator platform
    MCNAPI void* $ctor(::Scripting::RegistryManager* registryManager);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
