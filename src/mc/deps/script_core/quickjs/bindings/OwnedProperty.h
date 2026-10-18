#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::QuickJS { struct OwnerAndProperty; }
namespace Scripting::Reflection { class IPropertyGetter; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting::QuickJS {

struct OwnedProperty {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Scripting::Reflection::IPropertyGetter*> property;
    ::ll::UntypedStorage<8, 32>                                         propertyHandle;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkd2cd01;
    ::ll::UntypedStorage<8, 32> mUnk5cd385;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    OwnedProperty& operator=(OwnedProperty const&);
    OwnedProperty(OwnedProperty const&);
#endif // @header-generator platform
    OwnedProperty();
};

} // namespace Scripting::QuickJS
