#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

class BaseBlockLocationIterator {
public:
    // BaseBlockLocationIterator inner types define
    using reference = ::BlockPos;

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
    virtual ~BaseBlockLocationIterator();

    virtual bool operator==(::BaseBlockLocationIterator const&) const;

    virtual bool operator!=(::BaseBlockLocationIterator const&) const;

    virtual ::BaseBlockLocationIterator& operator++();

    virtual bool isValid() const = 0;

    virtual void _begin();

    virtual void _end();
    // NOLINTEND

public:
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_begin();

    MCNAPI void $_end();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
