#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/structure/definition/Contents.h"
#include "mc/deps/shared_types/v1_21_20/structure/processor_list/Contents.h"
#include "mc/deps/shared_types/v1_21_20/structure/set/Contents.h"
#include "mc/deps/shared_types/v1_21_20/structure/template_pool/Contents.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20 {

struct JigsawStructureData {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_20::JigsawStructureProcessorList::Contents>> mProcessorLists;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents>> mTemplatePools;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_20::JigsawStructureDefinition::Contents>> mJigsawDefinitions;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_20::JigsawStructureSet::Contents>> mJigsawStructureSets;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JigsawStructureData(::SharedTypes::v1_21_20::JigsawStructureData const&);

    MCNAPI ::SharedTypes::v1_21_20::JigsawStructureData& operator=(::SharedTypes::v1_21_20::JigsawStructureData&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_20::JigsawStructureData const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
