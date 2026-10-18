#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/profiler/CounterToken.h"
#include "mc/deps/profiler/LogMessageToken.h"
#include "mc/deps/profiler/ScopeToken.h"
#include "mc/deps/profiler/StaticProfLabel.h"
#include "mc/platform/brstd/once_flag.h"
#include "mc/platform/brstd/source_location.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profile { class ScopeStackStorage; }
namespace Bedrock::Profiler::details { struct DynamicProfLabel; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core::Profile { class ProfileGroup; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Core::Profile {

class AnnotationToken {
public:
    // AnnotationToken inner types declare
    // clang-format off
    struct AnnotationData;
#if defined(LL_PLAT_A) // @header-generator platform
    struct ScopeImplToken;
#else // @header-generator platform
#endif // @header-generator platform
    struct CounterImplToken;
    struct LogImplToken;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ScopeImplToken;
#endif // @header-generator platform
    // clang-format on

    // AnnotationToken inner types define
    struct AnnotationData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, char const*>                                                 mLabel;
        ::ll::TypedStorage<8, 24, std::optional<Bedrock::Profiler::details::StaticProfLabel>> mStaticLabel;
        ::ll::TypedStorage<4, 4, uint>                                                        mColor;
        ::ll::TypedStorage<8, 32, ::brstd::source_location>                                   mLocation;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>  mUnk39a3cb;
        ::ll::UntypedStorage<8, 24> mUnkbd16ac;
        ::ll::UntypedStorage<4, 4>  mUnke7dae9;
        ::ll::UntypedStorage<8, 32> mUnkae16e0;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct ScopeImplToken {
#else // @header-generator platform
#endif // @header-generator platform
    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::brstd::once_flag>            mInitializationState;
        ::ll::TypedStorage<8, 104, ::Core::Profile::ScopeToken> mToken;
        // NOLINTEND
#else // @header-generator platform
        // prevent constructor by default
        AnnotationData& operator=(AnnotationData const&);
        AnnotationData(AnnotationData const&);
        AnnotationData();
#endif // @header-generator platform
    };

    struct CounterImplToken {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, ::brstd::once_flag>             mInitializationState;
        ::ll::TypedStorage<8, 56, ::Core::Profile::CounterToken> mToken;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4>  mUnk1de006;
        ::ll::UntypedStorage<8, 56> mUnk6799cb;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        CounterImplToken& operator=(CounterImplToken const&);
        CounterImplToken(CounterImplToken const&);
        CounterImplToken();
#endif // @header-generator platform
    };

    struct LogImplToken {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, ::brstd::once_flag>                mInitializationState;
        ::ll::TypedStorage<8, 32, ::Core::Profile::LogMessageToken> mToken;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4>  mUnkf01960;
        ::ll::UntypedStorage<8, 32> mUnk8fdb35;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        LogImplToken& operator=(LogImplToken const&);
        LogImplToken(LogImplToken const&);
        LogImplToken();
    };

    struct ScopeImplToken {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>   mUnkdff518;
        ::ll::UntypedStorage<8, 112> mUnk104b92;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScopeImplToken& operator=(ScopeImplToken const&);
        ScopeImplToken(ScopeImplToken const&);
        ScopeImplToken();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Core::Profile::ProfileGroup const&>                mGroup;
    ::ll::TypedStorage<1, 1, uchar>                                               mFlags;
    ::ll::TypedStorage<8, 72, ::Core::Profile::AnnotationToken::AnnotationData>   mAnnotationData;
    ::ll::TypedStorage<8, 112, ::Core::Profile::AnnotationToken::ScopeImplToken>  mScopeImplToken;
    ::ll::TypedStorage<8, 64, ::Core::Profile::AnnotationToken::CounterImplToken> mCounterImplToken;
    ::ll::TypedStorage<8, 40, ::Core::Profile::AnnotationToken::LogImplToken>     mLogImplToken;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnk672302;
    ::ll::UntypedStorage<1, 1>   mUnk3775c0;
    ::ll::UntypedStorage<8, 72>  mUnk25c2cb;
    ::ll::UntypedStorage<8, 120> mUnkb46ddc;
    ::ll::UntypedStorage<8, 64>  mUnk984e29;
    ::ll::UntypedStorage<8, 40>  mUnk24de07;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AnnotationToken& operator=(AnnotationToken const&);
    AnnotationToken(AnnotationToken const&);
    AnnotationToken();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AnnotationToken(
        ::Core::Profile::ProfileGroup const&,
        uchar,
        ::Bedrock::Profiler::details::StaticProfLabel,
        uint,
        ::brstd::source_location const&
#else // @header-generator platform
    MCNAPI bool enterScopeInternal(
        ::Bedrock::Profile::ScopeStackStorage&                          scope,
        ::std::optional<::Bedrock::Profiler::details::DynamicProfLabel> dynamicLabel
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    AnnotationToken(::Core::Profile::ProfileGroup const&, uchar, char const*, uint, ::brstd::source_location const&);

    MCNAPI bool emitCounterValue(long);

    MCNAPI bool enterScope(::Bedrock::Profile::ScopeStackStorage&);

    MCNAPI bool enterScopeInternal(
        ::Bedrock::Profile::ScopeStackStorage&,
        std::optional<Bedrock::Profiler::details::DynamicProfLabel>
    );

    MCNAPI void leaveScope(::Bedrock::Profile::ScopeStackStorage&);
#else // @header-generator platform
    MCNAPI ~AnnotationToken();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
#else // @header-generator platform
    // destructor thunk
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::Core::Profile::ProfileGroup const&,
        uchar,
        ::Bedrock::Profiler::details::StaticProfLabel,
        uint,
        ::brstd::source_location const&
    );

    MCNAPI void* $ctor(::Core::Profile::ProfileGroup const&, uchar, char const*, uint, ::brstd::source_location const&);
#else // @header-generator platform
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core::Profile
