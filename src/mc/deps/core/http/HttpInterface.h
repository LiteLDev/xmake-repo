#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct HC_CALL;
#else // @header-generator platform
#endif // @header-generator platform
struct HC_PERFORM_ENV;
struct XAsyncBlock;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct HC_CALL;
#endif // @header-generator platform
// clang-format on

namespace Bedrock::Http {

#if defined(LL_PLAT_A) // @header-generator platform
class HttpInterface : public ::Bedrock::ImplBase<Bedrock::Http::HttpInterface> {
#else // @header-generator platform
class HttpInterface : public ::Bedrock::ImplBase<::Bedrock::Http::HttpInterface> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~HttpInterface() = default;
#else // @header-generator platform
    virtual ~HttpInterface() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void send(::gsl::not_null<HC_CALL*>, ::gsl::not_null<XAsyncBlock*>, ::HC_PERFORM_ENV*) = 0;
#else // @header-generator platform
    virtual void send(::gsl::not_null<::HC_CALL*>, ::gsl::not_null<::XAsyncBlock*>, ::HC_PERFORM_ENV*) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Http
