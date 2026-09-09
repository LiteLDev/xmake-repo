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
    ::ll::TypedStorage<8, 32, std::optional<std::string>> function;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> filename;
    ::ll::TypedStorage<4, 8, std::optional<uint>>         lineNumber;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SentryEnvelopePayloadStacktraceFrame(::SentryEnvelopePayloadStacktraceFrame const&);

    MCNAPI ::SentryEnvelopePayloadStacktraceFrame& operator=(::SentryEnvelopePayloadStacktraceFrame const&);

    MCNAPI ~SentryEnvelopePayloadStacktraceFrame();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SentryEnvelopePayloadStacktraceFrame const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
