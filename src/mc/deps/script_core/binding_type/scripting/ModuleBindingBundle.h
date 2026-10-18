#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/GlobalBinding.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/binding_type/scripting/ModuleBinding.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleBinding; }
// clang-format on
#endif // @header-generator platform

namespace Scripting {

struct ModuleBindingBundle {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ModuleBinding>> modules;
    ::ll::TypedStorage<8, 144, ::Scripting::GlobalBinding>           globals;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ModuleBindingBundle();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::ModuleBinding>> modules;
    ::ll::TypedStorage<8, 144, ::Scripting::GlobalBinding>               globals;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
