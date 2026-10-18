#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
struct ITaskQueue {};
#else // @header-generator platform
// auto generated inclusion list
#include "mc/comprehensive/IApi.h"
#include "mc/deps/core/threading/XTaskQueuePort.h"

// auto generated forward declare list
// clang-format off
struct ITaskQueuePortContext;
struct XTaskQueueObject;
struct XTaskQueueRegistrationToken;
struct XTaskQueueTestHooks;
// clang-format on

struct ITaskQueue : public ::IApi {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::XTaskQueueObject* GetHandle() = 0;

    virtual ::XTaskQueueTestHooks* GetTestHooks() = 0;

    virtual void SetTestHooks(::XTaskQueueTestHooks* testHooks) = 0;

    virtual HRESULT GetPortContext(::XTaskQueuePort port, ::ITaskQueuePortContext** portContext) = 0;

    virtual HRESULT RegisterWaitHandle(
        ::XTaskQueuePort port,
        void*            waitHandle,
        void*            callbackContext,
        void (*callback)(void*, bool),
        ::XTaskQueueRegistrationToken* token
    ) = 0;

    virtual void UnregisterWaitHandle(::XTaskQueueRegistrationToken token) = 0;

    virtual HRESULT RegisterSubmitCallback(
        void* context,
        void (*callback)(void*, ::XTaskQueueObject*, ::XTaskQueuePort),
        ::XTaskQueueRegistrationToken* token
    ) = 0;

    virtual void UnregisterSubmitCallback(::XTaskQueueRegistrationToken token) = 0;

    virtual HRESULT Terminate(bool wait, void* callbackContext, void (*callback)(void*)) = 0;
    // NOLINTEND
};
#endif // @header-generator platform
#endif // @header-generator platform
