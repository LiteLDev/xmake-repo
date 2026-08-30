#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/debug/SentryBreadcrumbLevel.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayloadBreadcrumb {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::optional<SentryBreadcrumbLevel>> level;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>          category;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>          message;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>                timestamp;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SentryEnvelopePayloadBreadcrumb(::SentryEnvelopePayloadBreadcrumb const&);

    MCNAPI ::SentryEnvelopePayloadBreadcrumb& operator=(::SentryEnvelopePayloadBreadcrumb const&);

    MCNAPI ~SentryEnvelopePayloadBreadcrumb();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SentryEnvelopePayloadBreadcrumb const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
