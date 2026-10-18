#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/responses/HydrateResponseCallbackHandler.h"

// auto generated forward declare list
// clang-format off
class CustomDocumentModifier;
// clang-format on

struct CatalogHydrateResponseCallbackHandler : public ::HydrateResponseCallbackHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CustomDocumentModifier*> mCustomModifier;
    // NOLINTEND

public:
    // prevent constructor by default
    CatalogHydrateResponseCallbackHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CatalogHydrateResponseCallbackHandler() = default;
    // NOLINTEND
};
#else // @header-generator platform
struct CatalogHydrateResponseCallbackHandler {};
#endif // @header-generator platform
