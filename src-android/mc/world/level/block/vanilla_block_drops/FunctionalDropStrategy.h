#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"
#include "mc/world/level/block/IResourceDropsStrategy.h"

// auto generated forward declare list
// clang-format off
class Block;
class IRandom;
struct ResourceDrops;
struct ResourceDropsContext;
// clang-format on

namespace VanillaBlockDrops::Registration {

class FunctionalDropStrategy : public ::IResourceDropsStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mDropStrategy;
    // NOLINTEND
};

} // namespace VanillaBlockDrops::Registration
