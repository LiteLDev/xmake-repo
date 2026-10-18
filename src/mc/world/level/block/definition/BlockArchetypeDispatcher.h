#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockShape.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BlockType;
class BlockTypeRegistry;
class CompoundTag;
class Material;
namespace SharedTypes::v1_26_20::BlockDefinition { struct BlockArchetype; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct BlockArchetypeDispatcher {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BlockShape getBlockShape(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::BlockShape getBlockShape(::std::string const& blockName);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
