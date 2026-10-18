#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/structure/BlockIgnore.h"
#include "mc/deps/shared_types/v1_21_20/structure/BlockRules.h"
#include "mc/deps/shared_types/v1_21_20/structure/Capped.h"
#include "mc/deps/shared_types/v1_21_20/structure/ProtectedBlock.h"
#include "mc/deps/shared_types/v1_21_20/structure/processor_list/Description.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

#endif // @header-generator platform
namespace SharedTypes::v1_21_20::JigsawStructureProcessorList {

struct Contents {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_20::JigsawStructureProcessorList::Description> mDescription;
    ::ll::TypedStorage<8, 24, std::vector<std::variant<SharedTypes::v1_21_20::JigsawStructure::Processors::BlockRules, SharedTypes::v1_21_20::JigsawStructure::Processors::ProtectedBlock, SharedTypes::v1_21_20::JigsawStructure::Processors::BlockIgnore, SharedTypes::v1_21_20::JigsawStructure::Processors::Capped>>> mProcessors;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_20::JigsawStructureProcessorList::Description> mDescription;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<
            ::SharedTypes::v1_21_20::JigsawStructure::Processors::BlockRules,
            ::SharedTypes::v1_21_20::JigsawStructure::Processors::ProtectedBlock,
            ::SharedTypes::v1_21_20::JigsawStructure::Processors::BlockIgnore,
            ::SharedTypes::v1_21_20::JigsawStructure::Processors::Capped>>>
        mProcessors;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Contents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureProcessorList
