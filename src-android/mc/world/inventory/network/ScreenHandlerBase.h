#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"

// auto generated forward declare list
// clang-format off
class ItemStackRequestAction;
class ItemStackRequestActionHandler;
class SimpleSparseContainer;
struct FullContainerName;
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
    virtual ~ScreenHandlerBase();

    virtual ::ItemStackNetResult handleAction(::ItemStackRequestAction const&);

    virtual ::ItemStackNetResult endRequest();

    virtual void endRequestBatch();

    virtual void postRequest(bool const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStackNetResult $endRequest();

    MCNAPI void $endRequestBatch();

    MCNAPI void $postRequest(bool const);
    // NOLINTEND
};
