#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/ITintResolver.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
class BiomeTintCache;
class Block;
class ChunkViewSource;
namespace mce { class Color; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/ITintResolver.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
class BiomeTintCache;
class Block;
namespace mce { class Color; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
class PositionDependentTintResolver : public ::ClientBlockPipeline::ITintResolver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 272, ::BlockSource>   mSource;
    ::ll::TypedStorage<4, 12, ::BlockPos const> mMinPos;
    // NOLINTEND

public:
    // prevent constructor by default
    PositionDependentTintResolver();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PositionDependentTintResolver();

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
class PositionDependentTintResolver : public ::ClientBlockPipeline::ITintResolver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 264, ::BlockSource>   mSource;
    ::ll::TypedStorage<4, 12, ::BlockPos const> mMinPos;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color _get(
        ::Block const&    block,
        ::BlockPos const& blockPos,
        ::TintMethod      tintMethod,
        ::BiomeTintCache* biomeTintCache
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::mce::Color
    $_get(::Block const& block, ::BlockPos const& blockPos, ::TintMethod tintMethod, ::BiomeTintCache* biomeTintCache);
    // NOLINTEND
};
#else // @header-generator platform
class PositionDependentTintResolver {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
