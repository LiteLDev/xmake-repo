#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting::Reflection { class IPropertyGetter; }
namespace Scripting::Reflection { class IPropertySetter; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting::QuickJS {

struct PropertyGetSet {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Scripting::Reflection::IPropertyGetter*> getter;
    ::ll::TypedStorage<8, 8, ::Scripting::Reflection::IPropertySetter*> setter;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk8d8b75;
    ::ll::UntypedStorage<8, 8> mUnk150d8f;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PropertyGetSet& operator=(PropertyGetSet const&);
    PropertyGetSet(PropertyGetSet const&);
    PropertyGetSet();
#endif // @header-generator platform
};

} // namespace Scripting::QuickJS
