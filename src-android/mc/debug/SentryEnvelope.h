#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/debug/SentryEnvelopeHeader.h"
#include "mc/debug/SentryEnvelopeItem.h"
#include "mc/debug/SentryEnvelopePayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::SentryEnvelopeHeader>   header;
    ::ll::TypedStorage<4, 4, ::SentryEnvelopeItem>      item;
    ::ll::TypedStorage<8, 360, ::SentryEnvelopePayload> payload;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelope& operator=(SentryEnvelope const&);
    SentryEnvelope(SentryEnvelope const&);
    SentryEnvelope();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SentryEnvelope();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindAllTypes(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
