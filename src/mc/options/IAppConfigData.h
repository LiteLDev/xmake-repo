#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

class IAppConfigData {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAppConfigData() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::typeid_t<IAppConfigData> getType() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::typeid_t<::IAppConfigData> getType() const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
