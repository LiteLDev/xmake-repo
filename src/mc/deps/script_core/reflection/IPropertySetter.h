#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Scripting { class ResultAny; }
// clang-format on
#endif // @header-generator platform

namespace Scripting::Reflection {

class IPropertySetter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> isValidValue;
    ::ll::UntypedStorage<8, 48> isValidVectorValue;
    ::ll::UntypedStorage<1, 16> privilege;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk34d931;
    ::ll::UntypedStorage<8, 64> mUnk5232c0;
    ::ll::UntypedStorage<1, 1>  mUnk6122b2;
    // NOLINTEND

public:
    // prevent constructor by default
    IPropertySetter& operator=(IPropertySetter const&);
    IPropertySetter(IPropertySetter const&);
    IPropertySetter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPropertySetter() = default;

    virtual ::Scripting::ResultAny set(::entt::meta_handle, ::entt::meta_any) = 0;

    virtual ::entt::meta_type type() const = 0;

    virtual ::std::optional<::entt::meta_type> ownerType() const = 0;

    virtual bool isMemberFunction() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isMemberFunction() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting::Reflection
