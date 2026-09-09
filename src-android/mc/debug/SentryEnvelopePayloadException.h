#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/debug/SentryEnvelopePayloadExceptionMechanism.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayloadException {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                             type;
    ::ll::TypedStorage<8, 24, std::string>                                             message;
    ::ll::TypedStorage<8, 104, std::optional<SentryEnvelopePayloadExceptionMechanism>> mechanism;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SentryEnvelopePayloadException(::SentryEnvelopePayloadException const&);

    MCNAPI ~SentryEnvelopePayloadException();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SentryEnvelopePayloadException const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
