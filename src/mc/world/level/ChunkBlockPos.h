#pragma once

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "ll/api/utils/HashUtils.h"
#endif // @header-generator platform
#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/BlockPos.h"
#endif // @header-generator platform

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/legacy/facing/Name.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/ChunkLocalHeight.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockPos;
class Pos;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class ChunkBlockPos {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar>              x;
    ::ll::TypedStorage<1, 1, uchar>              z;
    ::ll::TypedStorage<2, 2, ::ChunkLocalHeight> y;
#else // @header-generator platform
    uchar              x;
    uchar              z;
    ::ChunkLocalHeight y;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChunkBlockPos(::BlockPos const&, short);
#else // @header-generator platform
    constexpr ChunkBlockPos(::BlockPos const& pos, short minDimensionHeight)
    : x((uchar)(pos.x & 0xF)),
      z((uchar)(pos.z & 0xF)),
      y(::ChunkLocalHeight{(short)(pos.y - minDimensionHeight)}) {}
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ChunkBlockPos(uchar, ::ChunkLocalHeight, uchar);
#else // @header-generator platform
    constexpr ChunkBlockPos(uchar x, ::ChunkLocalHeight y, uchar z) : x(x), z(z), y(y) {}
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ChunkBlockPos above() const;
#else // @header-generator platform
    constexpr static ::ChunkBlockPos from2D(uchar x, uchar z) { return ::ChunkBlockPos{x, ::ChunkLocalHeight{0}, z}; }
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Pos toPos() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ChunkBlockPos from2D(uchar, uchar);

    MCNAPI static ::ChunkBlockPos fromLegacyIndex(ushort);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&, short);

    MCNAPI void* $ctor(uchar, ::ChunkLocalHeight, uchar);
    // NOLINTEND
#else // @header-generator platform
    constexpr static ::ChunkBlockPos fromLegacyIndex(ushort idx) {
        return ::ChunkBlockPos{(uint8)((idx >> 12) & 0xF), ChunkLocalHeight{(uint8)idx}, (uint8)((idx >> 8) & 0xF)};
    }
    constexpr bool operator==(::ChunkBlockPos const& other) const {
        return x == other.x && z == other.z && y.mVal == other.y.mVal;
    }
    constexpr ushort toLegacyIndex() const { return (ushort)((x & 0xF) << 12 | (z & 0xF) << 8 | (uint8)y.mVal); }
#endif // @header-generator platform
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


namespace std {
template <>
struct hash<ChunkBlockPos> {
    size_t operator()(ChunkBlockPos const& t) const {
        ll::utils::hash_utils::HashCombiner hc;
        hc.add(std::hash<short>()(t.x));
        hc.add(std::hash<short>()(t.y.mVal));
        hc.add(std::hash<short>()(t.z));
        return hc.hash();
    }
};
} // namespace std
#endif // @header-generator platform
