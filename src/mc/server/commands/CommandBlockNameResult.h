#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class CommandBlockNameResult {
public:
    // CommandBlockNameResult inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum Result : uchar {
#else // @header-generator platform
    enum class Result : uchar {
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<const Block*>>       mComplexAliasPostSplitBlocks;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>>   mComplexAliasPostSplitBlocks;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CommandBlockNameResult& operator=(CommandBlockNameResult const&);
    CommandBlockNameResult();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CommandBlockNameResult(::HashedString const&, ::Block const*, bool);

    MCNAPI ::Block const* getBlock() const;

    MCNAPI ::CommandBlockNameResult::Result getResult() const;

    MCNAPI bool isComplexAlias() const;

    MCNAPI bool isSameBlock(::Block const&, bool, bool) const;
#else // @header-generator platform
    MCAPI ~CommandBlockNameResult();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
#else // @header-generator platform
    // destructor thunk
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::HashedString const&, ::Block const*, bool);
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
