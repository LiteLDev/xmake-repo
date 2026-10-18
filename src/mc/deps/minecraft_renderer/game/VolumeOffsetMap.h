#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class VolumeOffsetMap {
public:
    // VolumeOffsetMap inner types declare
    // clang-format off
    struct VolumeEntry;
    // clang-format on

    // VolumeOffsetMap inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class InsertionResult : uchar {
        Inserted = 0,
        Updated  = 1,
        Failed   = 2,
    };
#else // @header-generator platform
    enum class InsertionResult : uchar {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct VolumeEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short>  mX;
        ::ll::TypedStorage<2, 2, short>  mY;
        ::ll::TypedStorage<2, 2, short>  mZ;
        ::ll::TypedStorage<2, 2, short>  mW;
        ::ll::TypedStorage<2, 2, ushort> mHash;
        ::ll::TypedStorage<2, 2, ushort> _reserved;
        ::ll::TypedStorage<4, 4, uint>   mOffset;
        // NOLINTEND
    };

    using VolumeKey = ::glm::vec<4, short, (glm::qualifier)0>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<mce::VolumeOffsetMap::VolumeEntry>> mEntries;
    ::ll::TypedStorage<8, 8, ulong>                                           mCapacity;
    ::ll::TypedStorage<8, 8, ulong>                                           mSize;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeOffsetMap();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit VolumeOffsetMap(ulong);

    MCNAPI ::mce::VolumeOffsetMap::InsertionResult insert(::glm::vec<4, short, (glm::qualifier)0> const&, uint);

    MCNAPI void reset();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ulong);
    // NOLINTEND
#else // @header-generator platform
    struct VolumeEntry {};
#endif // @header-generator platform
};

} // namespace mce
