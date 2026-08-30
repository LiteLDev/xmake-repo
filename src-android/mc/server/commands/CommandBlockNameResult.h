#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class HashedString;
// clang-format on

class CommandBlockNameResult {
public:
    // CommandBlockNameResult inner types define
    enum Result : uchar {
        Unknown       = 0,
        Succeess      = 1,
        NoBlockName   = 2,
        SetDataError  = 3,
        SetStateError = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::CommandBlockNameResult::Result> mResult;
    ::ll::TypedStorage<1, 1, bool>                             mIsComplexAlias;
    ::ll::TypedStorage<8, 8, ::Block const*>                   mBlock;
    ::ll::TypedStorage<8, 24, std::vector<const Block*>>       mComplexAliasPostSplitBlocks;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandBlockNameResult& operator=(CommandBlockNameResult const&);
    CommandBlockNameResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandBlockNameResult(::HashedString const&, ::Block const*, bool);

    MCNAPI ::Block const* getBlock() const;

    MCNAPI ::CommandBlockNameResult::Result getResult() const;

    MCNAPI bool isComplexAlias() const;

    MCNAPI bool isSameBlock(::Block const&, bool, bool) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::HashedString const&, ::Block const*, bool);
    // NOLINTEND
};
