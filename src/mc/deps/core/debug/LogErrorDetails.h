#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"
#include "mc/platform/CallStack.h"
#include "mc/platform/diagnostics/LogLevel.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 8>                          mFrame;
        ::ll::TypedStorage<8, 8, std::string&&>             mContextString;
        ::ll::TypedStorage<1, 2, ::Bedrock::LogLevel const> mLogLevel;
        ::ll::TypedStorage<4, 4, ::LogAreaID const>         mLogArea;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnk6fe97c;
        ::ll::UntypedStorage<8, 8> mUnk334eb5;
        ::ll::UntypedStorage<1, 2> mUnk9c83bf;
        ::ll::UntypedStorage<4, 4> mUnk4780b3;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        AddFrameToErrorContext& operator=(AddFrameToErrorContext const&);
        AddFrameToErrorContext(AddFrameToErrorContext const&);
        AddFrameToErrorContext();
    };
};

} // namespace Bedrock
