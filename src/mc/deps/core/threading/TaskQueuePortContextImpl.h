#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
class TaskQueuePortContextImpl {};
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/ApiId.h"
#include "mc/deps/core/threading/ITaskQueuePortContext.h"
#include "mc/deps/core/threading/TaskQueuePortStatus.h"
#include "mc/deps/core/threading/XTaskQueuePort.h"

// auto generated forward declare list
// clang-format off
struct ITaskQueue;
struct ITaskQueuePort;
// clang-format on

class TaskQueuePortContextImpl : public ::ITaskQueuePortContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkee6bb2;
    ::ll::UntypedStorage<8, 8> mUnkeeafcd;
    ::ll::UntypedStorage<8, 8> mUnk6a9c40;
    ::ll::UntypedStorage<4, 4> mUnkcee1c4;
    ::ll::UntypedStorage<8, 8> mUnkc19027;
    ::ll::UntypedStorage<4, 4> mUnka242e0;
    ::ll::UntypedStorage<4, 4> mUnk4b4b60;
    // NOLINTEND

public:
    // prevent constructor by default
    TaskQueuePortContextImpl& operator=(TaskQueuePortContextImpl const&);
    TaskQueuePortContextImpl(TaskQueuePortContextImpl const&);
    TaskQueuePortContextImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual uint AddRef() /*override*/;

    virtual uint Release() /*override*/;

    virtual HRESULT QueryApi(::ApiId id, void** ptr) /*override*/;

    virtual ::XTaskQueuePort GetType() /*override*/;

    virtual ::TaskQueuePortStatus GetStatus() /*override*/;

    virtual ::ITaskQueue* GetQueue() /*override*/;

    virtual ::ITaskQueuePort* GetPort() /*override*/;

    virtual bool TrySetStatus(::TaskQueuePortStatus expectedStatus, ::TaskQueuePortStatus status) /*override*/;

    virtual void SetStatus(::TaskQueuePortStatus status) /*override*/;

    virtual void ItemQueued() /*override*/;

    virtual bool AddSuspend() /*override*/;

    virtual bool RemoveSuspend() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint $AddRef();

    MCNAPI uint $Release();

    MCNAPI HRESULT $QueryApi(::ApiId id, void** ptr);

    MCNAPI ::XTaskQueuePort $GetType();

    MCNAPI ::TaskQueuePortStatus $GetStatus();

    MCNAPI ::ITaskQueue* $GetQueue();

    MCNAPI ::ITaskQueuePort* $GetPort();

    MCNAPI bool $TrySetStatus(::TaskQueuePortStatus expectedStatus, ::TaskQueuePortStatus status);

    MCNAPI void $SetStatus(::TaskQueuePortStatus status);

    MCNAPI void $ItemQueued();

    MCNAPI bool $AddSuspend();

    MCNAPI bool $RemoveSuspend();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#endif // @header-generator platform
#endif // @header-generator platform
