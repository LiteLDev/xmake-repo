#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/FitToFrame.h"
#include "mc/client/renderer/block/tessellation_pipeline/BlockSchematicPart.h"
#include "mc/client/renderer/block/tessellation_pipeline/item_transforms/Transform.h"
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class Block;
class HashedString;
// clang-format on

namespace ClientBlockPipeline {

struct BlockSchematic {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::Matrix>                                                    mModelToGridTransform;
    ::ll::TypedStorage<8, 24, std::vector<ClientBlockPipeline::BlockSchematicPart>>        mParts;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                                    mMaterialNames;
    ::ll::TypedStorage<8, 24, std::vector<ClientBlockPipeline::ItemTransforms::Transform>> mItemTransforms;
    ::ll::TypedStorage<1, 1, ::FitToFrame>                                                 mFitGuiItemToFrame;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                      mSchematicMax;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                      mSchematicMin;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void filter(std::unordered_map<HashedString, int> const&);

    MCNAPI std::shared_ptr<ClientBlockPipeline::BlockSchematic> getCopy() const;

    MCNAPI ~BlockSchematic();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ClientBlockPipeline::BlockSchematic const* tryGetSchematic(::Block const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
