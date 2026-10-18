#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/HttpInterface.h"

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

class HttpInterfaceInternal : public ::Bedrock::Http::HttpInterface {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~HttpInterfaceInternal() = default;
#else // @header-generator platform
    virtual ~HttpInterfaceInternal() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void send(::gsl::not_null<HC_CALL*>, ::gsl::not_null<XAsyncBlock*>, ::HC_PERFORM_ENV*);
#else // @header-generator platform
    virtual void send(::gsl::not_null<::HC_CALL*>, ::gsl::not_null<::XAsyncBlock*>, ::HC_PERFORM_ENV*) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $send(::gsl::not_null<HC_CALL*>, ::gsl::not_null<XAsyncBlock*>, ::HC_PERFORM_ENV*);
#else // @header-generator platform
    MCNAPI void $send(::gsl::not_null<::HC_CALL*>, ::gsl::not_null<::XAsyncBlock*>, ::HC_PERFORM_ENV*);


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Http
