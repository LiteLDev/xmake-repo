#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/AssetType.h"
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"
#include "mc/deps/shared_types/v1_21_20/structure/ConstantHeight.h"
#include "mc/deps/shared_types/v1_21_20/structure/DimensionPaddingRange.h"
#include "mc/deps/shared_types/v1_21_20/structure/Direct.h"
#include "mc/deps/shared_types/v1_21_20/structure/Random.h"
#include "mc/deps/shared_types/v1_21_20/structure/RandomGroup.h"
#include "mc/deps/shared_types/v1_21_20/structure/UniformHeight.h"
#include "mc/deps/shared_types/v1_21_20/structure/definition/Description.h"
#include "mc/deps/shared_types/v1_21_20/structure/definition/GenerationStep.h"
#include "mc/deps/shared_types/v1_21_20/structure/definition/HeightmapProjection.h"
#include "mc/deps/shared_types/v1_21_20/structure/definition/LiquidSettings.h"
#include "mc/deps/shared_types/v1_21_20/structure/definition/MaxDistanceFromCenter.h"
#include "mc/deps/shared_types/v1_21_20/structure/definition/TerrainAdaptation.h"

namespace SharedTypes::v1_21_20::JigsawStructureDefinition {

struct Contents {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_20::JigsawStructureDefinition::Description> mDescription;
    ::ll::TypedStorage<8, 24, std::string> mStartJigsawName;
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mBiomeFilters;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_20::JigsawStructureDefinition::GenerationStep> mStep;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_20::JigsawStructureDefinition::TerrainAdaptation> mTerrainAdaptation;
    ::ll::UntypedStorage<8, 24> mStartPool;
    ::ll::TypedStorage<1, 1, uchar> mMaxDepth;
    ::ll::UntypedStorage<4, 24> mStartHeight;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_20::JigsawStructureDefinition::HeightmapProjection> mHeightmapProjection;
    ::ll::TypedStorage<4, 16, std::optional<std::variant<uint, SharedTypes::v1_21_20::DimensionPaddingRange>>> mDimensionPadding;
    ::ll::TypedStorage<4, 8, ::SharedTypes::v1_21_20::JigsawStructureDefinition::MaxDistanceFromCenter> mMaxDistanceFromCenter;
    ::ll::TypedStorage<8, 24, std::vector<std::variant<SharedTypes::v1_21_20::PoolAliases::Direct, SharedTypes::v1_21_20::PoolAliases::Random, SharedTypes::v1_21_20::PoolAliases::RandomGroup>>> mPoolAliases;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_20::JigsawStructureDefinition::LiquidSettings> mLiquidSettings;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureDefinition
