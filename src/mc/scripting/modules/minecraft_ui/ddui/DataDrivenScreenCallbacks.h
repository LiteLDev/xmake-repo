#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/DataDrivenScreenPromise.h"
#include "mc/scripting/DataDrivenScreenRejectReason.h"
#include "mc/ui/DataDrivenScreenClosedReason.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { class StrongObjectHandle; }
// clang-format on
#endif // @header-generator platform

namespace ScriptModuleMinecraftServerUI {

struct DataDrivenScreenCallbacks : public ::DataDrivenScreenPromise {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 16>                                mResolvedOrRejected;
    ::ll::UntypedStorage<8, 48>                                mResolveCallback;
    ::ll::UntypedStorage<8, 48>                                mRejectCallback;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongObjectHandle> mFormKeepAliveHandle;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnkd49092;
    ::ll::UntypedStorage<8, 64> mUnk456224;
    ::ll::UntypedStorage<8, 64> mUnkbf6963;
    ::ll::UntypedStorage<8, 32> mUnkdc9d82;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DataDrivenScreenCallbacks& operator=(DataDrivenScreenCallbacks const&);
    DataDrivenScreenCallbacks(DataDrivenScreenCallbacks const&);
#endif // @header-generator platform
    DataDrivenScreenCallbacks();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DataDrivenScreenCallbacks();
#else // @header-generator platform
    virtual ~DataDrivenScreenCallbacks() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void resolve(::DataDrivenScreenClosedReason);
#else // @header-generator platform
    virtual void resolve(::DataDrivenScreenClosedReason resolution) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reject(::DataDrivenScreenRejectReason);
#else // @header-generator platform
    virtual void reject(::DataDrivenScreenRejectReason rejection) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI DataDrivenScreenCallbacks(
        ::std::function<void(::DataDrivenScreenClosedReason)> resolveCallback,
        ::std::function<void(::DataDrivenScreenRejectReason)> rejectCallback,
        ::Scripting::StrongObjectHandle                       keepAliveHandle
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::function<void(::DataDrivenScreenClosedReason)> resolveCallback,
        ::std::function<void(::DataDrivenScreenRejectReason)> rejectCallback,
        ::Scripting::StrongObjectHandle                       keepAliveHandle
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $resolve(::DataDrivenScreenClosedReason);
#else // @header-generator platform
    MCAPI void $resolve(::DataDrivenScreenClosedReason resolution);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reject(::DataDrivenScreenRejectReason);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $reject(::DataDrivenScreenRejectReason rejection);
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

} // namespace ScriptModuleMinecraftServerUI
