#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/script_core/scripting/Version.h"
#include "mc/platform/UUID.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Scripting { struct Version; }
namespace mce { class UUID; }
#endif // @header-generator platform
// clang-format on

namespace Scripting {

struct ModuleDependency {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                     name;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                     uuid;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::Version>> versions;
    ::ll::TypedStorage<1, 1, bool>                             isPeer;
    ::ll::TypedStorage<1, 1, bool>                             isNested;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkd06eea;
    ::ll::UntypedStorage<8, 16> mUnkac08cf;
    ::ll::UntypedStorage<8, 24> mUnke8e189;
    ::ll::UntypedStorage<1, 1>  mUnkd298ce;
    ::ll::UntypedStorage<1, 1>  mUnk13820e;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleDependency& operator=(ModuleDependency const&);
    ModuleDependency();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ModuleDependency(std::string, ::mce::UUID, std::vector<Scripting::Version>);
#else // @header-generator platform
    MCNAPI ModuleDependency(::Scripting::ModuleDependency const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ModuleDependency(std::string, ::mce::UUID, std::vector<Scripting::Version>, bool);
#else // @header-generator platform
    MCNAPI explicit ModuleDependency(::Scripting::ModuleDescriptor descriptor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::Scripting::ModuleDependency const&) const;
#else // @header-generator platform
    MCNAPI ModuleDependency(::std::string _name, ::mce::UUID _uuid, ::std::vector<::Scripting::Version> _versions);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool satisfiedBy(::Scripting::ModuleDescriptor const&) const;

    MCNAPI std::string toString() const;
#else // @header-generator platform
    MCNAPI ::std::string toString() const;
#endif // @header-generator platform

    MCNAPI ~ModuleDependency();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string, ::mce::UUID, std::vector<Scripting::Version>);
#else // @header-generator platform
    MCNAPI void* $ctor(::Scripting::ModuleDependency const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string, ::mce::UUID, std::vector<Scripting::Version>, bool);
#else // @header-generator platform
    MCNAPI void* $ctor(::Scripting::ModuleDescriptor descriptor);

    MCNAPI void* $ctor(::std::string _name, ::mce::UUID _uuid, ::std::vector<::Scripting::Version> _versions);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
