#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogLevel.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/UUID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/debugger/IScriptDebugger.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/debugger/ScriptDebuggerSettings.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/diagnostics/IScriptStatPublisher.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class IScriptDebuggerRequestHandler;
class IScriptDebuggerWatchdog;
class IScriptTelemetryLogger;
class LocalProfilerControlBroker;
class MinecraftCommands;
class ScriptBreakpointValidator;
class ScriptDebuggerProtocol;
class ScriptDebuggerTransport;
class ScriptPluginManager;
#else // @header-generator platform
#endif // @header-generator platform
class ScriptStat;
#if defined(LL_PLAT_A) // @header-generator platform
class ServerLevel;
#else // @header-generator platform
struct ScriptDebuggerSettings;
#endif // @header-generator platform
namespace Core { class Path; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptDebuggerMessages { struct CommandMessage; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptDebuggerMessages { struct DebuggerRequestMessage; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptDebuggerMessages { struct StartProfilerMessage; }
namespace ScriptDebuggerMessages { struct StopProfilerMessage; }
namespace Scripting { class IDebuggerController; }
namespace Scripting { class ScriptEngine; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { class DynamicValue; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ScriptDebugger : public ::IScriptDebugger, public ::IScriptStatPublisher {
public:
    // ScriptDebugger inner types declare
    // clang-format off
    struct AutoAttachTelem;
    // clang-format on

    // ScriptDebugger inner types define
    enum class DebuggerMode : int {
        Stopped = 0,
        Connect = 1,
        Listen  = 2,
    };

    struct AutoAttachTelem {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, bool> mAutoAttach;
        ::ll::TypedStorage<4, 4, int>  mAttachRetries;
#else // @header-generator platform
        ::ll::UntypedStorage<1, 1> mUnk38ff41;
        ::ll::UntypedStorage<4, 4> mUnk61770b;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using DebuggerRequestHandler =
        std::function<void(const ScriptDebuggerMessages::DebuggerRequestMessage&, ScriptDebugger&)>;
#else // @header-generator platform
    public:
        // prevent constructor by default
        AutoAttachTelem& operator=(AutoAttachTelem const&);
        AutoAttachTelem(AutoAttachTelem const&);
        AutoAttachTelem();
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 88, ::ScriptDebuggerSettings> mSettings;
    ::ll::TypedStorage<8, 8, ::ServerLevel&> mServerLevel;
    ::ll::TypedStorage<8, 8, ::MinecraftCommands&> mCommands;
    ::ll::TypedStorage<8, 8, ::cereal::ReflectionCtx&> mCerealContext;
    ::ll::TypedStorage<8, 8, ::Scripting::ScriptEngine&> mScriptEngine;
    ::ll::TypedStorage<8, 8, ::ScriptPluginManager&> mPluginManager;
    ::ll::TypedStorage<8, 8, ::IScriptDebuggerWatchdog&> mWatchdog;
    ::ll::TypedStorage<8, 8, ::IScriptTelemetryLogger&> mTelemetry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptDebuggerTransport>> mTransport;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptBreakpointValidator>> mBreakpointValidator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptDebuggerProtocol>> mMessageProtocol;
    ::ll::TypedStorage<8, 8, ::Scripting::IDebuggerController*> mController;
    ::ll::TypedStorage<4, 4, ::ScriptDebugger::DebuggerMode> mDebuggerMode;
    ::ll::TypedStorage<8, 24, std::string> mHostName;
    ::ll::TypedStorage<4, 4, int> mPort;
    ::ll::TypedStorage<8, 24, std::optional<mce::UUID>> mTargetModuleUUID;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<IScriptDebuggerRequestHandler>>> mRequestHandlers;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::function<void (const ScriptDebuggerMessages::DebuggerRequestMessage&, ScriptDebugger&)>>> mDebuggerRequestHandlers;
    ::ll::TypedStorage<4, 12, std::optional<ScriptDebugger::AutoAttachTelem>> mAutoAttachTelem;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 104> mUnkaa78c0;
    ::ll::UntypedStorage<8, 8>   mUnkd106a5;
    ::ll::UntypedStorage<8, 8>   mUnkf7195e;
    ::ll::UntypedStorage<8, 8>   mUnk2f3c05;
    ::ll::UntypedStorage<8, 8>   mUnkbce03b;
    ::ll::UntypedStorage<8, 8>   mUnkd6e3ed;
    ::ll::UntypedStorage<8, 8>   mUnk85bc4f;
    ::ll::UntypedStorage<8, 8>   mUnk53da61;
    ::ll::UntypedStorage<8, 8>   mUnka973d0;
    ::ll::UntypedStorage<8, 8>   mUnk102427;
    ::ll::UntypedStorage<8, 8>   mUnk8ca513;
    ::ll::UntypedStorage<8, 8>   mUnkde53e6;
    ::ll::UntypedStorage<4, 4>   mUnk1e8970;
    ::ll::UntypedStorage<8, 32>  mUnk5186f8;
    ::ll::UntypedStorage<4, 4>   mUnk82a025;
    ::ll::UntypedStorage<8, 24>  mUnk89c845;
    ::ll::UntypedStorage<8, 24>  mUnk50622d;
    ::ll::UntypedStorage<8, 64>  mUnk89cb81;
    ::ll::UntypedStorage<4, 12>  mUnkc99a5f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebugger& operator=(ScriptDebugger const&);
    ScriptDebugger(ScriptDebugger const&);
    ScriptDebugger();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptDebugger();
#else // @header-generator platform
    virtual ~ScriptDebugger() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool connect(std::string const&, ushort);
#else // @header-generator platform
    virtual ::ScriptDebuggerSettings const& getSettings() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool listen(ushort);
#else // @header-generator platform
    virtual bool connect(::std::string const& host, ushort port) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop();
#else // @header-generator platform
    virtual bool listen(ushort port) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ScriptDebuggerSettings const& getSettings() const;
#else // @header-generator platform
    virtual void stop() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startProfiler();
#else // @header-generator platform
    virtual void startProfiler() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<Core::Path> stopProfiler();
#else // @header-generator platform
    virtual ::std::vector<::Core::Path> stopProfiler() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isStatPublisherEnabled() const;
#else // @header-generator platform
    virtual bool isStatPublisherEnabled() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void publishStats(ulong, std::vector<ScriptStat> const&);
#else // @header-generator platform
    virtual void publishStats(uint64 collectedTick, ::std::vector<::ScriptStat> const& stats) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _handleDebuggerRequestMessage(::ScriptDebuggerMessages::DebuggerRequestMessage const&);
#else // @header-generator platform
    MCNAPI void
    _handleDebuggerRequestMessage(::ScriptDebuggerMessages::DebuggerRequestMessage const& debuggerRequestPayload);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string _sanitizeHostName(std::string const&) const;
#else // @header-generator platform
    MCNAPI ::std::string _sanitizeHostName(::std::string const& host) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _sendNotification(::LogLevel, std::string_view);
#else // @header-generator platform
    MCNAPI void _sendNotification(::LogLevel logLevel, ::std::string_view message);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _tryAttachRuntime(bool);
#else // @header-generator platform
    MCNAPI bool _tryAttachRuntime(bool expectRuntime);
#endif // @header-generator platform

    MCNAPI bool _trySelectTarget();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addRequestHandler(std::unique_ptr<IScriptDebuggerRequestHandler>);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI void registerDebuggerRequestHandler(
#if defined(LL_PLAT_A) // @header-generator platform
        std::string_view,
        std::function<void(const ScriptDebuggerMessages::DebuggerRequestMessage&, ScriptDebugger&)>
#else // @header-generator platform
        ::std::string_view                                                                                command,
        ::std::function<void(::ScriptDebuggerMessages::DebuggerRequestMessage const&, ::ScriptDebugger&)> handler
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void sendDebuggeeResponse(int, bool, std::string_view, std::optional<cereal::DynamicValue>);
#else // @header-generator platform
    MCNAPI void sendDebuggeeResponse(
        int                                     requestSeq,
        bool                                    success,
        ::std::string_view                      responseMessage,
        ::std::optional<::cereal::DynamicValue> args
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void sendLog(::LogLevel, std::string_view);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void sendLog(::LogLevel logLevel, ::std::string_view message);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $connect(std::string const&, ushort);
#else // @header-generator platform
    MCNAPI ::ScriptDebuggerSettings const& $getSettings() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $listen(ushort);
#else // @header-generator platform
    MCNAPI bool $connect(::std::string const& host, ushort port);

    MCNAPI bool $listen(ushort port);
#endif // @header-generator platform

    MCNAPI void $stop();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptDebuggerSettings const& $getSettings() const;

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI void $startProfiler();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<Core::Path> $stopProfiler();
#else // @header-generator platform
    MCNAPI ::std::vector<::Core::Path> $stopProfiler();
#endif // @header-generator platform

    MCNAPI bool $isStatPublisherEnabled() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $publishStats(ulong, std::vector<ScriptStat> const&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $publishStats(uint64 collectedTick, ::std::vector<::ScriptStat> const& stats);
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
