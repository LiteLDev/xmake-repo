#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CommandArea;
class Dimension;
struct Bounds;
// clang-format on

class CommandAreaFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&> mDimension;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandAreaFactory& operator=(CommandAreaFactory const&);
    CommandAreaFactory(CommandAreaFactory const&);
    CommandAreaFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<CommandArea> _getArea(::Bounds const&, bool, bool, bool) const;

    MCNAPI std::unique_ptr<CommandArea> findArea(::BlockPos const&, ::BlockPos const&, bool, bool, bool) const;

    MCNAPI std::unique_ptr<CommandArea> findAreaWithBuffer(::BlockPos const&, ::BlockPos const&, int, bool, bool) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool shouldAllowNonTickingPlayerAndTickingAreaChunks(int);
    // NOLINTEND
};
