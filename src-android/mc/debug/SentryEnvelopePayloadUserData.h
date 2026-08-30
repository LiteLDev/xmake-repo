#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayloadUserData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>> ipAddress;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> id;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> username;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SentryEnvelopePayloadUserData(::SentryEnvelopePayloadUserData const&);

    MCNAPI ::SentryEnvelopePayloadUserData& operator=(::SentryEnvelopePayloadUserData&&);

    MCNAPI ::SentryEnvelopePayloadUserData& operator=(::SentryEnvelopePayloadUserData const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SentryEnvelopePayloadUserData const&);
    // NOLINTEND
};
