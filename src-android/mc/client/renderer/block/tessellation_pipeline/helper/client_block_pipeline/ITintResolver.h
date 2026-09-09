#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
class BiomeTintCache;
class Block;
class BlockPos;
struct BlockBakedMaterialDataComponent;
namespace ClientBlockPipeline { struct IResolvedTint; }
namespace mce { class Color; }
// clang-format on

namespace ClientBlockPipeline {

class ITintResolver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITintResolver();

    virtual ::mce::Color _get(::Block const&, ::BlockPos const&, ::TintMethod, ::BiomeTintCache*) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<ClientBlockPipeline::IResolvedTint>
           get(::Block const&, ::BlockBakedMaterialDataComponent const&, ::BlockPos const&, ::BiomeTintCache*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
