#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

struct BlockSoundComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mSoundType;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockSoundComponent& operator=(BlockSoundComponent const&);
    BlockSoundComponent(BlockSoundComponent const&);
    BlockSoundComponent();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& NORMAL_SOUND();
    // NOLINTEND
};
