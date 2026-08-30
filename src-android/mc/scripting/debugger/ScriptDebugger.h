#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/UUID.h"
#include "mc/scripting/debugger/IScriptDebugger.h"
#include "mc/scripting/debugger/ScriptDebuggerSettings.h"
#include "mc/scripting/diagnostics/IScriptStatPublisher.h"

// auto generated forward declare list
// clang-format off
class IScriptDebuggerRequestHandler;
class IScriptDebuggerWatchdog;
class IScriptTelemetryLogger;
class LocalProfilerControlBroker;
class MinecraftCommands;
class ScriptBreakpointValidator;
class ScriptDebuggerProtocol;
class ScriptDebuggerTransport;
class ScriptPluginManager;
class ScriptStat;
class ServerLevel;
namespace Core { class Path; }
namespace ScriptDebuggerMessages { struct CommandMessage; }
namespace ScriptDebuggerMessages { struct DebuggerRequestMessage; }
namespace ScriptDebuggerMessages { struct StartProfilerMessage; }
namespace ScriptDebuggerMessages { struct StopProfilerMessage; }
namespace Scripting { class IDebuggerController; }
namespace Scripting { class ScriptEngine; }
namespace cereal { class DynamicValue; }
namespace cereal { struct ReflectionCtx; }
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
        ::ll::TypedStorage<1, 1, bool> mAutoAttach;
        ::ll::TypedStorage<4, 4, int>  mAttachRetries;
        // NOLINTEND
    };

    using DebuggerRequestHandler =
        std::function<void(const ScriptDebuggerMessages::DebuggerRequestMessage&, ScriptDebugger&)>;

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebugger& operator=(ScriptDebugger const&);
    ScriptDebugger(ScriptDebugger const&);
    ScriptDebugger();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDebugger();

    virtual bool connect(std::string const&, ushort);

    virtual bool listen(ushort);

    virtual void stop();

    virtual ::ScriptDebuggerSettings const& getSettings() const;

    virtual void startProfiler();

    virtual std::vector<Core::Path> stopProfiler();

    virtual bool isStatPublisherEnabled() const;

    virtual void publishStats(ulong, std::vector<ScriptStat> const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _handleDebuggerRequestMessage(::ScriptDebuggerMessages::DebuggerRequestMessage const&);

    MCNAPI std::string _sanitizeHostName(std::string const&) const;

    MCNAPI void _sendNotification(::LogLevel, std::string_view);

    MCNAPI bool _tryAttachRuntime(bool);

    MCNAPI bool _trySelectTarget();

    MCNAPI void addRequestHandler(std::unique_ptr<IScriptDebuggerRequestHandler>);

    MCNAPI void registerDebuggerRequestHandler(
        std::string_view,
        std::function<void(const ScriptDebuggerMessages::DebuggerRequestMessage&, ScriptDebugger&)>
    );

    MCNAPI void sendDebuggeeResponse(int, bool, std::string_view, std::optional<cereal::DynamicValue>);

    MCNAPI void sendLog(::LogLevel, std::string_view);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $connect(std::string const&, ushort);

    MCNAPI bool $listen(ushort);

    MCNAPI void $stop();

    MCNAPI ::ScriptDebuggerSettings const& $getSettings() const;

    MCNAPI void $startProfiler();

    MCNAPI std::vector<Core::Path> $stopProfiler();

    MCNAPI bool $isStatPublisherEnabled() const;

    MCNAPI void $publishStats(ulong, std::vector<ScriptStat> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
