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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CommandArea> _getArea(::Bounds const&, bool, bool, bool) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CommandArea> _getArea(
        ::Bounds const& requiredArea,
        bool            allowNonTickingPlayerAndTickingAreaChunks,
        bool            allowUnloadedChunks,
        bool            allowPlayerChunks
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CommandArea> findArea(::BlockPos const&, ::BlockPos const&, bool, bool, bool) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CommandArea> _getNewCommandArea(::Bounds const& requiredArea) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CommandArea> findAreaWithBuffer(::BlockPos const&, ::BlockPos const&, int, bool, bool) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool shouldAllowNonTickingPlayerAndTickingAreaChunks(int);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CommandArea> findAreaWithBuffer(
        ::BlockPos const& min,
        ::BlockPos const& max,
        int               commandVersion,
        bool              allowUnloadedChunks,
        bool              allowPlayerChunks
    ) const;
#endif // @header-generator platform
    // NOLINTEND
};
