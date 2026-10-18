#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
struct DimensionType;
// clang-format on

class IPlayerDimensionTransferConnector {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ::Bedrock::PubSub::Connector<void (DimensionType)>& getOnAnyPlayerChangeDimensionPreSuspendRegionConnector() = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::DimensionType)>&
    getOnAnyPlayerChangeDimensionPreSuspendRegionConnector() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void ()>& getOnAnyPlayerChangeDimensionPrepareRegionCompleteConnector() = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void()>& getOnAnyPlayerChangeDimensionPrepareRegionCompleteConnector() = 0;
#endif // @header-generator platform
    // NOLINTEND
};
