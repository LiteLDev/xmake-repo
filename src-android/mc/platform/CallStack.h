#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"
#include "mc/platform/diagnostics/LogLevel.h"

// auto generated forward declare list
// clang-format off
namespace brstd { struct source_location; }
// clang-format on

namespace Bedrock {

struct CallStack {
public:
    // CallStack inner types declare
    // clang-format off
    struct Frame;
    struct Context;
    struct FrameWithContext;
    // clang-format on

    // CallStack inner types define
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

    struct Context {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                     mValue;
        ::ll::TypedStorage<1, 3, std::optional<Bedrock::LogLevel>> mLogLevel;
        ::ll::TypedStorage<4, 8, std::optional<LogAreaID>>         mLogArea;
        // NOLINTEND

    public:
        // prevent constructor by default
        Context& operator=(Context const&);
        Context();
    };

    struct FrameWithContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::Bedrock::CallStack::Frame>                mFrame;
        ::ll::TypedStorage<8, 48, std::optional<Bedrock::CallStack::Context>> mContext;
        // NOLINTEND

    public:
        // prevent constructor by default
        FrameWithContext& operator=(FrameWithContext const&);
        FrameWithContext();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::CallStack::FrameWithContext>> mFrames;
    // NOLINTEND

public:
    // prevent constructor by default
    CallStack& operator=(CallStack const&);
    CallStack();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CallStack(::Bedrock::CallStack::FrameWithContext&&);

    MCNAPI explicit CallStack(std::vector<Bedrock::CallStack::FrameWithContext>&&);

    MCNAPI ~CallStack();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::CallStack::FrameWithContext&&);

    MCNAPI void* $ctor(std::vector<Bedrock::CallStack::FrameWithContext>&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
