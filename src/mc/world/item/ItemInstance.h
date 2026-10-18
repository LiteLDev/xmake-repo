#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStackBase.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
class Item;
// clang-format on

class ItemInstance : public ::ItemStackBase {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // prevent constructor by default
    ItemInstance& operator=(ItemInstance const&);

public:
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ItemInstance();
#else // @header-generator platform
    virtual void reinit(::Block const& block, int count) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reinit(std::string_view const, int, int);
#else // @header-generator platform
    virtual void reinit(::Item const& item, int count, int auxValue) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reinit(::Block const&, int);

    virtual void reinit(::Item const&, int, int);
#else // @header-generator platform
    virtual void reinit(::std::string_view const name, int count, int auxValue) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemInstance clone() const;
#else // @header-generator platform
    MCAPI ItemInstance();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemInstance& operator=(::ItemInstance const&);
#else // @header-generator platform
    MCAPI ItemInstance(::ItemInstance const& rhs);

    MCAPI explicit ItemInstance(::ItemStackBase const& rhs);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ItemInstance fromTag(::CompoundTag const&);
#else // @header-generator platform
    MCAPI static ::ItemInstance fromTag(::CompoundTag const& tag);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ItemInstance const& EMPTY_ITEM();
#else // @header-generator platform
    MCAPI static ::ItemInstance const& EMPTY_ITEM();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor();

    MCFOLD void* $ctor(::ItemInstance const& rhs);

    MCFOLD void* $ctor(::ItemStackBase const& rhs);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reinit(std::string_view const, int, int);
#else // @header-generator platform
    MCAPI void $reinit(::Block const& block, int count);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reinit(::Block const&, int);
#else // @header-generator platform
    MCAPI void $reinit(::Item const& item, int count, int auxValue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reinit(::Item const&, int, int);
#else // @header-generator platform
    MCAPI void $reinit(::std::string_view const name, int count, int auxValue);


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
