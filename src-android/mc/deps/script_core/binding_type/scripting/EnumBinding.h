#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/ConstantFactory.h"
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
        ::ll::TypedStorage<8, 24, std::string>      name;
        ::ll::TypedStorage<8, 24, std::string>      valueString;
        ::ll::TypedStorage<8, 64, ::entt::meta_any> value;
        // NOLINTEND

    public:
        // prevent constructor by default
        EnumValue& operator=(EnumValue const&);
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

    using EnumValueMap = std::vector<Scripting::EnumBinding::EnumValue>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                    name;
    ::ll::TypedStorage<8, 16, ::entt::meta_type>                              type;
    ::ll::TypedStorage<1, 1, bool>                                            isStringEnum;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ConstantFactory>>        constants;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::EnumBinding::EnumValue>> valueMap;
    // NOLINTEND

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
