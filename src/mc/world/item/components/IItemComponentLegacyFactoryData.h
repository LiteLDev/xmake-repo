#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IItemComponentLegacyFactoryData {
public:
    // IItemComponentLegacyFactoryData inner types declare
    // clang-format off
    struct Components;
    // clang-format on

    // IItemComponentLegacyFactoryData inner types define
    struct Components {
    public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        // Components inner types define
        using CerealDefaultValueOptOut = void;

    public:
#endif // @header-generator platform
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::map<std::string, std::shared_ptr<IItemComponentLegacyFactoryData>>> mMap;
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::shared_ptr<::IItemComponentLegacyFactoryData>>> mMap;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IItemComponentLegacyFactoryData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ~IItemComponentLegacyFactoryData() = default;
#endif // @header-generator platform
    // NOLINTEND
};
