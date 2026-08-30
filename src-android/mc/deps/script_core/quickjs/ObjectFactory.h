#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/script_engine/scripting/IObjectFactory.h"

// auto generated forward declare list
// clang-format off
struct JSContext;
namespace Scripting { struct DataBufferHandleType; }
namespace Scripting { struct PromiseType; }
// clang-format on

namespace Scripting::QuickJS {

class ObjectFactory : public ::Scripting::IObjectFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::JSContext*>                    mJsContext;
    // NOLINTEND

public:
    // prevent constructor by default
    ObjectFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ObjectFactory();

    virtual ::Scripting::StrongTypedObjectHandle<Scripting::PromiseType> makePromise();

    virtual ::Scripting::StrongTypedObjectHandle<Scripting::DataBufferHandleType> makeDataBuffer(uchar const*, ulong, ::entt::meta_type const&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::StrongTypedObjectHandle<Scripting::PromiseType> $makePromise();

    MCNAPI ::Scripting::StrongTypedObjectHandle<Scripting::DataBufferHandleType>
    $makeDataBuffer(uchar const*, ulong, ::entt::meta_type const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
