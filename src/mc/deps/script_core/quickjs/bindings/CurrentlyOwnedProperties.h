#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/quickjs/bindings/OwnedProperty.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting::Reflection { class IPropertyGetter; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting::QuickJS {

struct CurrentlyOwnedProperties {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Scripting::LifetimeRegistry*>                  registry;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::QuickJS::OwnedProperty>> properties;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnka53bfa;
    ::ll::UntypedStorage<8, 24> mUnk61dbff;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CurrentlyOwnedProperties& operator=(CurrentlyOwnedProperties const&);
    CurrentlyOwnedProperties(CurrentlyOwnedProperties const&);
#endif // @header-generator platform
    CurrentlyOwnedProperties();
};

} // namespace Scripting::QuickJS
