#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/BlockPos.h"
#endif // @header-generator platform
#include "mc/world/level/block/BaseBlockLocationIterator.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class ListBlockVolume;
// clang-format on

class ListBlockVolumeIterator : public ::BaseBlockLocationIterator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ListBlockVolume const&> mListBlockVolume;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8>                         mCurrentIterator;
    ::ll::UntypedStorage<8, 8>                         mEndIterator;
    ::ll::TypedStorage<8, 8, ulong>                    mChangeCount;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::_List_const_iterator<::std::_List_val<::std::_List_simple_types<::BlockPos>>>>
        mCurrentIterator;
    ::ll::TypedStorage<8, 8, ::std::_List_const_iterator<::std::_List_val<::std::_List_simple_types<::BlockPos>>>>
                                     mEndIterator;
    ::ll::TypedStorage<8, 8, uint64> mChangeCount;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ListBlockVolumeIterator& operator=(ListBlockVolumeIterator const&);
    ListBlockVolumeIterator(ListBlockVolumeIterator const&);
    ListBlockVolumeIterator();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ListBlockVolumeIterator();
#else // @header-generator platform
    virtual ~ListBlockVolumeIterator() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BaseBlockLocationIterator& operator++();
#else // @header-generator platform
    virtual ::BaseBlockLocationIterator& operator++() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValid() const;
#else // @header-generator platform
    virtual bool isValid() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _begin();
#else // @header-generator platform
    virtual void _begin() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void _end() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValid() const;
#else // @header-generator platform
    MCAPI bool $isValid() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_begin();
#else // @header-generator platform
    MCAPI void $_begin();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_end();
#else // @header-generator platform
    MCAPI void $_end();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
