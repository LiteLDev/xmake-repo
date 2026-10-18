#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
class MapItemSavedData;
// clang-format on

class IServerMapDataManagerConnector {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(MapItemSavedData&)>& getOnCreateMapSavedDataConnector() = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::MapItemSavedData&)>& getOnCreateMapSavedDataConnector() = 0;
#endif // @header-generator platform
    // NOLINTEND
};
