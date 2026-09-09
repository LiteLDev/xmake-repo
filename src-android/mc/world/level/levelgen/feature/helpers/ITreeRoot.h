#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class ITreeRoot {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ITreeRoot() = default;

    virtual std::optional<BlockPos> placeRoots(::IBlockWorldGenAPI&, ::BlockPos const&, ::Random&, int, ::RenderParams&, ::TreeHelper::TreeParams const&) const = 0;
    // clang-format on
    // NOLINTEND
};
