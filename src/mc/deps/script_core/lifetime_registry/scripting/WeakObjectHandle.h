#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/ObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { class StrongObjectHandle; }
#else // @header-generator platform
namespace Scripting { struct ObjectHandle; }
#endif // @header-generator platform
// clang-format on

namespace Scripting {

class WeakObjectHandle {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 16, ::Scripting::ObjectHandle>      mHandle;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk7db6bc;
    ::ll::UntypedStorage<8, 16> mUnkb898e0;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    WeakObjectHandle& operator=(WeakObjectHandle const&);
    WeakObjectHandle(WeakObjectHandle const&);
    WeakObjectHandle();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI WeakObjectHandle();

    MCNAPI WeakObjectHandle(::Scripting::WeakObjectHandle const&);

    MCNAPI WeakObjectHandle(::Scripting::WeakObjectHandle&&);

    MCNAPI WeakObjectHandle(::Scripting::WeakLifetimeScope, ::Scripting::ObjectHandle);

    MCNAPI ::Scripting::ObjectHandle getHandle() const;

    MCNAPI ::Scripting::LifetimeRegistry* getLifetimeRegistry() const;

    MCNAPI ::Scripting::WeakLifetimeScope getScope() const;

    MCNAPI ::Scripting::WeakObjectHandle& operator=(::Scripting::WeakObjectHandle const&);

    MCNAPI ::Scripting::WeakObjectHandle& operator=(::Scripting::WeakObjectHandle&&);

    MCNAPI bool operator==(::Scripting::WeakObjectHandle const&) const;

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI bool valid() const;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Scripting::WeakObjectHandle const&);

    MCNAPI void* $ctor(::Scripting::WeakObjectHandle&&);

    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope, ::Scripting::ObjectHandle);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
