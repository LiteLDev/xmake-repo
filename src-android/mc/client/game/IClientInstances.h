#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ItemRegistryRef;
// clang-format on

class IClientInstances {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IClientInstances() = default;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const IClientInstance>> getPrimaryClientInstance() const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> getPrimaryClientInstance() = 0;

    virtual ::ItemRegistryRef getClientItemRegistry() const = 0;
    // NOLINTEND
};
