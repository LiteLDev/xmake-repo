#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayloadExceptionMechanism {
public:
    // SentryEnvelopePayloadExceptionMechanism inner types define
    enum class Type : int {
        Unknown                   = 0,
        UnhandledException        = 1,
        UnhandledPromiseRejection = 2,
        CapturedException         = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, ::SentryEnvelopePayloadExceptionMechanism::Type> type;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> description;
    ::ll::TypedStorage<1, 1, bool> handled;
    ::ll::TypedStorage<8, 48, std::optional<std::unordered_map<std::string, std::variant<float, bool, std::string>>>> data;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SentryEnvelopePayloadExceptionMechanism& operator=(::SentryEnvelopePayloadExceptionMechanism&&);

    MCNAPI ::SentryEnvelopePayloadExceptionMechanism& operator=(::SentryEnvelopePayloadExceptionMechanism const&);

    MCNAPI ~SentryEnvelopePayloadExceptionMechanism();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
