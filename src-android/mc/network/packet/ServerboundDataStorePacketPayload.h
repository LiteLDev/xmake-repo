#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/data_sync/DataStoreUpdate.h"

struct ServerboundDataStorePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 112, ::Bedrock::DDUI::DataStoreUpdate> mUpdate;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ServerboundDataStorePacketPayload(::Bedrock::DDUI::DataStoreUpdate);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::DDUI::DataStoreUpdate);
    // NOLINTEND
};
