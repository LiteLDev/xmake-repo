#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/util/FileReference.h"
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_21_20/structure/template_pool/Projection.h"

namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool {

struct SinglePoolElement {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                                                mLocation;
    ::ll::UntypedStorage<8, 24>                                                                mProcessors;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SharedTypes::FileReference<22>>                                mLocation;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<12>>                                    mProcessors;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Projection> mProjection;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SinglePoolElement& operator=(SinglePoolElement const&);
    SinglePoolElement();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SinglePoolElement(::SharedTypes::v1_21_20::JigsawStructureTemplatePool::SinglePoolElement const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SharedTypes::v1_21_20::JigsawStructureTemplatePool::SinglePoolElement const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool
