#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::Reflection { class IPropertyGetter; }
namespace Scripting::Reflection { class IPropertySetter; }
// clang-format on

namespace Scripting {

struct PropertyBinding : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isValidPropertyValue(::entt::meta_any const&) const;
    // NOLINTEND
};

} // namespace Scripting
