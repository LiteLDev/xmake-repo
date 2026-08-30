#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/ClassBinding.h"
#include "mc/deps/script_core/binding_type/scripting/ConstantFactory.h"
#include "mc/deps/script_core/binding_type/scripting/EnumBinding.h"
#include "mc/deps/script_core/binding_type/scripting/ErrorBinding.h"
#include "mc/deps/script_core/binding_type/scripting/FunctionBinding.h"
#include "mc/deps/script_core/binding_type/scripting/InterfaceBinding.h"
#include "mc/deps/script_core/binding_type/scripting/ObjectFactory.h"
#include "mc/deps/script_core/binding_type/scripting/TypeMapData.h"
#include "mc/deps/script_core/script_engine/scripting/ModuleDependency.h"
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class Release; }
namespace Scripting { class RuntimeConditions; }
namespace Scripting { class TypeMapBuilder; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct TaggedBinding; }
namespace Scripting { struct Version; }
namespace mce { class UUID; }
// clang-format on

namespace Scripting {

class ModuleBindingBuilder {
public:
    // ModuleBindingBuilder inner types declare
    // clang-format off
    struct BuilderData;
    // clang-format on

    // ModuleBindingBuilder inner types define
    struct BuilderData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                      importRestricted;
        ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor>            descriptor;
        ::ll::TypedStorage<8, 24, std::vector<Scripting::ModuleDependency>> moduleDependencies;
        ::ll::TypedStorage<8, 24, std::vector<Scripting::ClassBinding>>     classBindings;
        ::ll::TypedStorage<8, 24, std::vector<Scripting::InterfaceBinding>> interfaceBindings;
        ::ll::TypedStorage<8, 24, std::vector<Scripting::ErrorBinding>>     errorBindings;
        ::ll::TypedStorage<8, 24, std::vector<Scripting::EnumBinding>>      enumBindings;
        ::ll::TypedStorage<8, 24, std::vector<Scripting::FunctionBinding>>  functionBindings;
        ::ll::TypedStorage<8, 24, std::vector<Scripting::ObjectFactory>>    objectFactories;
        ::ll::TypedStorage<8, 24, std::vector<Scripting::ConstantFactory>>  constants;
        ::ll::TypedStorage<8, 24, std::vector<Scripting::TypeMapData>>      typeMaps;
        ::ll::TypedStorage<8, 24, std::string>                              javascript;
        // NOLINTEND

    public:
        // prevent constructor by default
        BuilderData& operator=(BuilderData const&);
        BuilderData(BuilderData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~BuilderData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 328, ::Scripting::ModuleBindingBuilder::BuilderData> mBuilderData;
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleBindingBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _allowed(std::vector<Scripting::Release> const&, bool, std::vector<std::string> const&) const;

    MCNAPI ::Scripting::ModuleBinding
    build(bool, std::vector<std::string> const&, ::Scripting::RuntimeConditions const&);

    MCNAPI ::Scripting::ModuleBindingBuilder& classBinding(::Scripting::ClassBinding&&);

    MCNAPI ::Scripting::ModuleBindingBuilder& createTypeMap(::Scripting::TypeMapBuilder&);

    MCNAPI ::Scripting::ModuleBindingBuilder& enumBinding(::Scripting::EnumBinding&&);

    MCNAPI ::Scripting::ModuleBindingBuilder& errorBinding(::Scripting::ErrorBinding&&);

    MCNAPI std::vector<Scripting::ModuleDependency> getDependencies() const;

    MCNAPI ::Scripting::ModuleDescriptor getModuleDescriptor() const;

    MCNAPI ::Scripting::ModuleBindingBuilder& interfaceBinding(::Scripting::InterfaceBinding&&);

    MCNAPI void setImportRestricted();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _assertClassMemberSymbolDoNotExist(
        ::Scripting::ClassBinding const&,
        std::string const&,
        ::Scripting::TaggedBinding const&
    );

    MCNAPI static bool _assertModuleMemberSymbolDoNotExist(
        ::Scripting::ModuleBinding const&,
        std::string const&,
        ::Scripting::TaggedBinding const&
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ConstantFactory& mEmptyConstantFactory();

    MCNAPI static ::Scripting::FunctionBinding& mEmptyFunctionBinding();

    MCNAPI static ::Scripting::ObjectFactory& mEmptyObjectFactory();
    // NOLINTEND
};

} // namespace Scripting
