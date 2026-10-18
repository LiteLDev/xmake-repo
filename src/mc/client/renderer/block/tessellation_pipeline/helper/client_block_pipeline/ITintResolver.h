#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ITintResolver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITintResolver() = default;

    virtual ::mce::Color _get(
        ::Block const&    block,
        ::BlockPos const& blockPos,
        ::TintMethod      tintMethod,
        ::BiomeTintCache* biomeTintCache
    ) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::ClientBlockPipeline::IResolvedTint>
    get(::Block const&                           block,
        ::BlockBakedMaterialDataComponent const& bakedMaterialData,
        ::BlockPos const&                        relativePos,
        ::BiomeTintCache*                        biomeTintCache);
    // NOLINTEND
};
#else // @header-generator platform
class ITintResolver {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
