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
    // clang-format off
    virtual ~ILevelEventManagerCoordinator() = default;

    virtual ::Bedrock::PubSub::Connector<void (SharedTypes::Legacy::LevelEvent, const Vec3&, int)>& getLevelEventDataConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void (SharedTypes::Legacy::LevelEvent, const CompoundTag&)>& getLevelEventCompoundTagConnector() = 0;
    // clang-format on
    // NOLINTEND
};
