#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketGroupDefinition.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/platform/ErrorInfo.h"

// auto generated forward declare list
// clang-format off
class PacketLimitHandler;
// clang-format on

class PacketRateLimitFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::array<std::unique_ptr<PacketLimitHandler>, 4>> mPacketLimitHandlers;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketRateLimitFeature& operator=(PacketRateLimitFeature const&);
    PacketRateLimitFeature(PacketRateLimitFeature const&);
    PacketRateLimitFeature();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PacketRateLimitFeature(std::shared_ptr<PacketGroupDefinition::PacketGroupBuilder>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<PacketGroupDefinition::PacketGroupBuilder>);
    // NOLINTEND
};
