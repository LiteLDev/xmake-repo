#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/ObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { class StrongObjectHandle; }
// clang-format on

namespace Scripting {

class WeakObjectHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 16, ::Scripting::ObjectHandle>      mHandle;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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

    MCNAPI bool valid() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Scripting::WeakObjectHandle const&);

    MCNAPI void* $ctor(::Scripting::WeakObjectHandle&&);

    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope, ::Scripting::ObjectHandle);
    // NOLINTEND
};

} // namespace Scripting
