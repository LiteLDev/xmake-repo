#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/DataBufferHandleType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/script_engine/scripting/ScriptValue.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IObjectInspector; }
namespace Scripting { class IRuntime; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Scripting { struct DataBufferHandleType; }
#endif // @header-generator platform
// clang-format on

namespace Scripting {

class DataBufferAny : public ::Scripting::ScriptValue {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Scripting::IObjectInspector*> mObjectInspector;
    ::ll::UntypedStorage<8, 40>                              mDataBufferHandle;
    ::ll::TypedStorage<8, 8, ulong>                          mByteLength;
    ::ll::TypedStorage<8, 8, ulong>                          mLength;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk8ed6c8;
    ::ll::UntypedStorage<8, 40> mUnk6d65c6;
    ::ll::UntypedStorage<8, 8>  mUnke78ba3;
    ::ll::UntypedStorage<8, 8>  mUnka48647;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DataBufferAny();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DataBufferAny();
#else // @header-generator platform
    virtual ~DataBufferAny() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI DataBufferAny(::Scripting::DataBufferAny const&);
#else // @header-generator platform
    MCNAPI DataBufferAny(::Scripting::DataBufferAny const& rhs);
#endif // @header-generator platform

    MCNAPI DataBufferAny(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Scripting::IRuntime*,
        ::Scripting::ContextId,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::IObjectInspector*,
        ::Scripting::StrongTypedObjectHandle<Scripting::DataBufferHandleType>
#else // @header-generator platform
        ::Scripting::IRuntime*                                                  runtime,
        ::Scripting::ContextId                                                  contextId,
        ::Scripting::WeakLifetimeScope                                          scope,
        ::Scripting::IObjectInspector*                                          inspector,
        ::Scripting::StrongTypedObjectHandle<::Scripting::DataBufferHandleType> dataBufferHandle
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::TypedObjectHandle<Scripting::DataBufferHandleType>> getDataBufferHandle() const;
#else // @header-generator platform
    MCNAPI ::Scripting::DataBufferAny& operator=(::Scripting::DataBufferAny&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::DataBufferAny& operator=(::Scripting::DataBufferAny const&);

    MCNAPI ::Scripting::DataBufferAny& operator=(::Scripting::DataBufferAny&&);
#else // @header-generator platform
    MCNAPI ::Scripting::DataBufferAny& operator=(::Scripting::DataBufferAny const& rhs);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Scripting::DataBufferAny const&);
#else // @header-generator platform
    MCNAPI void* $ctor(::Scripting::DataBufferAny const& rhs);
#endif // @header-generator platform

    MCNAPI void* $ctor(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Scripting::IRuntime*,
        ::Scripting::ContextId,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::IObjectInspector*,
        ::Scripting::StrongTypedObjectHandle<Scripting::DataBufferHandleType>
#else // @header-generator platform
        ::Scripting::IRuntime*                                                  runtime,
        ::Scripting::ContextId                                                  contextId,
        ::Scripting::WeakLifetimeScope                                          scope,
        ::Scripting::IObjectInspector*                                          inspector,
        ::Scripting::StrongTypedObjectHandle<::Scripting::DataBufferHandleType> dataBufferHandle
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
