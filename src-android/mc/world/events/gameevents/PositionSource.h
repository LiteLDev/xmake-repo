#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class CompoundTag;
class IBlockSource;
// clang-format on

namespace GameEvents {

class PositionSource {
public:
    // PositionSource inner types define
    using ActorWithAttachPos = std::pair<ActorUniqueID, SharedTypes::Legacy::ActorLocation>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::variant<std::pair<ActorUniqueID, SharedTypes::Legacy::ActorLocation>, Vec3>> mVariant;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PositionSource();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void serializeTo(::CompoundTag&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<Vec3> extractPosition(::CompoundTag const&, char const*, ::BlockSource const&);

    MCNAPI static ::GameEvents::PositionSource forActor(::ActorUniqueID, ::SharedTypes::Legacy::ActorLocation);

    MCNAPI static ::GameEvents::PositionSource forFixedPos(::Vec3 const&);
    // NOLINTEND
};

} // namespace GameEvents
