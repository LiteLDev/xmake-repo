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
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class WeakObjectHandle; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Scripting { struct ObjectHandle; }
#endif // @header-generator platform
// clang-format on

namespace Scripting {

class StrongObjectHandle {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 16, ::Scripting::ObjectHandle>      mHandle;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk312e65;
    ::ll::UntypedStorage<8, 16> mUnkd70ff5;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    StrongObjectHandle& operator=(StrongObjectHandle const&);
    StrongObjectHandle();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StrongObjectHandle();
#else // @header-generator platform
    MCNAPI StrongObjectHandle(::Scripting::StrongObjectHandle const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StrongObjectHandle(::Scripting::StrongObjectHandle const&);
#else // @header-generator platform
    MCNAPI ::Scripting::StrongObjectHandle& operator=(::Scripting::StrongObjectHandle&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StrongObjectHandle(::Scripting::StrongObjectHandle&&);

    MCNAPI StrongObjectHandle(::Scripting::WeakLifetimeScope, ::Scripting::ObjectHandle, bool);

    MCNAPI void _addReference();

    MCNAPI ::entt::meta_any asAny();

    MCNAPI ::Scripting::ObjectHandle getHandle() const;

    MCNAPI ::Scripting::LifetimeRegistry* getLifetimeRegistry() const;

    MCNAPI ::Scripting::WeakLifetimeScope getScope() const;

    MCNAPI bool operator!=(::Scripting::StrongObjectHandle const&) const;

    MCNAPI ::Scripting::StrongObjectHandle& operator=(::Scripting::StrongObjectHandle const&);

    MCNAPI ::Scripting::StrongObjectHandle& operator=(::Scripting::StrongObjectHandle&&);

    MCNAPI bool operator==(::Scripting::StrongObjectHandle const&) const;
#else // @header-generator platform
    MCNAPI bool operator==(::Scripting::StrongObjectHandle const& rhs) const;
#endif // @header-generator platform

    MCNAPI bool valid() const;

    MCNAPI ~StrongObjectHandle();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::StrongObjectHandle promote(::Scripting::WeakObjectHandle const&);

    MCNAPI static ::Scripting::ObjectHandle release(::Scripting::StrongObjectHandle&&);
#else // @header-generator platform
    MCNAPI static ::Scripting::StrongObjectHandle promote(::Scripting::WeakObjectHandle const& weakHandle);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Scripting::StrongObjectHandle const& InvalidHandle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Scripting::StrongObjectHandle const&);

    MCNAPI void* $ctor(::Scripting::StrongObjectHandle&&);

    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope, ::Scripting::ObjectHandle, bool);
#else // @header-generator platform
    MCNAPI void* $ctor(::Scripting::StrongObjectHandle const& rhs);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
