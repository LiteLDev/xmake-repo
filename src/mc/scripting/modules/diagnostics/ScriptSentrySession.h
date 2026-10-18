#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/debug/SentryBreadcrumbLevel.h"
#include "mc/scripting/modules/diagnostics/ScriptSentrySessionParameters.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleDiagnostics { class IScriptSentryRequestSender; }
#else // @header-generator platform
struct SentryEnvelopePayload;
struct SentryEnvelopePayloadExceptionMechanism;
namespace Scripting { struct BaseError; }
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, ::SentryBreadcrumbLevel>     level;
        ::ll::TypedStorage<8, 32, std::optional<std::string>> category;
        ::ll::TypedStorage<8, 24, std::string>                message;
        ::ll::TypedStorage<8, 8, ulong>                       time;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4>  mUnkd92796;
        ::ll::UntypedStorage<8, 40> mUnk91b799;
        ::ll::UntypedStorage<8, 32> mUnka6b4fc;
        ::ll::UntypedStorage<8, 8>  mUnk9e17e2;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        Breadcrumb& operator=(Breadcrumb const&);
        Breadcrumb(Breadcrumb const&);
        Breadcrumb();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>    mUnk39d824;
    ::ll::UntypedStorage<8, 224>  mUnke6f10e;
    ::ll::UntypedStorage<8, 32>   mUnkf94cf2;
    ::ll::UntypedStorage<8, 24>   mUnkfc1ea2;
    ::ll::UntypedStorage<8, 64>   mUnka0f162;
    ::ll::UntypedStorage<8, 8>    mUnke07d17;
    ::ll::UntypedStorage<4, 4>    mUnk6feff8;
    ::ll::UntypedStorage<1, 1>    mUnk46ce59;
    ::ll::UntypedStorage<4, 4>    mUnk22726b;
    ::ll::UntypedStorage<8, 8>    mUnkd02622;
    ::ll::UntypedStorage<4, 4>    mUnk63e93d;
    ::ll::UntypedStorage<8, 8>    mUnk101ffe;
    ::ll::UntypedStorage<4, 5000> mUnk8af1c4;
    ::ll::UntypedStorage<4, 8>    mUnke5c723;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSentrySession& operator=(ScriptSentrySession const&);
    ScriptSentrySession(ScriptSentrySession const&);
    ScriptSentrySession();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _checkRateLimits();

    MCNAPI void _fillError(
        ::SentryEnvelopePayload&                         result,
        ::Scripting::BaseError const&                    error,
        ::SentryEnvelopePayloadExceptionMechanism const& exceptionMechanism
    );

    MCNAPI void _sendEvent(::SentryEnvelopePayload eventPayload);

    MCNAPI void onException(::Scripting::BaseError const& error);

    MCNAPI void onUnhandledPromiseRejection(::Scripting::BaseError const& error);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics
