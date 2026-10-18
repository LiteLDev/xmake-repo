#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/v2/FrequencyReductionMethod.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/levelgen/v2/RandomSpreadPlacement.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
#if defined(LL_PLAT_A) // @header-generator platform
namespace br::worldgen { struct ChunkGeneratorStructureState; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace br::worldgen {

struct StructurePlacement {
public:
    // StructurePlacement inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using Type = std::variant<br::worldgen::RandomSpreadPlacement>;
#else // @header-generator platform
    using Type = ::std::variant<::br::worldgen::RandomSpreadPlacement>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                              mFrequency;
    ::ll::TypedStorage<4, 4, int>                                                mSalt;
    ::ll::TypedStorage<8, 8, bool (*)(long, long, ::ChunkPos, float)>            mReducer;
    ::ll::TypedStorage<4, 16, std::variant<br::worldgen::RandomSpreadPlacement>> mType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isStructureChunk(::br::worldgen::ChunkGeneratorStructureState const&, ::ChunkPos) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::br::worldgen::StructurePlacement
    randomeSpread(int, int, int, ::br::worldgen::RandomSpreadPlacement::Type);
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                  mFrequency;
    ::ll::TypedStorage<4, 4, int>                                                    mSalt;
    ::ll::TypedStorage<8, 8, bool (*)(int64, int64, ::ChunkPos, float)>              mReducer;
    ::ll::TypedStorage<4, 16, ::std::variant<::br::worldgen::RandomSpreadPlacement>> mType;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen
