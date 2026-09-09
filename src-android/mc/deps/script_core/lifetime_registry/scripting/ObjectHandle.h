#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/ObjectHandleValue.h"
#include "mc/deps/script_core/runtime/scripting/ContextId.h"

namespace Scripting {

struct ObjectHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scripting::ObjectHandleValue> value;
    ::ll::TypedStorage<1, 1, ::Scripting::ContextId>         contextId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ObjectHandle();

    MCNAPI explicit ObjectHandle(ulong);

    MCNAPI ulong combine() const;

    MCNAPI bool empty() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(ulong);
    // NOLINTEND
};

} // namespace Scripting
