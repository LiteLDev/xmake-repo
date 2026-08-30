#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"
#include "mc/platform/CallStack.h"
#include "mc/platform/diagnostics/LogLevel.h"

namespace Bedrock {

class LogErrorDetails {
public:
    // LogErrorDetails inner types declare
    // clang-format off
    struct AddFrameToErrorContext;
    // clang-format on

    // LogErrorDetails inner types define
    struct AddFrameToErrorContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>                          mFrame;
        ::ll::TypedStorage<8, 8, std::string&&>             mContextString;
        ::ll::TypedStorage<1, 2, ::Bedrock::LogLevel const> mLogLevel;
        ::ll::TypedStorage<4, 4, ::LogAreaID const>         mLogArea;
        // NOLINTEND

    public:
        // prevent constructor by default
        AddFrameToErrorContext& operator=(AddFrameToErrorContext const&);
        AddFrameToErrorContext(AddFrameToErrorContext const&);
        AddFrameToErrorContext();
    };
};

} // namespace Bedrock
