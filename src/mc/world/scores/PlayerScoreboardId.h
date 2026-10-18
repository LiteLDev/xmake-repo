#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/legacy/ActorUniqueID.h"
#endif // @header-generator platform

struct PlayerScoreboardId {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long> mActorUniqueId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator!=(::PlayerScoreboardId const&) const;

    MCNAPI bool operator==(::PlayerScoreboardId const&) const;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, int64> mActorUniqueId;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::PlayerScoreboardId const& INVALID();
#else // @header-generator platform
    MCAPI static ::PlayerScoreboardId const& INVALID();
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    bool operator==(PlayerScoreboardId const& rhs) const { return mActorUniqueId == rhs.mActorUniqueId; }
#endif // @header-generator platform
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

namespace std {
template <>
struct hash<PlayerScoreboardId> {
    size_t operator()(PlayerScoreboardId const& d) const noexcept {
        return hash<ActorUniqueID>()(ActorUniqueID{d.mActorUniqueId});
    }
};
} // namespace std
#endif // @header-generator platform
