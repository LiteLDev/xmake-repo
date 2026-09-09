#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BaseBlockLocationIterator.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ListBlockVolume;
// clang-format on

class ListBlockVolumeIterator : public ::BaseBlockLocationIterator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ListBlockVolume const&> mListBlockVolume;
    ::ll::UntypedStorage<8, 8>                         mCurrentIterator;
    ::ll::UntypedStorage<8, 8>                         mEndIterator;
    ::ll::TypedStorage<8, 8, ulong>                    mChangeCount;
    // NOLINTEND

public:
    // prevent constructor by default
    ListBlockVolumeIterator& operator=(ListBlockVolumeIterator const&);
    ListBlockVolumeIterator(ListBlockVolumeIterator const&);
    ListBlockVolumeIterator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ListBlockVolumeIterator();

    virtual ::BaseBlockLocationIterator& operator++();

    virtual bool isValid() const;

    virtual void _begin();

    virtual void _end();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ListBlockVolumeIterator(
        ::ListBlockVolume const&,
        std::__hash_const_iterator<std::__hash_node<BlockPos, void*>*> const&,
        std::__hash_const_iterator<std::__hash_node<BlockPos, void*>*> const&,
        bool
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ListBlockVolume const&,
        std::__hash_const_iterator<std::__hash_node<BlockPos, void*>*> const&,
        std::__hash_const_iterator<std::__hash_node<BlockPos, void*>*> const&,
        bool
    );
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
