#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/CounterToken.h"
#include "mc/deps/profiler/LogMessageToken.h"
#include "mc/deps/profiler/ScopeToken.h"
#include "mc/deps/profiler/StaticProfLabel.h"
#include "mc/platform/brstd/once_flag.h"
#include "mc/platform/brstd/source_location.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profile { class ScopeStackStorage; }
namespace Bedrock::Profiler::details { struct DynamicProfLabel; }
namespace Core::Profile { class ProfileGroup; }
// clang-format on

namespace Core::Profile {

class AnnotationToken {
public:
    // AnnotationToken inner types declare
    // clang-format off
    struct AnnotationData;
    struct ScopeImplToken;
    struct CounterImplToken;
    struct LogImplToken;
    // clang-format on

    // AnnotationToken inner types define
    struct AnnotationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, char const*>                                                 mLabel;
        ::ll::TypedStorage<8, 24, std::optional<Bedrock::Profiler::details::StaticProfLabel>> mStaticLabel;
        ::ll::TypedStorage<4, 4, uint>                                                        mColor;
        ::ll::TypedStorage<8, 32, ::brstd::source_location>                                   mLocation;
        // NOLINTEND
    };

    struct ScopeImplToken {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::brstd::once_flag>            mInitializationState;
        ::ll::TypedStorage<8, 104, ::Core::Profile::ScopeToken> mToken;
        // NOLINTEND
    };

    struct CounterImplToken {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::brstd::once_flag>             mInitializationState;
        ::ll::TypedStorage<8, 56, ::Core::Profile::CounterToken> mToken;
        // NOLINTEND
    };

    struct LogImplToken {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::brstd::once_flag>                mInitializationState;
        ::ll::TypedStorage<8, 32, ::Core::Profile::LogMessageToken> mToken;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Core::Profile::ProfileGroup const&>                mGroup;
    ::ll::TypedStorage<1, 1, uchar>                                               mFlags;
    ::ll::TypedStorage<8, 72, ::Core::Profile::AnnotationToken::AnnotationData>   mAnnotationData;
    ::ll::TypedStorage<8, 112, ::Core::Profile::AnnotationToken::ScopeImplToken>  mScopeImplToken;
    ::ll::TypedStorage<8, 64, ::Core::Profile::AnnotationToken::CounterImplToken> mCounterImplToken;
    ::ll::TypedStorage<8, 40, ::Core::Profile::AnnotationToken::LogImplToken>     mLogImplToken;
    // NOLINTEND

public:
    // prevent constructor by default
    AnnotationToken& operator=(AnnotationToken const&);
    AnnotationToken(AnnotationToken const&);
    AnnotationToken();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AnnotationToken(
        ::Core::Profile::ProfileGroup const&,
        uchar,
        ::Bedrock::Profiler::details::StaticProfLabel,
        uint,
        ::brstd::source_location const&
    );

    MCNAPI
    AnnotationToken(::Core::Profile::ProfileGroup const&, uchar, char const*, uint, ::brstd::source_location const&);

    MCNAPI bool emitCounterValue(long);

    MCNAPI bool enterScope(::Bedrock::Profile::ScopeStackStorage&);

    MCNAPI bool enterScopeInternal(
        ::Bedrock::Profile::ScopeStackStorage&,
        std::optional<Bedrock::Profiler::details::DynamicProfLabel>
    );

    MCNAPI void leaveScope(::Bedrock::Profile::ScopeStackStorage&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Core::Profile::ProfileGroup const&,
        uchar,
        ::Bedrock::Profiler::details::StaticProfLabel,
        uint,
        ::brstd::source_location const&
    );

    MCNAPI void* $ctor(::Core::Profile::ProfileGroup const&, uchar, char const*, uint, ::brstd::source_location const&);
    // NOLINTEND
};

} // namespace Core::Profile
