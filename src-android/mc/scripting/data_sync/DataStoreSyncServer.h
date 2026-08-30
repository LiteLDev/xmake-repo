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

class DataStoreSyncServer : public ::Bedrock::DDUI::DataStoreSync {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::set<std::string>>> mUpdateableFromClient;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataStoreSyncServer();

    virtual void clear(std::string const&, bool);

    virtual void assertAppropriateThread() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void applyUpdate(::Bedrock::DDUI::DataStoreUpdate const&);

    MCNAPI void setPropertyUpdateAllowed(std::string const&, std::string const&, std::string const&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $clear(std::string const&, bool);

    MCNAPI void $assertAppropriateThread() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::DDUI
