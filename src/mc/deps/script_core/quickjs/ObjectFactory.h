#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/script_engine/scripting/IObjectFactory.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct JSContext;
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct DataBufferHandleType; }
namespace Scripting { struct PromiseType; }
// clang-format on

namespace Scripting::QuickJS {

class ObjectFactory : public ::Scripting::IObjectFactory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::JSContext*>                    mJsContext;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk7c0899;
    ::ll::UntypedStorage<8, 8>  mUnk282d2d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ObjectFactory& operator=(ObjectFactory const&);
    ObjectFactory(ObjectFactory const&);
#endif // @header-generator platform
    ObjectFactory();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ObjectFactory();
#else // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<::Scripting::PromiseType> makePromise() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<Scripting::PromiseType> makePromise();

    virtual ::Scripting::StrongTypedObjectHandle<Scripting::DataBufferHandleType> makeDataBuffer(uchar const*, ulong, ::entt::meta_type const&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<::Scripting::DataBufferHandleType>
    makeDataBuffer(uchar const* data, uint64 size, ::entt::meta_type const& dataType) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::StrongTypedObjectHandle<Scripting::PromiseType> $makePromise();
#else // @header-generator platform
    MCNAPI ::Scripting::StrongTypedObjectHandle<::Scripting::PromiseType> $makePromise();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::StrongTypedObjectHandle<Scripting::DataBufferHandleType>
    $makeDataBuffer(uchar const*, ulong, ::entt::meta_type const&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::Scripting::StrongTypedObjectHandle<::Scripting::DataBufferHandleType>
    $makeDataBuffer(uchar const* data, uint64 size, ::entt::meta_type const& dataType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting::QuickJS
