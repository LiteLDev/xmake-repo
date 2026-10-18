#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
class Vec3;
struct DimensionType;
// clang-format on

class ServerParticleManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool const> mIsClientSide;
    ::ll::UntypedStorage<8, 24>          mPacketSender;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool const>                                  mIsClientSide;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PacketSender>> mPacketSender;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ServerParticleManager();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ServerParticleManager(bool);

    MCNAPI void setPacketSender(::PacketSender&);

    MCNAPI void spawnParticleEffect(std::string const&, ::Vec3 const&, ::DimensionType const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);
#else // @header-generator platform
    MCAPI void
    spawnParticleEffect(::std::string const& effectName, ::Vec3 const& spawnLocation, ::DimensionType dimensionType);
#endif // @header-generator platform
    // NOLINTEND
};
