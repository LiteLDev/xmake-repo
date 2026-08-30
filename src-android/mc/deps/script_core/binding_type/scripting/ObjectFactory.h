#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::Reflection { class IFunction; }
// clang-format on

namespace Scripting {

struct ObjectFactory : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                       name;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Scripting::Reflection::IFunction>> func;
    ::ll::TypedStorage<8, 16, ::entt::meta_type>                                 type;
    // NOLINTEND

public:
    // prevent constructor by default
    ObjectFactory& operator=(ObjectFactory const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ObjectFactory();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
