#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/DimensionPadding.h"
#include "mc/world/level/levelgen/v2/JigsawExpansion.h"
#include "mc/world/level/levelgen/v2/LiquidSettings.h"
#include "mc/world/level/levelgen/v2/MaxDistanceFromCenter.h"
#include "mc/world/level/levelgen/v2/StructureBuilder.h"
#include "mc/world/level/levelgen/v2/StructureHeightProvider.h"
#include "mc/world/level/levelgen/v2/heightmap_projection/Type.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class PoolAliasBinding;
namespace br::worldgen { struct JigsawStructure; }
// clang-format on

namespace br::worldgen {

#if defined(LL_PLAT_A) // @header-generator platform
class JigsawStructureBuilder : public ::br::worldgen::StructureBuilder<br::worldgen::JigsawStructureBuilder> {
#else // @header-generator platform
class JigsawStructureBuilder : public ::br::worldgen::StructureBuilder<::br::worldgen::JigsawStructureBuilder> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, schar>                                           mMaxDepth;
    ::ll::TypedStorage<4, 8, ::br::worldgen::MaxDistanceFromCenter>           mMaxDistanceFromCenter;
    ::ll::TypedStorage<4, 8, ::br::worldgen::DimensionPadding>                mDimensionPadding;
    ::ll::TypedStorage<8, 24, std::string>                                    mStart;
    ::ll::TypedStorage<8, 24, std::string>                                    mStartJigsawName;
    ::ll::TypedStorage<8, 56, ::br::worldgen::StructureHeightProvider>        mStartHeight;
    ::ll::TypedStorage<1, 1, ::br::worldgen::HeightmapProjection::Type>       mProjectStartToHeightmap;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<PoolAliasBinding>>> mPoolAliases;
    ::ll::TypedStorage<1, 1, ::br::worldgen::JigsawExpansion>                 mExpansion;
    ::ll::TypedStorage<1, 1, ::br::worldgen::LiquidSettings>                  mLiquidSettings;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, schar>                                                 mMaxDepth;
    ::ll::TypedStorage<4, 8, ::br::worldgen::MaxDistanceFromCenter>                 mMaxDistanceFromCenter;
    ::ll::TypedStorage<4, 8, ::br::worldgen::DimensionPadding>                      mDimensionPadding;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mStart;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mStartJigsawName;
    ::ll::TypedStorage<8, 56, ::br::worldgen::StructureHeightProvider>              mStartHeight;
    ::ll::TypedStorage<1, 1, ::br::worldgen::HeightmapProjection::Type>             mProjectStartToHeightmap;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::PoolAliasBinding>>> mPoolAliases;
    ::ll::TypedStorage<1, 1, ::br::worldgen::JigsawExpansion>                       mExpansion;
    ::ll::TypedStorage<1, 1, ::br::worldgen::LiquidSettings>                        mLiquidSettings;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureBuilder();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~JigsawStructureBuilder();
#else // @header-generator platform
    virtual ~JigsawStructureBuilder() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI JigsawStructureBuilder(std::string_view, ::HashedString);
#else // @header-generator platform
    MCAPI JigsawStructureBuilder(::std::string_view key, ::HashedString type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::br::worldgen::JigsawStructure build();
#else // @header-generator platform
    MCAPI ::br::worldgen::JigsawStructure build();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::br::worldgen::JigsawStructureBuilder& dimensionPadding(uint);

    MCNAPI ::br::worldgen::JigsawStructureBuilder& liquidSettings(::br::worldgen::LiquidSettings);

    MCNAPI ::br::worldgen::JigsawStructureBuilder& maxDepth(schar);

    MCNAPI ::br::worldgen::JigsawStructureBuilder& maxDistanceFromCenter(int, int);

    MCNAPI ::br::worldgen::JigsawStructureBuilder& poolAliases(std::vector<std::shared_ptr<PoolAliasBinding>>&&);

    MCNAPI ::br::worldgen::JigsawStructureBuilder& startHeight(::br::worldgen::StructureHeightProvider&&);

    MCNAPI ::br::worldgen::JigsawStructureBuilder& startPool(std::string_view);
#else // @header-generator platform
    MCAPI ::br::worldgen::JigsawStructureBuilder& startPool(::std::string_view key);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::br::worldgen::JigsawStructureBuilder create(std::string_view, ::HashedString);
#else // @header-generator platform
    MCAPI static ::br::worldgen::JigsawStructureBuilder create(::std::string_view key, ::HashedString type);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string_view, ::HashedString);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string_view key, ::HashedString type);
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
