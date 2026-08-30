#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/debug/SentryEnvelopePayloadDebugMetadataSourcemapImage.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayloadDebugMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SentryEnvelopePayloadDebugMetadataSourcemapImage>> images;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SentryEnvelopePayloadDebugMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
