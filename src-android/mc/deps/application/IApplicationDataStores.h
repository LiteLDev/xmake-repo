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
    // clang-format off
    virtual ~IApplicationDataStores() = default;

    virtual void init() = 0;

    virtual ::Bedrock::NonOwnerPointer<const Bedrock::DataStore> getDataStore(::Bedrock::IApplicationDataStores::DataStores) const = 0;

    virtual ::Bedrock::NonOwnerPointer<Bedrock::DataStore> getDataStore(::Bedrock::IApplicationDataStores::DataStores) = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace Bedrock
