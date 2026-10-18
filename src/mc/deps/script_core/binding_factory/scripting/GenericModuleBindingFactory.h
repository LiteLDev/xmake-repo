#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_factory/scripting/IModuleBindingFactory.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/binding_type/scripting/ModuleBinding.h"
#include "mc/deps/script_core/binding_type/scripting/ModuleBindingBuilder.h"
#include "mc/deps/script_core/script_engine/scripting/ContextConfig.h"
#include "mc/deps/script_core/script_engine/scripting/ModuleDependency.h"
#include "mc/deps/script_core/scripting/Version.h"
#include "mc/platform/UUID.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDependency; }
namespace Scripting { struct Version; }
namespace mce { class UUID; }
// clang-format on
#endif // @header-generator platform

namespace Scripting {

class GenericModuleBindingFactory : public ::Scripting::IModuleBindingFactory {
public:
    // GenericModuleBindingFactory inner types declare
    // clang-format off
    struct ModuleData;
    // clang-format on

    // GenericModuleBindingFactory inner types define
    struct ModuleData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                              alias;
        ::ll::UntypedStorage<8, 40>                                         version;
        ::ll::UntypedStorage<8, 48>                                         moduleCreatorFn;
        ::ll::TypedStorage<8, 24, std::vector<Scripting::ModuleDependency>> dependencies;
        ::ll::TypedStorage<1, 1, bool>                                      importRestricted;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk679200;
        ::ll::UntypedStorage<8, 40> mUnk8aa486;
        ::ll::UntypedStorage<8, 64> mUnk339eb2;
        ::ll::UntypedStorage<8, 24> mUnk734249;
        ::ll::UntypedStorage<1, 1>  mUnk6b9ccf;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        ModuleData& operator=(ModuleData const&);
#if defined(LL_PLAT_A) // @header-generator platform
    };
#else // @header-generator platform
        ModuleData();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using CreatorFn = std::function<std::optional<
        Scripting::ModuleBinding>(Scripting::ModuleBindingBuilder&, const std::optional<Scripting::ContextConfig>&)>;
#else // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ModuleData(::Scripting::GenericModuleBindingFactory::ModuleData const&);

        MCNAPI ModuleData(
            ::std::string                                  _alias,
            ::Scripting::Version&&                         _version,
            ::std::function<::std::optional<::Scripting::ModuleBinding>(
                ::Scripting::ModuleBindingBuilder&,
                ::std::optional<::Scripting::ContextConfig> const&
            )>&&                                           _moduleCreatorFn,
            ::std::vector<::Scripting::ModuleDependency>&& _dependencies,
            bool                                           _importRestricted
        );

        MCNAPI ~ModuleData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Scripting::GenericModuleBindingFactory::ModuleData const&);

        MCNAPI void* $ctor(
            ::std::string                                  _alias,
            ::Scripting::Version&&                         _version,
            ::std::function<::std::optional<::Scripting::ModuleBinding>(
                ::Scripting::ModuleBindingBuilder&,
                ::std::optional<::Scripting::ContextConfig> const&
            )>&&                                           _moduleCreatorFn,
            ::std::vector<::Scripting::ModuleDependency>&& _dependencies,
            bool                                           _importRestricted
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                                     mModuleName;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                                     mModuleUUID;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::GenericModuleBindingFactory::ModuleData>> mModules;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkb046b8;
    ::ll::UntypedStorage<8, 16> mUnk13b033;
    ::ll::UntypedStorage<8, 24> mUnk89d8eb;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    GenericModuleBindingFactory& operator=(GenericModuleBindingFactory const&);
    GenericModuleBindingFactory(GenericModuleBindingFactory const&);
#endif // @header-generator platform
    GenericModuleBindingFactory();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~GenericModuleBindingFactory();
#else // @header-generator platform
    virtual ~GenericModuleBindingFactory() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getName() const;
#else // @header-generator platform
    virtual ::std::string getName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::mce::UUID getUUID() const;
#else // @header-generator platform
    virtual ::mce::UUID getUUID() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasAlias(std::string const&) const;
#else // @header-generator platform
    virtual bool hasAlias(::std::string const& alias) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<Scripting::Version> getSupportedVersions() const;
#else // @header-generator platform
    virtual ::std::vector<::Scripting::Version> getSupportedVersions() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<Scripting::ModuleDependency> getDependencies(::Scripting::Version) const;
#else // @header-generator platform
    virtual ::std::vector<::Scripting::ModuleDependency> getDependencies(::Scripting::Version version) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::ModuleBinding> createModuleBinding(::Scripting::Version, std::optional<Scripting::ContextConfig> const&, bool);
    // clang-format on
#else // @header-generator platform
    virtual ::std::optional<::Scripting::ModuleBinding> createModuleBinding(
        ::Scripting::Version                               version,
        ::std::optional<::Scripting::ContextConfig> const& config,
        bool                                               requireDynamicImport
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GenericModuleBindingFactory(std::string, ::mce::UUID);

    MCNAPI void _addRuntimeDependency(std::vector<Scripting::ModuleDependency>&, ::Scripting::Version);

    MCNAPI void addVersionedModuleBinding(
        ::Scripting::Version,
        std::function<std::optional<Scripting::ModuleBinding>(
            Scripting::ModuleBindingBuilder&,
            const std::optional<Scripting::ContextConfig>&
        )>,
        ::Scripting::Version,
        std::vector<Scripting::ModuleDependency>,
        bool
#else // @header-generator platform
    MCNAPI void _addRuntimeDependency(
        ::std::vector<::Scripting::ModuleDependency>& dependencies,
        ::Scripting::Version                          runtimeVersion
#endif // @header-generator platform
    );

    MCNAPI void addVersionedModuleBinding(
#if defined(LL_PLAT_A) // @header-generator platform
        std::string,
        ::Scripting::Version,
        std::function<std::optional<Scripting::ModuleBinding>(
            Scripting::ModuleBindingBuilder&,
            const std::optional<Scripting::ContextConfig>&
        )>,
        ::Scripting::Version,
        std::vector<Scripting::ModuleDependency>,
        bool
#else // @header-generator platform
        ::Scripting::Version                         version,
        ::std::function<::std::optional<::Scripting::ModuleBinding>(
            ::Scripting::ModuleBindingBuilder&,
            ::std::optional<::Scripting::ContextConfig> const&
        )>                                           moduleCreatorFn,
        ::Scripting::Version                         runtimeVersion,
        ::std::vector<::Scripting::ModuleDependency> dependencies,
        bool                                         importRestricted
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string, ::mce::UUID);
#else // @header-generator platform
    MCNAPI void addVersionedModuleBinding(
        ::std::string                                alias,
        ::Scripting::Version                         version,
        ::std::function<::std::optional<::Scripting::ModuleBinding>(
            ::Scripting::ModuleBindingBuilder&,
            ::std::optional<::Scripting::ContextConfig> const&
        )>                                           moduleCreatorFn,
        ::Scripting::Version                         runtimeVersion,
        ::std::vector<::Scripting::ModuleDependency> dependencies,
        bool                                         importRestricted
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getName() const;
#else // @header-generator platform
    MCNAPI ::std::string $getName() const;
#endif // @header-generator platform

    MCNAPI ::mce::UUID $getUUID() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasAlias(std::string const&) const;
#else // @header-generator platform
    MCNAPI bool $hasAlias(::std::string const& alias) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<Scripting::Version> $getSupportedVersions() const;
#else // @header-generator platform
    MCNAPI ::std::vector<::Scripting::Version> $getSupportedVersions() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<Scripting::ModuleDependency> $getDependencies(::Scripting::Version) const;
#else // @header-generator platform
    MCNAPI ::std::vector<::Scripting::ModuleDependency> $getDependencies(::Scripting::Version version) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::ModuleBinding>
           $createModuleBinding(::Scripting::Version, std::optional<Scripting::ContextConfig> const&, bool);
#else // @header-generator platform
    MCNAPI ::std::optional<::Scripting::ModuleBinding> $createModuleBinding(
        ::Scripting::Version                               version,
        ::std::optional<::Scripting::ContextConfig> const& config,
        bool                                               requireDynamicImport
    );


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
