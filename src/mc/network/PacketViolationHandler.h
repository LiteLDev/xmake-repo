#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/IPacketSecurityHandler.h"
#include "mc/network/MinecraftPacketIds.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/PacketViolationHandlerSettings.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/PacketViolationResponse.h"
#include "mc/platform/ErrorInfo.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct PacketViolation;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class PacketViolationHandler : public ::IPacketSecurityHandler {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 32, ::PacketViolationHandlerSettings> mSettings;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PacketViolation>>  mViolation;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier const>       mNetId;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 32>  mUnkd8ca2f;
    ::ll::UntypedStorage<8, 8>   mUnk5b0d03;
    ::ll::UntypedStorage<8, 176> mUnk14f8c8;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PacketViolationHandler& operator=(PacketViolationHandler const&);
    PacketViolationHandler(PacketViolationHandler const&);
#endif // @header-generator platform
    PacketViolationHandler();

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
    virtual ~PacketViolationHandler();

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
