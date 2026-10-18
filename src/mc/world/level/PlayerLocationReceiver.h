#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/flat_map.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class Vec3;
struct ActorUniqueID;
// clang-format on
#endif // @header-generator platform

class PlayerLocationReceiver {
public:
    // PlayerLocationReceiver inner types declare
    // clang-format off
    struct ActorUniqueIDCompare;
    // clang-format on

    // PlayerLocationReceiver inner types define
    struct ActorUniqueIDCompare {};

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mCurrentPlayerLocationData;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::ActorUniqueID,
            ::std::optional<::Vec3>,
            ::PlayerLocationReceiver::ActorUniqueIDCompare,
            ::std::vector<::ActorUniqueID>,
            ::std::vector<::std::optional<::Vec3>>>>
        mCurrentPlayerLocationData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void hideAllPlayers();

    MCNAPI void hidePlayer(::ActorUniqueID const&);

    MCNAPI void updatePlayer(::ActorUniqueID const&, ::Vec3 const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void hidePlayer(::ActorUniqueID const& id);

    MCAPI void updatePlayer(::ActorUniqueID const& id, ::Vec3 const& pos);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
