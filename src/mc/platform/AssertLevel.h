#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/CallStack.h"
#include "mc/platform/brstd/function_ref.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/diagnostics/LogLevel.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock { class LogLevel; }
// clang-format on
#endif // @header-generator platform

namespace Bedrock {

class AssertLevel {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 2, ::Bedrock::LogLevel> mLogLevel;
    ::ll::TypedStorage<1, 1, bool>                mCrashInRetail;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 2> mUnka53e7e;
    ::ll::UntypedStorage<1, 1> mUnk3f37a2;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AssertLevel& operator=(AssertLevel const&);
    AssertLevel(AssertLevel const&);
#endif // @header-generator platform
    AssertLevel();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::LogLevel debugFail(::brstd::function_ref<std::string()>, ::Bedrock::CallStack::Frame) const;
#else // @header-generator platform
    MCNAPI ::Bedrock::LogLevel
    debugFail(::brstd::function_ref<::std::string()> message, ::Bedrock::CallStack::Frame location) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::AssertLevel const& DebugAssert();
    // NOLINTEND
};

} // namespace Bedrock
