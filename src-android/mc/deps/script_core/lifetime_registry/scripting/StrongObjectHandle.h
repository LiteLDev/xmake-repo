#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/ObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { class WeakObjectHandle; }
// clang-format on

namespace Scripting {

class StrongObjectHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 16, ::Scripting::ObjectHandle>      mHandle;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StrongObjectHandle();

    MCNAPI StrongObjectHandle(::Scripting::StrongObjectHandle const&);

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

    MCNAPI bool valid() const;

    MCNAPI ~StrongObjectHandle();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::StrongObjectHandle promote(::Scripting::WeakObjectHandle const&);

    MCNAPI static ::Scripting::ObjectHandle release(::Scripting::StrongObjectHandle&&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Scripting::StrongObjectHandle const& InvalidHandle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Scripting::StrongObjectHandle const&);

    MCNAPI void* $ctor(::Scripting::StrongObjectHandle&&);

    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope, ::Scripting::ObjectHandle, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
