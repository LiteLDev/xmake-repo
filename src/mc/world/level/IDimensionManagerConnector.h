#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class DimensionManager;
// clang-format on

class IDimensionManagerConnector {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ::Bedrock::PubSub::Connector<void (Dimension&)>& getOnNewDimensionCreatedConnector() = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::Dimension&)>& getOnNewDimensionCreatedConnector() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void (DimensionManager&)>& getOnReadyForCustomDimensionRegistrationConnector() = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::DimensionManager&)>&
    getOnReadyForCustomDimensionRegistrationConnector() = 0;
#endif // @header-generator platform
    // NOLINTEND
};
