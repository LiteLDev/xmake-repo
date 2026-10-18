#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LegacyStructureBlockInfo;
#if defined(LL_PLAT_A) // @header-generator platform
namespace br::worldgen { struct StructureBlockInfo; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace br::worldgen {

struct NbtStructureTemplateBlockPalette {
public:
    // NbtStructureTemplateBlockPalette inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using Data = std::vector<LegacyStructureBlockInfo>;
#else // @header-generator platform
    using Data = ::std::vector<::LegacyStructureBlockInfo>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::vector<LegacyStructureBlockInfo> const*> mNbt;
    ::ll::TypedStorage<8, 8, ulong>                                        mIndex;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::vector<::LegacyStructureBlockInfo> const*> mNbt;
    ::ll::TypedStorage<8, 8, uint64>                                           mIndex;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen
