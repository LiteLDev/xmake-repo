#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/IApplicationDataStores.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/data_store/DataStore.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AppPlatform;
#else // @header-generator platform
namespace Bedrock { class DataStore; }
#endif // @header-generator platform
// clang-format on

namespace Bedrock {

class ApplicationDataStores : public ::Bedrock::IApplicationDataStores {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 120>           mAppPlatform;
    ::ll::UntypedStorage<8, 0>             mDataStores;
    ::ll::TypedStorage<8, 24, std::string> mTag;
    ::ll::TypedStorage<1, 1, bool>         mInitialized;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk25abfe;
    ::ll::UntypedStorage<8, 96> mUnkddf272;
    ::ll::UntypedStorage<8, 32> mUnk65c471;
    ::ll::UntypedStorage<1, 1>  mUnke3598c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ApplicationDataStores& operator=(ApplicationDataStores const&);
    ApplicationDataStores(ApplicationDataStores const&);
#endif // @header-generator platform
    ApplicationDataStores();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ApplicationDataStores();
#else // @header-generator platform
    virtual ~ApplicationDataStores() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void init();
#else // @header-generator platform
    virtual void init() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<const Bedrock::DataStore> getDataStore(::Bedrock::IApplicationDataStores::DataStores) const;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::Bedrock::DataStore>
    getDataStore(::Bedrock::IApplicationDataStores::DataStores which) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<Bedrock::DataStore> getDataStore(::Bedrock::IApplicationDataStores::DataStores);
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::Bedrock::DataStore const>
    getDataStore(::Bedrock::IApplicationDataStores::DataStores which) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _initDataStore(::Bedrock::IApplicationDataStores::DataStores);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void _initDataStore(::Bedrock::IApplicationDataStores::DataStores which);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<const Bedrock::DataStore>
        $getDataStore(::Bedrock::IApplicationDataStores::DataStores) const;
#else // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<::Bedrock::DataStore>
    $getDataStore(::Bedrock::IApplicationDataStores::DataStores which);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<Bedrock::DataStore> $getDataStore(::Bedrock::IApplicationDataStores::DataStores);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<::Bedrock::DataStore const>
    $getDataStore(::Bedrock::IApplicationDataStores::DataStores which) const;
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

} // namespace Bedrock
