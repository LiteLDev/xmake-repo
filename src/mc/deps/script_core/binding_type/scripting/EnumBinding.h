#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/binding_type/scripting/ConstantFactory.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"

namespace Scripting {

struct EnumBinding : public ::Scripting::TaggedBinding {
public:
    // EnumBinding inner types declare
    // clang-format off
    struct EnumValue;
    // clang-format on

    // EnumBinding inner types define
    struct EnumValue {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>      name;
        ::ll::TypedStorage<8, 24, std::string>      valueString;
        ::ll::TypedStorage<8, 64, ::entt::meta_any> value;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk9df397;
        ::ll::UntypedStorage<8, 32> mUnk202d6e;
        ::ll::UntypedStorage<8, 64> mUnka386bd;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        EnumValue& operator=(EnumValue const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        EnumValue(EnumValue const&);
#endif // @header-generator platform
        EnumValue();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~EnumValue();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using EnumValueMap = std::vector<Scripting::EnumBinding::EnumValue>;

#else // @header-generator platform
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                    name;
    ::ll::TypedStorage<8, 16, ::entt::meta_type>                              type;
    ::ll::TypedStorage<1, 1, bool>                                            isStringEnum;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ConstantFactory>>        constants;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::EnumBinding::EnumValue>> valueMap;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkd9d571;
    ::ll::UntypedStorage<8, 16> mUnkf0e553;
    ::ll::UntypedStorage<1, 1>  mUnk4e5d4f;
    ::ll::UntypedStorage<8, 24> mUnk56312e;
    ::ll::UntypedStorage<8, 24> mUnkffc7c6;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EnumBinding& operator=(EnumBinding const&);
    EnumBinding(EnumBinding const&);
    EnumBinding();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EnumBinding();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
