#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/block/BlockSpecifier.h"
#include "mc/deps/shared_types/v1_21_20/structure/AlwaysTrueBlock.h"
#include "mc/deps/shared_types/v1_21_20/structure/AlwaysTruePos.h"
#include "mc/deps/shared_types/v1_21_20/structure/AppendLoot.h"
#include "mc/deps/shared_types/v1_21_20/structure/AxisAlignedLinear.h"
#include "mc/deps/shared_types/v1_21_20/structure/BlockMatch.h"
#include "mc/deps/shared_types/v1_21_20/structure/BlockStateMatch.h"
#include "mc/deps/shared_types/v1_21_20/structure/Passthrough.h"
#include "mc/deps/shared_types/v1_21_20/structure/RandomBlockMatch.h"
#include "mc/deps/shared_types/v1_21_20/structure/RandomBlockStateMatch.h"
#include "mc/deps/shared_types/v1_21_20/structure/TagMatch.h"

namespace SharedTypes::v1_21_20::JigsawStructure {

struct Rule {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 80, std::variant<SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::AlwaysTrueBlock, SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::BlockMatch, SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::RandomBlockMatch, SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::TagMatch, SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::BlockStateMatch, SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::RandomBlockStateMatch>> mInputPredicate;
    ::ll::TypedStorage<8, 80, std::variant<SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::AlwaysTrueBlock, SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::BlockMatch, SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::RandomBlockMatch, SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::TagMatch, SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::BlockStateMatch, SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::RandomBlockStateMatch>> mLocationPredicate;
    ::ll::TypedStorage<4, 28, std::optional<std::variant<SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::AlwaysTruePos, SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::AxisAlignedLinear>>> mPositionPredicate;
    ::ll::TypedStorage<8, 40, std::optional<std::variant<SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::Passthrough, SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::AppendLoot>>> mBlockEntityModifier;
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_20_60::BlockSpecifier> mOutputState;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure
