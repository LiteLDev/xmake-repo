#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/CoralColor.h"

// auto generated forward declare list
// clang-format off
struct ItemRegistryComplexAlias;
namespace FlatteningUtils { struct Instance; }
// clang-format on

namespace FlatteningUtils::Coral {
// functions
// NOLINTBEGIN
MCAPI ::FlatteningUtils::Instance get();

MCAPI ::std::vector<::BlockType::RemovedStateCollection::SplitBlock> getColorSplitStates(bool dead);

MCAPI ::std::vector<::BlockType::RemovedStateCollection::SplitBlock> getDeadSplitStates(::CoralColor color);

MCAPI ::ItemRegistryComplexAlias getItemComplexAliasCallback();
// NOLINTEND

} // namespace FlatteningUtils::Coral
#endif // @header-generator platform
