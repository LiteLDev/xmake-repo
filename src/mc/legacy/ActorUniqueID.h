#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct ActorUniqueID {
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
public:
    [[nodiscard]] constexpr bool operator==(ActorUniqueID const& other) const noexcept { return rawID == other.rawID; }

    [[nodiscard]] constexpr std::strong_ordering operator<=>(ActorUniqueID const& other) const noexcept {
        return rawID <=> other.rawID;
    }

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long> rawID;
#else // @header-generator platform
    int64 rawID;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getHash() const;

    MCNAPI std::string toString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ActorUniqueID fromUUID(::mce::UUID const&);
#else // @header-generator platform
    MCAPI uint64 getHash() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ActorUniqueID const& INVALID_ID();
#else // @header-generator platform
    MCAPI static ::ActorUniqueID const& INVALID_ID();
#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

namespace std {
template <>
struct hash<ActorUniqueID> {
    size_t operator()(ActorUniqueID const& id) const noexcept {
        static std::hash<int64> hasher;
        size_t                  seed  = 0;
        seed                         ^= hasher(id.rawID >> 32) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        seed                         ^= hasher(id.rawID & 0xffffff) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        return seed;
    }
};
} // namespace std
#endif // @header-generator platform
