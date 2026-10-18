#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/data_sync/DataStoreSync.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::DDUI { struct DataStoreChange; }
namespace Bedrock::DDUI { struct DataStoreRemoval; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::DDUI { struct DataStoreUpdate; }
// clang-format on

namespace Bedrock::DDUI {

class DataStoreSyncServer : public ::Bedrock::DDUI::DataStoreSync {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::set<std::string>>> mUpdateableFromClient;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::set<::std::string>>> mUpdateableFromClient;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DataStoreSyncServer();
#else // @header-generator platform
    virtual ~DataStoreSyncServer() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void clear(std::string const&, bool);
#else // @header-generator platform
    virtual void clear(::std::string const& dataStoreName, bool addToOutgoingChanges) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void assertAppropriateThread() const;
#else // @header-generator platform
    virtual void assertAppropriateThread() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void applyUpdate(::Bedrock::DDUI::DataStoreUpdate const&);
#else // @header-generator platform
    MCAPI void applyUpdate(::Bedrock::DDUI::DataStoreUpdate const& change);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setPropertyUpdateAllowed(std::string const&, std::string const&, std::string const&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void setPropertyUpdateAllowed(
        ::std::string const& dataStoreName,
        ::std::string const& propertyName,
        ::std::string const& path,
        bool                 value
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $clear(std::string const&, bool);
#else // @header-generator platform
    MCAPI void $clear(::std::string const& dataStoreName, bool addToOutgoingChanges);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $assertAppropriateThread() const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD void $assertAppropriateThread() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::DDUI
