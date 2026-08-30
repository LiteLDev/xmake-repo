#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::QuickJS { struct ArrayPropertyFetch; }
// clang-format on

namespace Scripting::QuickJS {

struct CurrentlyOwnedArrayProperties {
public:
    // CurrentlyOwnedArrayProperties inner types declare
    // clang-format off
    struct Prop;
    // clang-format on

    // CurrentlyOwnedArrayProperties inner types define
    struct Prop {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> idx;
        ::ll::UntypedStorage<8, 32>     handle;
        // NOLINTEND

    public:
        // prevent constructor by default
        Prop& operator=(Prop const&);
        Prop();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Scripting::QuickJS::CurrentlyOwnedArrayProperties::Prop>> props;
    // NOLINTEND

public:
    // prevent constructor by default
    CurrentlyOwnedArrayProperties& operator=(CurrentlyOwnedArrayProperties const&);
};

} // namespace Scripting::QuickJS
