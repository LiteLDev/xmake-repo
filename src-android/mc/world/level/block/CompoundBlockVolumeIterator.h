#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BaseBlockLocationIterator.h"

// auto generated forward declare list
// clang-format off
class CompoundBlockVolume;
// clang-format on

class CompoundBlockVolumeIterator : public ::BaseBlockLocationIterator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CompoundBlockVolume const*> mCompoundVolume;
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundBlockVolumeIterator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CompoundBlockVolumeIterator();

    virtual ::BaseBlockLocationIterator& operator++();

    virtual bool isValid() const;

    virtual void _begin();

    virtual void _end();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CompoundBlockVolumeIterator(::CompoundBlockVolume const&, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CompoundBlockVolume const&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isValid() const;

    MCNAPI void $_begin();

    MCNAPI void $_end();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
