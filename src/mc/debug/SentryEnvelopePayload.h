#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/debug/SentryEnvelopePayloadBreadcrumb.h"
#include "mc/debug/SentryEnvelopePayloadDebugMetadata.h"
#include "mc/debug/SentryEnvelopePayloadException.h"
#include "mc/debug/SentryEnvelopePayloadSdk.h"
#include "mc/debug/SentryEnvelopePayloadStacktrace.h"
#include "mc/debug/SentryEnvelopePayloadUserData.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayload {
public:
    // SentryEnvelopePayload inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class Platform : int {
        JavaScript = 0,
    };

#else // @header-generator platform
#endif // @header-generator platform
    enum class Level : int {
        Error   = 0,
        Warning = 1,
        Info    = 2,
        Debug   = 3,
        Fatal   = 4,
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class Platform : int {
        JavaScript = 0,
    };

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                                                        timestamp;
    ::ll::TypedStorage<4, 4, ::SentryEnvelopePayload::Platform>                            platform;
    ::ll::TypedStorage<4, 4, ::SentryEnvelopePayload::Level>                               level;
    ::ll::TypedStorage<8, 24, std::string>                                                 release;
    ::ll::TypedStorage<8, 48, std::optional<std::unordered_map<std::string, std::string>>> tags;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<SentryEnvelopePayloadException>>>  exceptions;
    ::ll::TypedStorage<8, 32, std::optional<SentryEnvelopePayloadStacktrace>>              stacktrace;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<SentryEnvelopePayloadBreadcrumb>>> breadcrumbs;
    ::ll::TypedStorage<8, 32, std::optional<SentryEnvelopePayloadDebugMetadata>>           debugMetadata;
    ::ll::TypedStorage<8, 104, std::optional<SentryEnvelopePayloadUserData>>               userData;
    ::ll::TypedStorage<8, 40, std::optional<SentryEnvelopePayloadSdk>>                     sdk;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnk4574db;
    ::ll::UntypedStorage<4, 4>   mUnk944e53;
    ::ll::UntypedStorage<4, 4>   mUnk5c270b;
    ::ll::UntypedStorage<8, 32>  mUnk958f8e;
    ::ll::UntypedStorage<8, 72>  mUnkc577f4;
    ::ll::UntypedStorage<8, 32>  mUnk4cef21;
    ::ll::UntypedStorage<8, 32>  mUnk48f1e6;
    ::ll::UntypedStorage<8, 32>  mUnk89ebe2;
    ::ll::UntypedStorage<8, 32>  mUnk9b93e2;
    ::ll::UntypedStorage<8, 128> mUnk76bb58;
    ::ll::UntypedStorage<8, 48>  mUnk3aee66;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SentryEnvelopePayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI SentryEnvelopePayload(::SentryEnvelopePayload&&);

#endif // @header-generator platform
    MCNAPI SentryEnvelopePayload(::SentryEnvelopePayload const&);

    MCNAPI ::SentryEnvelopePayload& operator=(::SentryEnvelopePayload&&);

    MCNAPI ::SentryEnvelopePayload& operator=(::SentryEnvelopePayload const&);

    MCNAPI ~SentryEnvelopePayload();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI void* $ctor(::SentryEnvelopePayload&&);

#endif // @header-generator platform
    MCNAPI void* $ctor(::SentryEnvelopePayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
