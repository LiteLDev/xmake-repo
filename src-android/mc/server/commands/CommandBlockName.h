#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockStateCommandParam;
class CommandBlockNameResult;
class CommandOutput;
// clang-format on

class CommandBlockName {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mBlockNameHash;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string getDescriptionId() const;

    MCNAPI ::CommandBlockNameResult resolveBlock(int) const;

    MCNAPI ::CommandBlockNameResult resolveBlock(std::vector<BlockStateCommandParam> const&, ::CommandOutput&) const;

    MCNAPI ::CommandBlockNameResult
    resolveBlock(std::vector<BlockStateCommandParam> const&, int, ::CommandOutput&) const;
    // NOLINTEND
};
