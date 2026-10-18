#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/structure/template_pool/EmptyPoolElement.h"
#include "mc/deps/shared_types/v1_21_20/structure/template_pool/FeaturePoolElement.h"
#include "mc/deps/shared_types/v1_21_20/structure/template_pool/SinglePoolElement.h"

namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool {

struct TemplatePoolElement {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 64, std::variant<SharedTypes::v1_21_20::JigsawStructureTemplatePool::EmptyPoolElement, SharedTypes::v1_21_20::JigsawStructureTemplatePool::SinglePoolElement, SharedTypes::v1_21_20::JigsawStructureTemplatePool::FeaturePoolElement>> mElement;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        80,
        ::std::variant<
            ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::EmptyPoolElement,
            ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::SinglePoolElement,
            ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::FeaturePoolElement>>
                                    mElement;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar> mWeight;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool
