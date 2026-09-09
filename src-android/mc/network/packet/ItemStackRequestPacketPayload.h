#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ItemStackRequestPacketData__RequestData.h"

// auto generated forward declare list
// clang-format off
class ItemStackRequestBatch;
// clang-format on

struct ItemStackRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ItemStackRequestPacketData::RequestData>> mRequests;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ItemStackRequestPacketPayload(::ItemStackRequestBatch const&);

    MCNAPI std::unique_ptr<ItemStackRequestBatch> toRequestBatch() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemStackRequestBatch const&);
    // NOLINTEND
};
