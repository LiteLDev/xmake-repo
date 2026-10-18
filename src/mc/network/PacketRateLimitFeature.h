#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/common/SubClientId.h"
#include "mc/network/MinecraftPacketIds.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/PacketGroupDefinition.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/PacketViolationResponse.h"
#include "mc/platform/ErrorInfo.h"

// auto generated forward declare list
// clang-format off
class PacketLimitHandler;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class PacketRateLimitFeature {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::array<std::unique_ptr<PacketLimitHandler>, 4>> mPacketLimitHandlers;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkd5bd6e;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PacketRateLimitFeature& operator=(PacketRateLimitFeature const&);
    PacketRateLimitFeature(PacketRateLimitFeature const&);
    PacketRateLimitFeature();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit PacketRateLimitFeature(std::shared_ptr<PacketGroupDefinition::PacketGroupBuilder>);
#else // @header-generator platform
    MCNAPI explicit PacketRateLimitFeature(
        ::std::shared_ptr<::PacketGroupDefinition::PacketGroupBuilder> packetGroupBuilder
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::shared_ptr<PacketGroupDefinition::PacketGroupBuilder>);
#else // @header-generator platform
    MCNAPI void* $ctor(::std::shared_ptr<::PacketGroupDefinition::PacketGroupBuilder> packetGroupBuilder);
#endif // @header-generator platform
    // NOLINTEND
};
