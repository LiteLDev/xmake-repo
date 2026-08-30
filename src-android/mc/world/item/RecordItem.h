#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/item/components/ComponentItem.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Item;
class ItemDescriptor;
class ItemStackBase;
struct ResolvedItemIconInfo;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RecordItem : public ::ComponentItem {
public:
    // prevent constructor by default
    RecordItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RecordItem();

    virtual ::RecordItem& setDescriptionId(std::string const&);

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual ::Item& setIconInfo(std::string const&, int);

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RecordItem(std::string const&, int, ::cereal::ReflectionCtx&, ::SharedTypes::Legacy::LevelSoundEvent);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::cereal::ReflectionCtx&, ::SharedTypes::Legacy::LevelSoundEvent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::RecordItem& $setDescriptionId(std::string const&);

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
