#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayloadSdk {
public:
    // SentryEnvelopePayloadSdk inner types define
    enum class Type : int {
        JavaScript = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SentryEnvelopePayloadSdk::Type> type;
    ::ll::TypedStorage<8, 24, std::string>                     version;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND
};
