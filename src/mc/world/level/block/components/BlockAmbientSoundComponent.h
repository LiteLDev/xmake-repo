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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 64> mCanPlay;
    ::ll::UntypedStorage<4, 16> mOneInChance;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<bool(::BlockSource&, ::BlockPos const&) const>> mCanPlay;
    ::ll::TypedStorage<4, 4, int>                                                                         mOneInChance;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BlockAmbientSoundComponent& operator=(BlockAmbientSoundComponent const&);
    BlockAmbientSoundComponent(BlockAmbientSoundComponent const&);
    BlockAmbientSoundComponent();
#else // @header-generator platform
#endif // @header-generator platform
};
