#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
class BlockType;
class BlockTypeRegistry;
class CompoundTag;
class Material;
namespace SharedTypes::v1_26_20::BlockDefinition { struct BlockArchetype; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockArchetypeDispatcher {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BlockShape getBlockShape(std::string const&);
    // NOLINTEND
};
