#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/debug/SentryBreadcrumbLevel.h"
#include "mc/scripting/modules/diagnostics/ScriptSentrySessionParameters.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleDiagnostics { class IScriptSentryRequestSender; }
// clang-format on

namespace ScriptModuleDiagnostics {

class ScriptSentrySession {
public:
    // ScriptSentrySession inner types declare
    // clang-format off
    struct Breadcrumb;
    // clang-format on

    // ScriptSentrySession inner types define
    struct Breadcrumb {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::SentryBreadcrumbLevel>     level;
        ::ll::TypedStorage<8, 32, std::optional<std::string>> category;
        ::ll::TypedStorage<8, 24, std::string>                message;
        ::ll::TypedStorage<8, 8, ulong>                       time;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleDiagnostics::IScriptSentryRequestSender>> mRequestSender;
    ::ll::TypedStorage<8, 176, ::ScriptModuleDiagnostics::ScriptSentrySessionParameters const> mParameters;
    ::ll::TypedStorage<8, 24, std::string const> mSessionId;
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleDiagnostics::ScriptSentrySession::Breadcrumb>> mPendingBreadcrumbs;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mCustomTags;
    ::ll::TypedStorage<8, 8, ulong const> mMaxBreadcrumbs;
    ::ll::TypedStorage<4, 4, float const> mSampleRate;
    ::ll::TypedStorage<1, 1, bool const> mDebugLoggingEnabled;
    ::ll::TypedStorage<4, 4, uint const> mMaxEventsPerWindow;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>> const> mRateLimitWindow;
    ::ll::TypedStorage<4, 4, uint> mEventCount;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mWindowStartTime;
    ::ll::TypedStorage<8, 5000, std::mersenne_twister_engine<ulong, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253>> mRandomNumberGenerator;
    ::ll::TypedStorage<4, 8, std::uniform_real_distribution<float>> mSampleDistribution;
    // clang-format on
    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics
