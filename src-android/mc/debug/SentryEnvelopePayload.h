#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/debug/SentryEnvelopePayloadBreadcrumb.h"
#include "mc/debug/SentryEnvelopePayloadDebugMetadata.h"
#include "mc/debug/SentryEnvelopePayloadException.h"
#include "mc/debug/SentryEnvelopePayloadSdk.h"
#include "mc/debug/SentryEnvelopePayloadStacktrace.h"
#include "mc/debug/SentryEnvelopePayloadUserData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayload {
public:
    // SentryEnvelopePayload inner types define
    enum class Platform : int {
        JavaScript = 0,
    };

    enum class Level : int {
        Error   = 0,
        Warning = 1,
        Info    = 2,
        Debug   = 3,
        Fatal   = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SentryEnvelopePayload(::SentryEnvelopePayload const&);

    MCNAPI ::SentryEnvelopePayload& operator=(::SentryEnvelopePayload&&);

    MCNAPI ::SentryEnvelopePayload& operator=(::SentryEnvelopePayload const&);

    MCNAPI ~SentryEnvelopePayload();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SentryEnvelopePayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
