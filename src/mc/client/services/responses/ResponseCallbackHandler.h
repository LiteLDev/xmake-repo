#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/requests/catalog/SearchRequestURLType.h"

// auto generated forward declare list
// clang-format off
class CatalogBackend;
namespace Json { class Value; }
// clang-format on

struct ResponseCallbackHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResponseCallbackHandler() = default;

    virtual bool parseResponse(::Json::Value const&, int, ::CatalogBackend const&, ::SearchRequestURLType);

    virtual bool parseResponse(::Json::Value const&);

    virtual void handleResponseCallback() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $parseResponse(::Json::Value const&, int, ::CatalogBackend const&, ::SearchRequestURLType);

    MCNAPI bool $parseResponse(::Json::Value const&);
    // NOLINTEND
};
#else // @header-generator platform
struct ResponseCallbackHandler {};
#endif // @header-generator platform
