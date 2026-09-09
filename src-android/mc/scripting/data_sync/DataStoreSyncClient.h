#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/data_sync/DataStoreSync.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DDUI { struct DataStoreChange; }
namespace Bedrock::DDUI { struct DataStoreRemoval; }
namespace Bedrock::DDUI { struct DataStoreUpdate; }
// clang-format on

namespace Bedrock::DDUI {

class DataStoreSyncClient : public ::Bedrock::DDUI::DataStoreSync {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataStoreSyncClient();

    virtual void assertAppropriateThread() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void applyChanges(
        std::vector<std::variant<
            Bedrock::DDUI::DataStoreUpdate,
            Bedrock::DDUI::DataStoreChange,
            Bedrock::DDUI::DataStoreRemoval>> const&
    );

    MCNAPI std::vector<Bedrock::DDUI::DataStoreUpdate> getAndClearUpdates();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $assertAppropriateThread() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::DDUI
