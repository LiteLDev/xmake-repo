#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/debug/SentryEnvelopePayloadDebugMetadataSourcemapImage.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct SentryEnvelopePayloadDebugMetadata {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SentryEnvelopePayloadDebugMetadataSourcemapImage>> images;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk708b74;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SentryEnvelopePayloadDebugMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    SentryEnvelopePayloadDebugMetadata& operator=(SentryEnvelopePayloadDebugMetadata const&);
    SentryEnvelopePayloadDebugMetadata(SentryEnvelopePayloadDebugMetadata const&);
    SentryEnvelopePayloadDebugMetadata();
#endif // @header-generator platform
};
