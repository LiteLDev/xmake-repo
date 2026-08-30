#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

// auto generated forward declare list
// clang-format off
class ItemStackNetManagerClient;
class ItemStackRequestAction;
// clang-format on

struct ItemStackRequestScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ItemStackNetManagerClient*> mItemStackNetManagerClient;
    ::ll::TypedStorage<1, 1, bool>                         mBeganRequest;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackRequestScope();

    MCNAPI explicit ItemStackRequestScope(::ItemStackNetManagerClient&);

    MCNAPI void addRequestAction(std::unique_ptr<ItemStackRequestAction>) const;

    MCNAPI int addRequestToFilterString(std::string const&, ::TextProcessingEventOrigin const) const;

    MCNAPI ::TypedClientNetId<ItemStackRequestIdTag, int, 0> getCurrentRequestId() const;

    MCNAPI ~ItemStackRequestScope();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ItemStackNetManagerClient&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
