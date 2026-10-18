#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/shared_types/legacy/LevelEvent.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Vec3;
// clang-format on

class ILevelEventManagerCoordinator {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~ILevelEventManagerCoordinator() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void (SharedTypes::Legacy::LevelEvent, const Vec3&, int)>& getLevelEventDataConnector() = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int)>&
    getLevelEventDataConnector() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void (SharedTypes::Legacy::LevelEvent, const CompoundTag&)>& getLevelEventCompoundTagConnector() = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&)>&
    getLevelEventCompoundTagConnector() = 0;
#endif // @header-generator platform
    // NOLINTEND
};
