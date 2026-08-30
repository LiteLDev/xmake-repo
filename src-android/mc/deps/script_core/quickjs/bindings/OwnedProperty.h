#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::QuickJS { struct OwnerAndProperty; }
namespace Scripting::Reflection { class IPropertyGetter; }
// clang-format on

namespace Scripting::QuickJS {

struct OwnedProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scripting::Reflection::IPropertyGetter*> property;
    ::ll::UntypedStorage<8, 32>                                         propertyHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    OwnedProperty();
};

} // namespace Scripting::QuickJS
