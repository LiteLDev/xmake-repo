#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/IDebuggerController.h"

// auto generated forward declare list
// clang-format off
struct JSContext;
struct JSRuntime;
struct JSValue;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class IBreakpointValidator; }
namespace Scripting { class IDebuggerTransport; }
namespace Scripting::QuickJS { class ContextObject; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Scripting::QuickJS {

class Debugger : public ::Scripting::IDebuggerController {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // Debugger inner types define
    using ResumeNotificationCb = std::function<void()>;

    using CollectContextsCb = std::function<std::vector<JSContext*>()>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Scripting::IDebuggerTransport&>    mTransport;
    ::ll::UntypedStorage<8, 16>                                   mJsRuntime;
    ::ll::UntypedStorage<8, 48>                                   mResumeNotificationCb;
    ::ll::UntypedStorage<8, 48>                                   mCollectContextsCb;
    ::ll::UntypedStorage<8, 48>                                   mMessageHandler;
    ::ll::TypedStorage<8, 16, ::Scripting::IBreakpointValidator&> mValidator;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkae28c9;
    ::ll::UntypedStorage<8, 8>  mUnke101ac;
    ::ll::UntypedStorage<8, 64> mUnk84399a;
    ::ll::UntypedStorage<8, 64> mUnk7c3698;
    ::ll::UntypedStorage<8, 64> mUnkbbe543;
    ::ll::UntypedStorage<8, 8>  mUnkfa6a1c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Debugger& operator=(Debugger const&);
    Debugger(Debugger const&);
    Debugger();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Debugger();
#else // @header-generator platform
    virtual ~Debugger() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool attach(bool, std::optional<std::string>, std::function<void(std::string_view)>);
#else // @header-generator platform
    virtual bool attach(
        bool                                      performHandshake,
        ::std::optional<::std::string>            targetModuleUuid,
        ::std::function<void(::std::string_view)> handler
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void detach();
#else // @header-generator platform
    virtual void detach() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool closed() const;
#else // @header-generator platform
    virtual bool closed() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void pumpMessages();
#else // @header-generator platform
    virtual void pumpMessages() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static uint ContextToId(::JSContext*, void*);
#else // @header-generator platform
    MCNAPI static uint ContextToId(::JSContext* ctx, void*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static char const* ContextToModuleUuidLowerCase(::JSContext*, void*);
#else // @header-generator platform
    MCNAPI static char const* ContextToModuleUuidLowerCase(::JSContext* ctx, void*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void MessageHandler(void*, char const*, ulong);
#else // @header-generator platform
    MCNAPI static void MessageHandler(void* udata, char const* message, uint64 length);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void NotifyResume(void*);
#else // @header-generator platform
    MCNAPI static void NotifyResume(void* udata);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static char const* ToTypeName(::JSContext*, ::JSValue);
#else // @header-generator platform
    MCNAPI static char const* ToTypeName(::JSContext* ctx, ::JSValue val);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void TransportClose(::JSRuntime*, void*);
#else // @header-generator platform
    MCNAPI static void TransportClose(::JSRuntime*, void* udata);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ulong TransportPeek(void*);
#else // @header-generator platform
    MCNAPI static uint64 TransportPeek(void* udata);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ulong TransportRead(void*, char*, ulong);
#else // @header-generator platform
    MCNAPI static uint64 TransportRead(void* udata, char* buffer, uint64 length);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ulong TransportWrite(void*, char const*, ulong);
#else // @header-generator platform
    MCNAPI static uint64 TransportWrite(void* udata, char const* buffer, uint64 length);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int ValidatePath(void*, char const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI static int ValidatePath(void* udata, char const* path);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $attach(bool, std::optional<std::string>, std::function<void(std::string_view)>);
#else // @header-generator platform
    MCNAPI bool $attach(
        bool                                      performHandshake,
        ::std::optional<::std::string>            targetModuleUuid,
        ::std::function<void(::std::string_view)> handler
    );
#endif // @header-generator platform

    MCNAPI void $detach();

    MCNAPI bool $closed() const;

    MCNAPI void $pumpMessages();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
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
