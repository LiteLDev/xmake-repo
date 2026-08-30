#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/debug/SentryEnvelopePayloadStacktraceFrame.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayloadStacktrace {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SentryEnvelopePayloadStacktraceFrame>> frames;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SentryEnvelopePayloadStacktrace();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
