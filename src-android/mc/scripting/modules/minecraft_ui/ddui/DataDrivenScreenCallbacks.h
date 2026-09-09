#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongObjectHandle.h"
#include "mc/scripting/DataDrivenScreenPromise.h"
#include "mc/scripting/DataDrivenScreenRejectReason.h"
#include "mc/ui/DataDrivenScreenClosedReason.h"

namespace ScriptModuleMinecraftServerUI {

struct DataDrivenScreenCallbacks : public ::DataDrivenScreenPromise {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 16>                                mResolvedOrRejected;
    ::ll::UntypedStorage<8, 48>                                mResolveCallback;
    ::ll::UntypedStorage<8, 48>                                mRejectCallback;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongObjectHandle> mFormKeepAliveHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenScreenCallbacks();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenScreenCallbacks();

    virtual void resolve(::DataDrivenScreenClosedReason);

    virtual void reject(::DataDrivenScreenRejectReason);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $resolve(::DataDrivenScreenClosedReason);

    MCNAPI void $reject(::DataDrivenScreenRejectReason);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
