#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/structure/definition/Contents.h"
#include "mc/deps/shared_types/v1_21_20/structure/processor_list/Contents.h"
#include "mc/deps/shared_types/v1_21_20/structure/set/Contents.h"
#include "mc/deps/shared_types/v1_21_20/structure/template_pool/Contents.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace SharedTypes::v1_21_20::JigsawStructureDefinition { struct Contents; }
namespace SharedTypes::v1_21_20::JigsawStructureProcessorList { struct Contents; }
namespace SharedTypes::v1_21_20::JigsawStructureSet { struct Contents; }
namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool { struct Contents; }
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20 {

struct JigsawStructureData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_20::JigsawStructureProcessorList::Contents>> mProcessorLists;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents>> mTemplatePools;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_20::JigsawStructureDefinition::Contents>> mJigsawDefinitions;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_20::JigsawStructureSet::Contents>> mJigsawStructureSets;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_20::JigsawStructureProcessorList::Contents>>
        mProcessorLists;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents>>
        mTemplatePools;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents>>
        mJigsawDefinitions;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_20::JigsawStructureSet::Contents>>
        mJigsawStructureSets;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    JigsawStructureData& operator=(JigsawStructureData const&);
    JigsawStructureData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI JigsawStructureData(::SharedTypes::v1_21_20::JigsawStructureData const&);
#else // @header-generator platform
    MCAPI JigsawStructureData(::SharedTypes::v1_21_20::JigsawStructureData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_20::JigsawStructureData& operator=(::SharedTypes::v1_21_20::JigsawStructureData&&);
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_20::JigsawStructureData& operator=(::SharedTypes::v1_21_20::JigsawStructureData&&);

    MCAPI ~JigsawStructureData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_21_20::JigsawStructureData const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_21_20::JigsawStructureData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
