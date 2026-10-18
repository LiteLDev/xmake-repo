#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/ObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::Reflection { class IPropertyGetter; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting::QuickJS {

struct OwnerAndProperty {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::ObjectHandle>                ownerHandle;
    ::ll::TypedStorage<8, 8, ::Scripting::Reflection::IPropertyGetter*> property;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk8e2d6b;
    ::ll::UntypedStorage<8, 8>  mUnk6c8fb2;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    OwnerAndProperty& operator=(OwnerAndProperty const&);
    OwnerAndProperty(OwnerAndProperty const&);
    OwnerAndProperty();
#endif // @header-generator platform
};

} // namespace Scripting::QuickJS
