#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::Reflection { class IPropertyGetter; }
namespace Scripting::Reflection { class IPropertySetter; }
// clang-format on

namespace Scripting::QuickJS {

struct PropertyGetSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scripting::Reflection::IPropertyGetter*> getter;
    ::ll::TypedStorage<8, 8, ::Scripting::Reflection::IPropertySetter*> setter;
    // NOLINTEND
};

} // namespace Scripting::QuickJS
