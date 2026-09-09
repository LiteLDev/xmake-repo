#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/AssetType.h"
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_21_20/structure/template_pool/Description.h"
#include "mc/deps/shared_types/v1_21_20/structure/template_pool/TemplatePoolElement.h"

namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool {

struct Contents {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Description> mDescription;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_20::JigsawStructureTemplatePool::TemplatePoolElement>> mElements;
    ::ll::UntypedStorage<8, 24> mFallback;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool
