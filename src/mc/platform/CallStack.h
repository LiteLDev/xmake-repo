#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"
#include "mc/platform/diagnostics/LogLevel.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace brstd { struct source_location; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock {

struct CallStack {
public:
    // CallStack inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct Frame;
#else // @header-generator platform
#endif // @header-generator platform
    struct Context;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct Frame;
#endif // @header-generator platform
    struct FrameWithContext;
    // clang-format on

    // CallStack inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Frame {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong>             mFilenameHash;
        ::ll::TypedStorage<8, 16, std::string_view> mFilename;
        ::ll::TypedStorage<4, 4, uint>              mLine;
        // NOLINTEND

    public:
        // prevent constructor by default
        Frame();
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct Context {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                     mValue;
        ::ll::TypedStorage<1, 3, std::optional<Bedrock::LogLevel>> mLogLevel;
        ::ll::TypedStorage<4, 8, std::optional<LogAreaID>>         mLogArea;
#else // @header-generator platform
        ::std::string                        mValue;
        ::std::optional<::Bedrock::LogLevel> mLogLevel;
        ::std::optional<::LogAreaID>         mLogArea;
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
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        Context& operator=(Context const&);
        Context();
#else // @header-generator platform
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
        uint64             mFilenameHash;
        ::std::string_view mFilename;
        uint               mLine;
        // NOLINTEND
#endif // @header-generator platform
    };

    struct FrameWithContext {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 32, ::Bedrock::CallStack::Frame>                mFrame;
        ::ll::TypedStorage<8, 48, std::optional<Bedrock::CallStack::Context>> mContext;
#else // @header-generator platform
        ::Bedrock::CallStack::Frame                    mFrame;
        ::std::optional<::Bedrock::CallStack::Context> mContext;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        FrameWithContext& operator=(FrameWithContext const&);
        FrameWithContext();
#else // @header-generator platform
        // member functions
        // NOLINTBEGIN
        MCAPI ~FrameWithContext();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::CallStack::FrameWithContext>> mFrames;
#else // @header-generator platform
    ::std::vector<::Bedrock::CallStack::FrameWithContext> mFrames;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    CallStack& operator=(CallStack const&);
    CallStack();
#else // @header-generator platform
    CallStack() = default;
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CallStack(::Bedrock::CallStack::FrameWithContext&&);

    MCNAPI explicit CallStack(std::vector<Bedrock::CallStack::FrameWithContext>&&);

    MCNAPI ~CallStack();
#else // @header-generator platform
    MCAPI explicit CallStack(::Bedrock::CallStack::FrameWithContext&& frame);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::CallStack::FrameWithContext&&);

    MCNAPI void* $ctor(std::vector<Bedrock::CallStack::FrameWithContext>&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Bedrock::CallStack::FrameWithContext&& frame);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
