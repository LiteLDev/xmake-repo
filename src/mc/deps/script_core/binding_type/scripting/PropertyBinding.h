#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Scripting::Reflection { class IPropertyGetter; }
namespace Scripting::Reflection { class IPropertySetter; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting {

struct PropertyBinding : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                             name;
    ::ll::TypedStorage<8, 16, ::entt::meta_type>                                       type;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Scripting::Reflection::IPropertySetter>> set;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Scripting::Reflection::IPropertyGetter>> get;
    ::ll::UntypedStorage<8, 48>                                                        isValidValue;
    ::ll::UntypedStorage<8, 48>                                                        isValidVectorValue;
    ::ll::TypedStorage<8, 64, ::entt::meta_any>                                        minValue;
    ::ll::TypedStorage<8, 64, ::entt::meta_any>                                        maxValue;
    ::ll::TypedStorage<1, 1, bool>                                                     hasMin;
    ::ll::TypedStorage<1, 1, bool>                                                     hasMax;
    ::ll::TypedStorage<8, 64, ::entt::meta_any>                                        defaultPropertyValue;
    ::ll::TypedStorage<4, 4, uint>                                                     maxArraySize;
    ::ll::TypedStorage<1, 1, bool>                                                     hasMaxArraySize;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk20fee6;
    ::ll::UntypedStorage<8, 16> mUnk8a8634;
    ::ll::UntypedStorage<8, 16> mUnkae65ab;
    ::ll::UntypedStorage<8, 16> mUnkb9812f;
    ::ll::UntypedStorage<8, 64> mUnk8a1fda;
    ::ll::UntypedStorage<8, 64> mUnkfebb39;
    ::ll::UntypedStorage<8, 64> mUnkb93590;
    ::ll::UntypedStorage<8, 64> mUnk848c5a;
    ::ll::UntypedStorage<1, 1>  mUnk8ffa41;
    ::ll::UntypedStorage<1, 1>  mUnkfa8fc4;
    ::ll::UntypedStorage<8, 64> mUnkc5b748;
    ::ll::UntypedStorage<4, 4>  mUnk667c85;
    ::ll::UntypedStorage<1, 1>  mUnk9889b0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isValidPropertyValue(::entt::meta_any const&) const;
#else // @header-generator platform
    MCNAPI PropertyBinding();

    MCNAPI PropertyBinding(::Scripting::PropertyBinding&&);

    MCNAPI PropertyBinding(::Scripting::PropertyBinding const&);

    MCNAPI ::Scripting::PropertyBinding& operator=(::Scripting::PropertyBinding const&);

    MCNAPI ~PropertyBinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Scripting::PropertyBinding&&);

    MCNAPI void* $ctor(::Scripting::PropertyBinding const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
