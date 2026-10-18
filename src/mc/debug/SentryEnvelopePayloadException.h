#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/debug/SentryEnvelopePayloadExceptionMechanism.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayloadException {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                             type;
    ::ll::TypedStorage<8, 24, std::string>                                             message;
    ::ll::TypedStorage<8, 104, std::optional<SentryEnvelopePayloadExceptionMechanism>> mechanism;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32>  mUnk327668;
    ::ll::UntypedStorage<8, 32>  mUnk28ac9a;
    ::ll::UntypedStorage<8, 136> mUnk5ff361;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SentryEnvelopePayloadException();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI SentryEnvelopePayloadException(::SentryEnvelopePayloadException&&);

#endif // @header-generator platform
    MCNAPI SentryEnvelopePayloadException(::SentryEnvelopePayloadException const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI ::SentryEnvelopePayloadException& operator=(::SentryEnvelopePayloadException const&);
#endif // @header-generator platform

    MCNAPI ~SentryEnvelopePayloadException();
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
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI void* $ctor(::SentryEnvelopePayloadException&&);

#endif // @header-generator platform
    MCNAPI void* $ctor(::SentryEnvelopePayloadException const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
