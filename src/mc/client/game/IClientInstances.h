#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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

    virtual ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> getPrimaryClientInstance() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IClientInstance const> getPrimaryClientInstance() const = 0;

    virtual ::ItemRegistryRef getClientItemRegistry() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IClientInstances {};
#endif // @header-generator platform
#endif // @header-generator platform
