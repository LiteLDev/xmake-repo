#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ComponentItem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class CompoundTag;
class Container;
class Item;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Vec3;
struct ResolvedItemIconInfo;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class SnowballItem : public ::ComponentItem {
public:
    // prevent constructor by default
    SnowballItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SnowballItem();

    virtual ::SnowballItem& setDescriptionId(std::string const&);

    virtual ::Actor* createProjectileActor(::BlockSource&, ::ItemStack const&, ::Vec3 const&, ::Vec3 const&) const;

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual ::Item& setIconInfo(std::string const&, int);

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SnowballItem(std::string const&, int, ::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::SnowballItem& $setDescriptionId(std::string const&);

    MCNAPI ::Actor* $createProjectileActor(::BlockSource&, ::ItemStack const&, ::Vec3 const&, ::Vec3 const&) const;

    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCNAPI ::Item& $setIconInfo(std::string const&, int);

    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
