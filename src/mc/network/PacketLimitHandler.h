#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/IPacketSecurityHandler.h"
#include "mc/network/MinecraftPacketIds.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/PacketGroupDefinition.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/PacketViolationResponse.h"
#include "mc/platform/ErrorInfo.h"

// auto generated forward declare list
// clang-format off
class PacketGroupDefinition;
// clang-format on

class PacketLimitHandler : public ::IPacketSecurityHandler {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<PacketGroupDefinition>> mPacketGroupDefinition;
    ::ll::TypedStorage<8, 24, std::optional<std::error_code>>        mLastResult;
    ::ll::TypedStorage<1, 1, uchar>                                  mViolationLevel;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PacketGroupDefinition>> mPacketGroupDefinition;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::error_code>>        mLastResult;
    ::ll::TypedStorage<1, 1, uchar>                                      mViolationLevel;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PacketLimitHandler();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ::PacketViolationResponse checkForViolation(::MinecraftPacketIds, ::nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>> const&, bool*);
#else // @header-generator platform
    virtual ::PacketViolationResponse checkForViolation(
        ::MinecraftPacketIds                                                     packetId,
        ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>> const& result,
        bool*                                                                    outIsNewOrUpdatedViolation
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PacketLimitHandler();

    virtual uint getTelemetryData();
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual uint getTelemetryData() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PacketViolationResponse $checkForViolation(
#if defined(LL_PLAT_A) // @header-generator platform
        ::MinecraftPacketIds,
        ::nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>> const&,
        bool*
#else // @header-generator platform
        ::MinecraftPacketIds                                                     packetId,
        ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>> const& result,
        bool*                                                                    outIsNewOrUpdatedViolation
#endif // @header-generator platform
    );

    MCNAPI uint $getTelemetryData();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
