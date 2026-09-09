#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/AssetType.h"
#include "mc/deps/shared_types/util/FileReference.h"
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_21_20/structure/template_pool/Projection.h"

namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool {

struct SinglePoolElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                                mLocation;
    ::ll::UntypedStorage<8, 24>                                                                mProcessors;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Projection> mProjection;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool
