#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class DataStore; }
// clang-format on

namespace Bedrock {

class IApplicationDataStores : public ::Bedrock::EnableNonOwnerReferences {
public:
    // IApplicationDataStores inner types define
    enum class DataStores : int {
        GlobalSettings    = 0,
        UserSettings      = 1,
        BootstrapSettings = 2,
        Count             = 3,
    };

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IApplicationDataStores() = default;
#else // @header-generator platform
    virtual ~IApplicationDataStores() /*override*/ = default;
#endif // @header-generator platform

    virtual void init() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<const Bedrock::DataStore> getDataStore(::Bedrock::IApplicationDataStores::DataStores) const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::Bedrock::DataStore>
    getDataStore(::Bedrock::IApplicationDataStores::DataStores which) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<Bedrock::DataStore> getDataStore(::Bedrock::IApplicationDataStores::DataStores) = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::Bedrock::DataStore const>
    getDataStore(::Bedrock::IApplicationDataStores::DataStores which) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
