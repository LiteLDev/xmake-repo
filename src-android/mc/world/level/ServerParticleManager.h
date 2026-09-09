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
    ::ll::TypedStorage<1, 1, bool const> mIsClientSide;
    ::ll::UntypedStorage<8, 24>          mPacketSender;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerParticleManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ServerParticleManager(bool);

    MCNAPI void setPacketSender(::PacketSender&);

    MCNAPI void spawnParticleEffect(std::string const&, ::Vec3 const&, ::DimensionType const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);
    // NOLINTEND
};
