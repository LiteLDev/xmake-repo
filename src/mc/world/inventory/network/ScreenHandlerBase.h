#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"

// auto generated forward declare list
// clang-format off
class ItemStackRequestAction;
class ItemStackRequestActionHandler;
#if defined(LL_PLAT_A) // @header-generator platform
class SimpleSparseContainer;
struct FullContainerName;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ScreenHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ItemStackRequestActionHandler&> mRequestHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenHandlerBase& operator=(ScreenHandlerBase const&);
    ScreenHandlerBase(ScreenHandlerBase const&);
    ScreenHandlerBase();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScreenHandlerBase();
#else // @header-generator platform
    virtual ~ScreenHandlerBase() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStackNetResult handleAction(::ItemStackRequestAction const&);
#else // @header-generator platform
    virtual ::ItemStackNetResult handleAction(::ItemStackRequestAction const& requestAction);
#endif // @header-generator platform

    virtual ::ItemStackNetResult endRequest();

    virtual void endRequestBatch();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postRequest(bool const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void postRequest(bool const wasSuccess);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetResult $endRequest();
#else // @header-generator platform
    MCFOLD ::ItemStackNetResult $endRequest();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $endRequestBatch();
#else // @header-generator platform
    MCFOLD void $endRequestBatch();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postRequest(bool const);
#else // @header-generator platform
    MCFOLD void $postRequest(bool const wasSuccess);


#endif // @header-generator platform
    // NOLINTEND
};
