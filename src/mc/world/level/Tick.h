#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Tick {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    [[nodiscard]] constexpr bool operator==(Tick const& other) const noexcept { return tickID == other.tickID; }

    [[nodiscard]] constexpr std::strong_ordering operator<=>(Tick const& other) const noexcept {
        return tickID <=> other.tickID;
    }

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> tickID;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64> tickID;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Tick const& MAX();
#else // @header-generator platform
    MCAPI static ::Tick const& MAX();
#endif // @header-generator platform
    // NOLINTEND
};
