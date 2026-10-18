#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/PropertyBinding.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting::QuickJS {

class RegisteredInterface {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Scripting::InterfaceBinding const&>     interfaceBinding;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::PropertyBinding>> combinedProperties;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnka739eb;
    ::ll::UntypedStorage<8, 24> mUnk6fe691;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RegisteredInterface& operator=(RegisteredInterface const&);
    RegisteredInterface(RegisteredInterface const&);
    RegisteredInterface();
};

} // namespace Scripting::QuickJS
