#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/CallStack.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/diagnostics/LogLevel.h"

namespace Bedrock {

class AssertLevel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::Bedrock::LogLevel> mLogLevel;
    ::ll::TypedStorage<1, 1, bool>                mCrashInRetail;
    // NOLINTEND

public:
    // prevent constructor by default
    AssertLevel();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::LogLevel debugFail(::brstd::function_ref<std::string()>, ::Bedrock::CallStack::Frame) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::AssertLevel const& DebugAssert();
    // NOLINTEND
};

} // namespace Bedrock
