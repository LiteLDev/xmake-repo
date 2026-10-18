#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

class BaseBlockLocationIterator {
public:
    // BaseBlockLocationIterator inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    using difference_type = int64;

    using iterator_category = ::std::input_iterator_tag;

    using pointer = ::BlockPos*;

#endif // @header-generator platform
    using reference = ::BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    using value_type = ::BlockPos;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mMin;
    ::ll::TypedStorage<4, 12, ::BlockPos> mMax;
    ::ll::TypedStorage<4, 12, ::BlockPos> mCurrent;
    ::ll::TypedStorage<1, 1, bool>        mDone;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BaseBlockLocationIterator();
#else // @header-generator platform
    virtual ~BaseBlockLocationIterator() = default;
#endif // @header-generator platform

    virtual bool operator==(::BaseBlockLocationIterator const&) const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool operator!=(::BaseBlockLocationIterator const&) const;
#else // @header-generator platform
    virtual bool operator!=(::BaseBlockLocationIterator const& rhs) const;
#endif // @header-generator platform

    virtual ::BaseBlockLocationIterator& operator++();

    virtual bool isValid() const = 0;

    virtual void _begin();

    virtual void _end();
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseBlockLocationIterator();

    MCNAPI BaseBlockLocationIterator(::BlockPos const&, ::BlockPos const&, bool);

    MCNAPI bool done() const;

    MCNAPI ::BlockPos operator*() const;

    MCNAPI void reset();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::BlockPos const&, ::BlockPos const&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_begin();
#else // @header-generator platform
    MCAPI void $_begin();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_end();
    // NOLINTEND
#else // @header-generator platform
    MCFOLD void $_end();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
