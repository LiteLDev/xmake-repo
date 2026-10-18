#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/ObjectHandleValue.h"
#include "mc/deps/script_core/runtime/scripting/ContextId.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

struct ObjectHandle {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Scripting::ObjectHandleValue> value;
    ::ll::TypedStorage<1, 1, ::Scripting::ContextId>         contextId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk94fcd0;
    ::ll::UntypedStorage<1, 1> mUnka0f03d;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    // prevent constructor by default
    ObjectHandle& operator=(ObjectHandle const&);
    ObjectHandle(ObjectHandle const&);
    ObjectHandle();
#endif // @header-generator platform
};

} // namespace Scripting
