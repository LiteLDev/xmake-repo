#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/data_sync/DataStoreChange.h"
#include "mc/scripting/data_sync/DataStoreRemoval.h"
#include "mc/scripting/data_sync/DataStoreUpdate.h"

struct ClientboundDataStorePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::variant<Bedrock::DDUI::DataStoreUpdate, Bedrock::DDUI::DataStoreChange, Bedrock::DDUI::DataStoreRemoval>>> mUpdates;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientboundDataStorePacketPayload(
        std::vector<std::variant<
            Bedrock::DDUI::DataStoreUpdate,
            Bedrock::DDUI::DataStoreChange,
            Bedrock::DDUI::DataStoreRemoval>>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::vector<std::variant<
            Bedrock::DDUI::DataStoreUpdate,
            Bedrock::DDUI::DataStoreChange,
            Bedrock::DDUI::DataStoreRemoval>>
    );
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<
            ::Bedrock::DDUI::DataStoreUpdate,
            ::Bedrock::DDUI::DataStoreChange,
            ::Bedrock::DDUI::DataStoreRemoval>>>
        mUpdates;
#endif // @header-generator platform
    // NOLINTEND
};
