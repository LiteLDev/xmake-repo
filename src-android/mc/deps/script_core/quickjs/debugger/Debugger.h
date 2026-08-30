#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/IDebuggerController.h"

// auto generated forward declare list
// clang-format off
struct JSContext;
struct JSRuntime;
struct JSValue;
namespace Scripting { class IBreakpointValidator; }
namespace Scripting { class IDebuggerTransport; }
namespace Scripting::QuickJS { class ContextObject; }
// clang-format on

namespace Scripting::QuickJS {

class Debugger : public ::Scripting::IDebuggerController {
public:
    // Debugger inner types define
    using ResumeNotificationCb = std::function<void()>;

    using CollectContextsCb = std::function<std::vector<JSContext*>()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scripting::IDebuggerTransport&>    mTransport;
    ::ll::UntypedStorage<8, 16>                                   mJsRuntime;
    ::ll::UntypedStorage<8, 48>                                   mResumeNotificationCb;
    ::ll::UntypedStorage<8, 48>                                   mCollectContextsCb;
    ::ll::UntypedStorage<8, 48>                                   mMessageHandler;
    ::ll::TypedStorage<8, 16, ::Scripting::IBreakpointValidator&> mValidator;
    // NOLINTEND

public:
    // prevent constructor by default
    Debugger& operator=(Debugger const&);
    Debugger(Debugger const&);
    Debugger();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Debugger();

    virtual bool attach(bool, std::optional<std::string>, std::function<void(std::string_view)>);

    virtual void detach();

    virtual bool closed() const;

    virtual void pumpMessages();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint ContextToId(::JSContext*, void*);

    MCNAPI static char const* ContextToModuleUuidLowerCase(::JSContext*, void*);

    MCNAPI static void MessageHandler(void*, char const*, ulong);

    MCNAPI static void NotifyResume(void*);

    MCNAPI static char const* ToTypeName(::JSContext*, ::JSValue);

    MCNAPI static void TransportClose(::JSRuntime*, void*);

    MCNAPI static ulong TransportPeek(void*);

    MCNAPI static ulong TransportRead(void*, char*, ulong);

    MCNAPI static ulong TransportWrite(void*, char const*, ulong);

    MCNAPI static int ValidatePath(void*, char const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $attach(bool, std::optional<std::string>, std::function<void(std::string_view)>);

    MCNAPI void $detach();

    MCNAPI bool $closed() const;

    MCNAPI void $pumpMessages();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
