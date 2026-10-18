#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/debug/SentryEnvelopePayloadStacktraceFrame.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct SentryEnvelopePayloadStacktrace {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SentryEnvelopePayloadStacktraceFrame>> frames;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkbb47a3;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SentryEnvelopePayloadStacktrace();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    SentryEnvelopePayloadStacktrace& operator=(SentryEnvelopePayloadStacktrace const&);
    SentryEnvelopePayloadStacktrace(SentryEnvelopePayloadStacktrace const&);
    SentryEnvelopePayloadStacktrace();
#endif // @header-generator platform
};
