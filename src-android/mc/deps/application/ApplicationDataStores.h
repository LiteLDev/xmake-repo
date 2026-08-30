#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/IApplicationDataStores.h"
#include "mc/deps/core/data_store/DataStore.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
// clang-format on

namespace Bedrock {

class ApplicationDataStores : public ::Bedrock::IApplicationDataStores {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 120>           mAppPlatform;
    ::ll::UntypedStorage<8, 0>             mDataStores;
    ::ll::TypedStorage<8, 24, std::string> mTag;
    ::ll::TypedStorage<1, 1, bool>         mInitialized;
    // NOLINTEND

public:
    // prevent constructor by default
    ApplicationDataStores();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ApplicationDataStores();

    virtual void init();

    virtual ::Bedrock::NonOwnerPointer<const Bedrock::DataStore> getDataStore(::Bedrock::IApplicationDataStores::DataStores) const;

    virtual ::Bedrock::NonOwnerPointer<Bedrock::DataStore> getDataStore(::Bedrock::IApplicationDataStores::DataStores);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _initDataStore(::Bedrock::IApplicationDataStores::DataStores);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init();

    MCNAPI ::Bedrock::NonOwnerPointer<const Bedrock::DataStore>
        $getDataStore(::Bedrock::IApplicationDataStores::DataStores) const;

    MCNAPI ::Bedrock::NonOwnerPointer<Bedrock::DataStore> $getDataStore(::Bedrock::IApplicationDataStores::DataStores);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
