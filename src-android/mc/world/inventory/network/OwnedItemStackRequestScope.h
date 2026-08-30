#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/world/inventory/network/ItemStackRequestScreen.h"

// auto generated forward declare list
// clang-format off
class ItemStackNetManagerClient;
class ItemStackRequestAction;
class ItemStackRequestData;
// clang-format on

struct OwnedItemStackRequestScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ItemStackNetManagerClient*>           mItemStackNetManagerClient;
    ::ll::TypedStorage<1, 1, bool>                                   mBeganRequest;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ItemStackRequestData>> mResult;
    // NOLINTEND

public:
    // prevent constructor by default
    OwnedItemStackRequestScope();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OwnedItemStackRequestScope(
        ::ItemStackNetManagerClient&,
        std::shared_ptr<ItemStackRequestData>,
        ::ItemStackRequestScreen
    );

    MCNAPI void addRequestAction(std::unique_ptr<ItemStackRequestAction>) const;

    MCNAPI ~OwnedItemStackRequestScope();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemStackNetManagerClient&, std::shared_ptr<ItemStackRequestData>, ::ItemStackRequestScreen);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
