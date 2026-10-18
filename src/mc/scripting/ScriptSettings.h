#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/runtime/watchdog/scripting/WatchdogSettings.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/UUID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/ScriptPackConfigurationManager.h"
#include "mc/scripting/debugger/ScriptDebuggerSettings.h"
#include "mc/util/BaseGameVersion.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class IScriptDedicatedServerUtils;
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace mce { class UUID; }
class IScriptDedicatedServerUtils;
#endif // @header-generator platform
// clang-format on

struct ScriptSettings {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                           mCerealContext;
    ::ll::TypedStorage<8, 352, ::ScriptPackConfigurationManager>          mPackConfigurationManager;
    ::ll::TypedStorage<1, 1, bool>                                        mEnabled;
    ::ll::UntypedStorage<1, 1>                                            mEnableEditorModules;
    ::ll::UntypedStorage<8, 32>                                           mBaseGameVersion;
    ::ll::TypedStorage<8, 88, ::ScriptDebuggerSettings>                   mDebuggerSettings;
    ::ll::TypedStorage<8, 24, std::vector<mce::UUID>>                     mExcludedScriptModules;
    ::ll::TypedStorage<4, 36, std::optional<Scripting::WatchdogSettings>> mWatchdogSettings;
    ::ll::TypedStorage<1, 1, bool>                                        mDiagnosticsAutoStart;
    ::ll::TypedStorage<4, 8, std::optional<uint>>                         mMaxDiagnosticsCaptureFiles;
    ::ll::TypedStorage<4, 8, std::optional<uint>>                         mMaxDiagnosticsCaptureFileSize;
    ::ll::TypedStorage<4, 8, std::optional<uint>>                         mMaxEventsPerWindow;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::duration<long long, std::ratio<1, 1>>>> mRateLimitWindow;
    ::ll::TypedStorage<8, 8, ::IScriptDedicatedServerUtils*>                                     mDedicatedServerUtils;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::cereal::ReflectionCtx const>> mCerealContext;
    ::ll::TypedStorage<8, 480, ::ScriptPackConfigurationManager>                            mPackConfigurationManager;
    ::ll::TypedStorage<1, 1, bool>                                                          mEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                          mEnableEditorModules;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>                                            mBaseGameVersion;
    ::ll::TypedStorage<8, 104, ::ScriptDebuggerSettings>                                    mDebuggerSettings;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::UUID>>                                   mExcludedScriptModules;
    ::ll::TypedStorage<4, 36, ::std::optional<::Scripting::WatchdogSettings>>               mWatchdogSettings;
    ::ll::TypedStorage<1, 1, bool>                                                          mDiagnosticsAutoStart;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>                                         mMaxDiagnosticsCaptureFiles;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>                    mMaxDiagnosticsCaptureFileSize;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>                    mMaxEventsPerWindow;
    ::ll::TypedStorage<8, 16, ::std::optional<::std::chrono::seconds>> mRateLimitWindow;
    ::ll::TypedStorage<8, 8, ::IScriptDedicatedServerUtils*>           mDedicatedServerUtils;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
