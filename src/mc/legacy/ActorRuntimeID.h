#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorRuntimeID {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> rawID;
    // NOLINTEND
#else // @header-generator platform
    [[nodiscard]] constexpr bool operator==(ActorRuntimeID const& other) const noexcept { return rawID == other.rawID; }

    [[nodiscard]] constexpr std::strong_ordering operator<=>(ActorRuntimeID const& other) const noexcept {
        return rawID <=> other.rawID;
    }

    [[nodiscard]] constexpr ActorRuntimeID() : rawID(0) {}
    [[nodiscard]] constexpr ActorRuntimeID(uint64 x) : rawID(x) {}

    [[nodiscard]] constexpr operator uint64() const { return rawID; }
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
#else // @header-generator platform
    // member variables
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getHash() const;
#else // @header-generator platform
    uint64 rawID;
#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

namespace std {
template <>
struct hash<ActorRuntimeID> {
    size_t operator()(ActorRuntimeID const& id) const noexcept { return std::hash<int64>()(id.rawID); }
};
} // namespace std
#endif // @header-generator platform
