#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_130::Brain {

struct MemoryType {
public:
    // MemoryType inner types declare
    // clang-format off
    struct Names;
    // clang-format on

    // MemoryType inner types define
    enum class Value : uchar {
        Invalid     = 0,
        Bool        = 1,
        Int         = 2,
        Float       = 3,
        String      = 4,
        EntityRef   = 5,
        BlockPos    = 6,
        BlockPosVec = 7,
        PoiMemory   = 8,
#if defined(LL_PLAT_A) // @header-generator platform
        _count      = 9,
#else // @header-generator platform
        Count       = 9,
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct Names {};
#else // @header-generator platform
    struct Names {
    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::std::string_view const& BLOCK_POS();

        MCAPI static ::std::string_view const& BLOCK_POS_VEC();

        MCAPI static ::std::string_view const& BOOL();

        MCAPI static ::std::string_view const& ENTITY_REF();

        MCAPI static ::std::string_view const& FLOAT();

        MCAPI static ::std::string_view const& INT();

        MCAPI static ::std::string_view const& POI_MEMORY();

        MCAPI static ::std::string_view const& STRING();
        // NOLINTEND
    };
#endif // @header-generator platform
};

} // namespace SharedTypes::v1_21_130::Brain
