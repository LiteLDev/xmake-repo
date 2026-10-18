#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/debug/SentryEnvelopeHeader.h"
#include "mc/debug/SentryEnvelopeItem.h"
#include "mc/debug/SentryEnvelopePayload.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelope {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::SentryEnvelopeHeader>   header;
    ::ll::TypedStorage<4, 4, ::SentryEnvelopeItem>      item;
    ::ll::TypedStorage<8, 360, ::SentryEnvelopePayload> payload;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64>  mUnk557017;
    ::ll::UntypedStorage<4, 4>   mUnk73b89d;
    ::ll::UntypedStorage<8, 424> mUnkf0c92f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelope& operator=(SentryEnvelope const&);
    SentryEnvelope(SentryEnvelope const&);
    SentryEnvelope();

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SentryEnvelope();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindAllTypes(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI static void bindAllTypes(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND
};
