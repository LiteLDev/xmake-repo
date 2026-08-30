#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/ObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::Reflection { class IPropertyGetter; }
// clang-format on

namespace Scripting::QuickJS {

struct OwnerAndProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::ObjectHandle>                ownerHandle;
    ::ll::TypedStorage<8, 8, ::Scripting::Reflection::IPropertyGetter*> property;
    // NOLINTEND
};

} // namespace Scripting::QuickJS
