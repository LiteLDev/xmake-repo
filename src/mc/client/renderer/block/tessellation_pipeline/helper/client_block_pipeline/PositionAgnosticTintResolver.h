#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/ITintResolver.h"
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
class BiomeTintCache;
class Block;
class BlockPos;
namespace mce { class Color; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/ITintResolver.h"
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
class BiomeTintCache;
class Block;
class BlockPos;
namespace mce { class Color; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
class PositionAgnosticTintResolver : public ::ClientBlockPipeline::ITintResolver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PositionAgnosticTintResolver();

    virtual ::mce::Color _get(::Block const&, ::BlockPos const&, ::TintMethod, ::BiomeTintCache*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::mce::Color $_get(::Block const&, ::BlockPos const&, ::TintMethod, ::BiomeTintCache*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class PositionAgnosticTintResolver : public ::ClientBlockPipeline::ITintResolver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color
    _get(::Block const& block, ::BlockPos const&, ::TintMethod tintMethod, ::BiomeTintCache*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::mce::Color $_get(::Block const& block, ::BlockPos const&, ::TintMethod tintMethod, ::BiomeTintCache*);
    // NOLINTEND
};
#else // @header-generator platform
class PositionAgnosticTintResolver {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
