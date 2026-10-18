#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { class Release; }
namespace Scripting { class RuntimeConditions; }
namespace Scripting { class TypeMapBuilder; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ConstantFactory; }
namespace Scripting { struct FunctionBinding; }
#endif // @header-generator platform
namespace Scripting { struct ModuleBinding; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Scripting { struct ObjectFactory; }
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::UntypedStorage<1, 1>  mUnk791e57;
        ::ll::UntypedStorage<8, 96> mUnk7003d2;
        ::ll::UntypedStorage<8, 24> mUnk4e5f71;
        ::ll::UntypedStorage<8, 24> mUnk8da241;
        ::ll::UntypedStorage<8, 24> mUnkc9781f;
        ::ll::UntypedStorage<8, 24> mUnkce8547;
        ::ll::UntypedStorage<8, 24> mUnk497dc8;
        ::ll::UntypedStorage<8, 24> mUnk143183;
        ::ll::UntypedStorage<8, 24> mUnk9f2b94;
        ::ll::UntypedStorage<8, 24> mUnk985790;
        ::ll::UntypedStorage<8, 24> mUnkcbd8d1;
        ::ll::UntypedStorage<8, 32> mUnkbcacb4;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        BuilderData& operator=(BuilderData const&);
        BuilderData(BuilderData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        BuilderData();
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 328, ::Scripting::ModuleBindingBuilder::BuilderData> mBuilderData;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 352> mUnkd4febe;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ModuleBindingBuilder& operator=(ModuleBindingBuilder const&);
    ModuleBindingBuilder(ModuleBindingBuilder const&);
#endif // @header-generator platform
    ModuleBindingBuilder();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _allowed(std::vector<Scripting::Release> const&, bool, std::vector<std::string> const&) const;
#else // @header-generator platform
    MCNAPI ModuleBindingBuilder(
        ::mce::UUID                 uuid,
        ::std::string const&        name,
        ::Scripting::Version const& version,
        bool                        importRestricted
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ModuleBinding
    build(bool, std::vector<std::string> const&, ::Scripting::RuntimeConditions const&);
#else // @header-generator platform
    MCNAPI bool _allowed(
        ::std::vector<::Scripting::Release> const& releases,
        bool                                       allowUntagged,
        ::std::vector<::std::string> const&        additionalTags
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ModuleBindingBuilder& classBinding(::Scripting::ClassBinding&&);
#else // @header-generator platform
    MCNAPI ::Scripting::ModuleBinding build(
        bool                                  allowUntagged,
        ::std::vector<::std::string> const&   additionalTags,
        ::Scripting::RuntimeConditions const& currentRuntimeConditions
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ModuleBindingBuilder& createTypeMap(::Scripting::TypeMapBuilder&);

    MCNAPI ::Scripting::ModuleBindingBuilder& enumBinding(::Scripting::EnumBinding&&);

    MCNAPI ::Scripting::ModuleBindingBuilder& errorBinding(::Scripting::ErrorBinding&&);

    MCNAPI std::vector<Scripting::ModuleDependency> getDependencies() const;

    MCNAPI ::Scripting::ModuleDescriptor getModuleDescriptor() const;

    MCNAPI ::Scripting::ModuleBindingBuilder& interfaceBinding(::Scripting::InterfaceBinding&&);

    MCNAPI void setImportRestricted();
#else // @header-generator platform
    MCNAPI ::Scripting::ModuleBindingBuilder& createTypeMap(::Scripting::TypeMapBuilder& typeMapBuilder);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _assertClassMemberSymbolDoNotExist(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Scripting::ClassBinding const&,
        std::string const&,
        ::Scripting::TaggedBinding const&
#else // @header-generator platform
        ::Scripting::ClassBinding const&  classBinding,
        ::std::string const&              name,
        ::Scripting::TaggedBinding const& binding
#endif // @header-generator platform
    );

    MCNAPI static bool _assertModuleMemberSymbolDoNotExist(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Scripting::ModuleBinding const&,
        std::string const&,
        ::Scripting::TaggedBinding const&
#else // @header-generator platform
        ::Scripting::ModuleBinding const& moduleBinding,
        ::std::string const&              name,
        ::Scripting::TaggedBinding const& binding
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ConstantFactory& mEmptyConstantFactory();

    MCNAPI static ::Scripting::FunctionBinding& mEmptyFunctionBinding();

    MCNAPI static ::Scripting::ObjectFactory& mEmptyObjectFactory();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::mce::UUID uuid, ::std::string const& name, ::Scripting::Version const& version, bool importRestricted);
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace Scripting
