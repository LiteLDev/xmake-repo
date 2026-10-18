#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/packet/PacketViolationSeverity.h"
#include "mc/network/packet/PacketViolationType.h"

struct PacketViolationWarningPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PacketViolationType>     mViolationType;
    ::ll::TypedStorage<4, 4, ::PacketViolationSeverity> mViolationSeverity;
    ::ll::TypedStorage<4, 4, ::MinecraftPacketIds>      mViolatingPacketId;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>              mViolationContext;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>            mViolationContext;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PacketViolationWarningPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PacketViolationWarningPacketPayload(
        std::error_code const&,
        ::PacketViolationResponse,
        ::MinecraftPacketIds,
        std::string const&
#else // @header-generator platform
    MCAPI PacketViolationWarningPacketPayload(
        ::std::error_code const&  error_code,
        ::PacketViolationResponse violationResponse,
        ::MinecraftPacketIds      violatingPacketId,
        ::std::string const&      violationContext
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

#ifdef LL_PLAT_C
    MCAPI PacketViolationWarningPacketPayload(
        ::PacketViolationSeverity violationSeverity,
        ::PacketViolationType     violationType,
        ::MinecraftPacketIds      violatingPacketId,
        ::std::string const&      violationContext
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::error_code const&, ::PacketViolationResponse, ::MinecraftPacketIds, std::string const&);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::error_code const&  error_code,
        ::PacketViolationResponse violationResponse,
        ::MinecraftPacketIds      violatingPacketId,
        ::std::string const&      violationContext
    );

#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::PacketViolationSeverity violationSeverity,
        ::PacketViolationType     violationType,
        ::MinecraftPacketIds      violatingPacketId,
        ::std::string const&      violationContext
    );
#endif
#endif // @header-generator platform
    // NOLINTEND
};
