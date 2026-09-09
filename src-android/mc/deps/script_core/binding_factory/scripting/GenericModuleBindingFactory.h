#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_factory/scripting/IModuleBindingFactory.h"
#include "mc/deps/script_core/binding_type/scripting/ModuleBinding.h"
#include "mc/deps/script_core/binding_type/scripting/ModuleBindingBuilder.h"
#include "mc/deps/script_core/script_engine/scripting/ContextConfig.h"
#include "mc/deps/script_core/script_engine/scripting/ModuleDependency.h"
#include "mc/deps/script_core/scripting/Version.h"
#include "mc/platform/UUID.h"

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
        ::ll::TypedStorage<8, 24, std::string>                              alias;
        ::ll::UntypedStorage<8, 40>                                         version;
        ::ll::UntypedStorage<8, 48>                                         moduleCreatorFn;
        ::ll::TypedStorage<8, 24, std::vector<Scripting::ModuleDependency>> dependencies;
        ::ll::TypedStorage<1, 1, bool>                                      importRestricted;
        // NOLINTEND

    public:
        // prevent constructor by default
        ModuleData& operator=(ModuleData const&);
    };

    using CreatorFn = std::function<std::optional<
        Scripting::ModuleBinding>(Scripting::ModuleBindingBuilder&, const std::optional<Scripting::ContextConfig>&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                     mModuleName;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                                     mModuleUUID;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::GenericModuleBindingFactory::ModuleData>> mModules;
    // NOLINTEND

public:
    // prevent constructor by default
    GenericModuleBindingFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~GenericModuleBindingFactory();

    virtual std::string getName() const;

    virtual ::mce::UUID getUUID() const;

    virtual bool hasAlias(std::string const&) const;

    virtual std::vector<Scripting::Version> getSupportedVersions() const;

    virtual std::vector<Scripting::ModuleDependency> getDependencies(::Scripting::Version) const;

    virtual std::optional<Scripting::ModuleBinding> createModuleBinding(::Scripting::Version, std::optional<Scripting::ContextConfig> const&, bool);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    );

    MCNAPI void addVersionedModuleBinding(
        std::string,
        ::Scripting::Version,
        std::function<std::optional<Scripting::ModuleBinding>(
            Scripting::ModuleBindingBuilder&,
            const std::optional<Scripting::ContextConfig>&
        )>,
        ::Scripting::Version,
        std::vector<Scripting::ModuleDependency>,
        bool
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string, ::mce::UUID);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string $getName() const;

    MCNAPI ::mce::UUID $getUUID() const;

    MCNAPI bool $hasAlias(std::string const&) const;

    MCNAPI std::vector<Scripting::Version> $getSupportedVersions() const;

    MCNAPI std::vector<Scripting::ModuleDependency> $getDependencies(::Scripting::Version) const;

    MCNAPI std::optional<Scripting::ModuleBinding>
           $createModuleBinding(::Scripting::Version, std::optional<Scripting::ContextConfig> const&, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
