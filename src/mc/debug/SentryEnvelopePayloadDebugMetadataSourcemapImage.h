#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayloadDebugMetadataSourcemapImage {
public:
    // SentryEnvelopePayloadDebugMetadataSourcemapImage inner types define
    enum class Type : int {
        SourceMap = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SentryEnvelopePayloadDebugMetadataSourcemapImage::Type> type;
    ::ll::TypedStorage<8, 24, std::string>                                             sourceFile;
    ::ll::TypedStorage<8, 24, std::string>                                             debugId;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk1f5b2e;
    ::ll::UntypedStorage<8, 32> mUnk4ec647;
    ::ll::UntypedStorage<8, 32> mUnk388e0e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SentryEnvelopePayloadDebugMetadataSourcemapImage&
    operator=(SentryEnvelopePayloadDebugMetadataSourcemapImage const&);
    SentryEnvelopePayloadDebugMetadataSourcemapImage();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~SentryEnvelopePayloadDebugMetadataSourcemapImage();
#else // @header-generator platform
    MCNAPI SentryEnvelopePayloadDebugMetadataSourcemapImage(::SentryEnvelopePayloadDebugMetadataSourcemapImage const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::SentryEnvelopePayloadDebugMetadataSourcemapImage const&);
#endif // @header-generator platform
    // NOLINTEND
};
