#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/catalog/SearchRequestURLType.h"
#include "mc/client/services/responses/CatalogSearchResponseCallbackHandler.h"

// auto generated forward declare list
// clang-format off
class CatalogBackend;
class CustomDocumentModifier;
namespace Json { class Value; }
// clang-format on

class PersonaEmoteValidationResponse : public ::CatalogSearchResponseCallbackHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const> mPlatformId;
    ::ll::UntypedStorage<8, 48>                  mCallback;
    ::ll::UntypedStorage<8, 32>                  mPersonaProductIds;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaEmoteValidationResponse();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersonaEmoteValidationResponse();

    virtual bool parseResponse(::Json::Value const&, int, ::CatalogBackend const&, ::SearchRequestURLType);

    virtual void handleResponseCallback();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaEmoteValidationResponse(
        std::string const&,
        ::CustomDocumentModifier*,
        std::function<void(const std::vector<std::string>&)>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(std::string const&, ::CustomDocumentModifier*, std::function<void(const std::vector<std::string>&)>);
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
