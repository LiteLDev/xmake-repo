#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockState;
class CommandOutput;
class CompoundTag;
class HashedString;
// clang-format on

class BlockStateCommandParam {
public:
    // BlockStateCommandParam inner types define
    enum Type : uint {
        Integer = 0,
        Float   = 1,
        Bool    = 2,
        String  = 3,
        Invalid = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                   mBlockState;
    ::ll::TypedStorage<8, 24, std::string>                   mValue;
    ::ll::TypedStorage<4, 4, ::BlockStateCommandParam::Type> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockStateCommandParam& operator=(BlockStateCommandParam const&);
    BlockStateCommandParam();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockStateCommandParam(std::string, std::string, ::BlockStateCommandParam::Type);

    MCNAPI bool _createCompoundTag(::CompoundTag&, ::CommandOutput&) const;

    MCNAPI ::BlockState const* _getBlockState(::Block const&) const;

    MCNAPI std::optional<std::pair<HashedString, int>> getNameAndValue(::CommandOutput&, ::Block const&) const;

    MCNAPI bool setBlockState(::Block const**, ::CommandOutput&) const;

    MCNAPI ~BlockStateCommandParam();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string, std::string, ::BlockStateCommandParam::Type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
