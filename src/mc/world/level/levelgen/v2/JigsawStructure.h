#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/DimensionPadding.h"
#include "mc/world/level/levelgen/v2/JigsawExpansion.h"
#include "mc/world/level/levelgen/v2/LiquidSettings.h"
#include "mc/world/level/levelgen/v2/MaxDistanceFromCenter.h"
#include "mc/world/level/levelgen/v2/Structure.h"
#include "mc/world/level/levelgen/v2/StructureHeightProvider.h"
#include "mc/world/level/levelgen/v2/heightmap_projection/Type.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class GenerationStub; }
namespace br::worldgen { struct GenerationContext; }
// clang-format on

namespace br::worldgen {

struct JigsawStructure : public ::br::worldgen::Structure {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                              mStartJigsawName;
    ::ll::TypedStorage<8, 24, std::string>                              mStart;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                            mStartJigsawName;
    ::ll::TypedStorage<8, 32, ::std::string>                            mStart;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, schar>                                     mMaxDepth;
    ::ll::TypedStorage<8, 56, ::br::worldgen::StructureHeightProvider>  mStartHeight;
    ::ll::TypedStorage<4, 8, ::br::worldgen::MaxDistanceFromCenter>     mMaxDistanceFromCenter;
    ::ll::TypedStorage<4, 8, ::br::worldgen::DimensionPadding>          mDimensionPadding;
    ::ll::TypedStorage<1, 1, ::br::worldgen::HeightmapProjection::Type> mProjectStartToHeightmap;
    ::ll::TypedStorage<1, 1, ::br::worldgen::JigsawExpansion>           mExpansion;
    ::ll::TypedStorage<1, 1, ::br::worldgen::LiquidSettings>            mLiquidSettings;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    JigsawStructure& operator=(JigsawStructure const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~JigsawStructure();
#else // @header-generator platform
    virtual ::std::optional<::br::worldgen::GenerationStub>
    findValidGenerationPoint(::br::worldgen::GenerationContext& context) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<br::worldgen::GenerationStub> findValidGenerationPoint(::br::worldgen::GenerationContext&) const;
    // clang-format on
#else // @header-generator platform
    virtual ~JigsawStructure() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<br::worldgen::GenerationStub>
           $findValidGenerationPoint(::br::worldgen::GenerationContext&) const;
#else // @header-generator platform
    MCAPI ::std::optional<::br::worldgen::GenerationStub>
    $findValidGenerationPoint(::br::worldgen::GenerationContext& context) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
