#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/quickjs/bindings/OwnedProperty.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting::Reflection { class IPropertyGetter; }
// clang-format on

namespace Scripting::QuickJS {

struct CurrentlyOwnedProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scripting::LifetimeRegistry*>                  registry;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::QuickJS::OwnedProperty>> properties;
    // NOLINTEND

public:
    // prevent constructor by default
    CurrentlyOwnedProperties();
};

} // namespace Scripting::QuickJS
