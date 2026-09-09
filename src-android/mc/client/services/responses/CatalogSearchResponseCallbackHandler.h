#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/FetchResult.h"
#include "mc/client/services/responses/ResponseCallbackHandler.h"

// auto generated forward declare list
// clang-format off
class CustomDocumentModifier;
// clang-format on

struct CatalogSearchResponseCallbackHandler : public ::ResponseCallbackHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              mAcceptLanguage;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mExpectedContentTypes;
    ::ll::TypedStorage<8, 8, ::CustomDocumentModifier*> mCustomModifier;
    ::ll::TypedStorage<1, 1, ::FetchResult>             mFetchResult;
    // NOLINTEND

public:
    // prevent constructor by default
    CatalogSearchResponseCallbackHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CatalogSearchResponseCallbackHandler();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
