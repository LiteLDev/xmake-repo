#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#else // @header-generator platform
#include "mc/deps/script_core/reflection/ReturnPolicy.h"
#endif // @header-generator platform

namespace Scripting::Reflection {

class IPropertyGetter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::Scripting::Privilege> privilege;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk2af62d;
    // NOLINTEND

public:
    // prevent constructor by default
    IPropertyGetter& operator=(IPropertyGetter const&);
    IPropertyGetter(IPropertyGetter const&);
    IPropertyGetter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPropertyGetter() = default;

    virtual ::entt::meta_any get(::entt::meta_handle) = 0;

    virtual ::entt::meta_type type() const = 0;

    virtual ::std::optional<::entt::meta_type> ownerType() const = 0;

    virtual ::Scripting::Reflection::ReturnPolicy getReturnPolicy() const = 0;

    virtual bool isReferenceType() const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting::Reflection
