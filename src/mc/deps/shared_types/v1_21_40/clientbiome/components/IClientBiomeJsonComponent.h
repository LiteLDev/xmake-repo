#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_40/clientbiome/components/ClientBiomeComponentVersion.h"

namespace SharedTypes::v1_21_40 {

struct IClientBiomeJsonComponent {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IClientBiomeJsonComponent();
#else // @header-generator platform
    virtual ~IClientBiomeJsonComponent() = default;
#endif // @header-generator platform

    virtual ::ClientBiomeComponentVersion getType() const = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_40
