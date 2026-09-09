#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

struct BlockAmbientSoundComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mCanPlay;
    ::ll::UntypedStorage<4, 16> mOneInChance;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockAmbientSoundComponent& operator=(BlockAmbientSoundComponent const&);
    BlockAmbientSoundComponent(BlockAmbientSoundComponent const&);
    BlockAmbientSoundComponent();
};
