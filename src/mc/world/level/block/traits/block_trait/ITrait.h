#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class BlockType;
class CompoundTag;
namespace cereal { struct ReflectionCtx; }
// clang-format on

#endif // @header-generator platform
namespace BlockTrait {

#if defined(LL_PLAT_A) // @header-generator platform
class ITrait {};
#else // @header-generator platform
class ITrait {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITrait() = default;

    virtual void applyToBlockType(::BlockType& blockType) const = 0;

    virtual void initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx) = 0;

    virtual ::std::unique_ptr<::CompoundTag> _buildNetworkTag(::cereal::ReflectionCtx const& ctx) const = 0;

    virtual ::std::string const& _getName() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace BlockTrait
