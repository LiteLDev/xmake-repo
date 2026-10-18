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
#if defined(LL_PLAT_A) // @header-generator platform
class IBlockSource;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace GameEvents {

class PositionSource {
public:
    // PositionSource inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using ActorWithAttachPos = std::pair<ActorUniqueID, SharedTypes::Legacy::ActorLocation>;
#else // @header-generator platform
    using ActorWithAttachPos = ::std::pair<::ActorUniqueID, ::SharedTypes::Legacy::ActorLocation>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::variant<std::pair<ActorUniqueID, SharedTypes::Legacy::ActorLocation>, Vec3>> mVariant;
    // clang-format on
#else // @header-generator platform
    ::ll::
        TypedStorage<8, 24, ::std::variant<::std::pair<::ActorUniqueID, ::SharedTypes::Legacy::ActorLocation>, ::Vec3>>
            mVariant;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PositionSource();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void serializeTo(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void serializeTo(::CompoundTag& tag) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<Vec3> extractPosition(::CompoundTag const&, char const*, ::BlockSource const&);

    MCNAPI static ::GameEvents::PositionSource forActor(::ActorUniqueID, ::SharedTypes::Legacy::ActorLocation);

    MCNAPI static ::GameEvents::PositionSource forFixedPos(::Vec3 const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::optional<::Vec3>
    extractPosition(::CompoundTag const& data, char const* tagName, ::BlockSource const& region);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace GameEvents
