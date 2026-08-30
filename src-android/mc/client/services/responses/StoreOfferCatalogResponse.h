#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/StoreOfferSearchResults.h"
#include "mc/client/services/requests/catalog/SearchRequestURLType.h"
#include "mc/client/services/responses/CatalogSearchResponseCallbackHandler.h"

// auto generated forward declare list
// clang-format off
class CatalogBackend;
class CustomDocumentModifier;
namespace Json { class Value; }
// clang-format on

class StoreOfferCatalogResponse : public ::CatalogSearchResponseCallbackHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mCallback;
    ::ll::UntypedStorage<8, 48> mResults;
    // NOLINTEND

public:
    // prevent constructor by default
    StoreOfferCatalogResponse();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StoreOfferCatalogResponse();

    virtual bool parseResponse(::Json::Value const&, int, ::CatalogBackend const&, ::SearchRequestURLType);

    virtual void handleResponseCallback();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StoreOfferCatalogResponse(std::function<void(const StoreOfferSearchResults&)>, ::CustomDocumentModifier*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::function<void(const StoreOfferSearchResults&)>, ::CustomDocumentModifier*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $parseResponse(::Json::Value const&, int, ::CatalogBackend const&, ::SearchRequestURLType);

    MCNAPI void $handleResponseCallback();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
