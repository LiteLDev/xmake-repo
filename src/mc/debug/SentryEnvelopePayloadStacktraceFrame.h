#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayloadStacktraceFrame {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<std::string>> function;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> filename;
    ::ll::TypedStorage<4, 8, std::optional<uint>>         lineNumber;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 40> mUnkad8632;
    ::ll::UntypedStorage<8, 40> mUnk736c1e;
    ::ll::UntypedStorage<4, 8>  mUnkfd1560;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SentryEnvelopePayloadStacktraceFrame(SentryEnvelopePayloadStacktraceFrame const&);
    SentryEnvelopePayloadStacktraceFrame();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SentryEnvelopePayloadStacktraceFrame(::SentryEnvelopePayloadStacktraceFrame const&);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI ::SentryEnvelopePayloadStacktraceFrame& operator=(::SentryEnvelopePayloadStacktraceFrame const&);

    MCNAPI ~SentryEnvelopePayloadStacktraceFrame();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SentryEnvelopePayloadStacktraceFrame const&);
#else // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
