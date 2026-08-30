#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"
#include "mc/platform/diagnostics/LogLevel.h"

namespace Bedrock {

struct CallStack {
public:
    // CallStack inner types declare
    // clang-format off
    struct Context;
    struct Frame;
    struct FrameWithContext;
    // clang-format on

    // CallStack inner types define
    struct Context {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                       mValue;
        ::ll::TypedStorage<1, 3, ::std::optional<::Bedrock::LogLevel>> mLogLevel;
        ::ll::TypedStorage<4, 8, ::std::optional<::LogAreaID>>         mLogArea;
        // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
    public:
        // prevent constructor by default
        Context();

#endif
    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI Context(
            ::std::string                        value,
            ::std::optional<::Bedrock::LogLevel> logLevel,
            ::std::optional<::LogAreaID>         logArea
        );
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI void*
        $ctor(::std::string value, ::std::optional<::Bedrock::LogLevel> logLevel, ::std::optional<::LogAreaID> logArea);
#endif
        // NOLINTEND
    };

    struct Frame {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64>              mFilenameHash;
        ::ll::TypedStorage<8, 16, ::std::string_view> mFilename;
        ::ll::TypedStorage<4, 4, uint>                mLine;
        // NOLINTEND
    };

    struct FrameWithContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::Bedrock::CallStack::Frame>                    mFrame;
        ::ll::TypedStorage<8, 56, ::std::optional<::Bedrock::CallStack::Context>> mContext;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~FrameWithContext();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::CallStack::FrameWithContext>> mFrames;
    // NOLINTEND

public:
    // prevent constructor by default
    CallStack();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CallStack(::Bedrock::CallStack::FrameWithContext&& frame);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::CallStack::FrameWithContext&& frame);
    // NOLINTEND
};

} // namespace Bedrock
