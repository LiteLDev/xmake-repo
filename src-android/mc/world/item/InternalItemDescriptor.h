#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/platform/Result.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class CompoundTag;
class Item;
class ReadOnlyBinaryStream;
// clang-format on

struct InternalItemDescriptor : public ::ItemDescriptor::BaseDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mItemEntry;
    // NOLINTEND

public:
    // prevent constructor by default
    InternalItemDescriptor& operator=(InternalItemDescriptor const&);
    InternalItemDescriptor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual std::unique_ptr<ItemDescriptor::BaseDescriptor> clone() const;

    virtual ~InternalItemDescriptor();

    virtual bool sameItem(::ItemDescriptor::ItemEntry const&, bool) const;

    virtual std::string getFullName() const;

    virtual ::ItemDescriptor::ItemEntry getItem() const;

    virtual std::map<std::string, std::string> toMap() const;

    virtual std::optional<CompoundTag> save() const;

    virtual void serialize(::BinaryStream&) const;

    virtual ::ItemDescriptor::InternalType getType() const;

    virtual ulong getHash() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<ItemDescriptor::BaseDescriptor> $clone() const;

    MCNAPI bool $sameItem(::ItemDescriptor::ItemEntry const&, bool) const;

    MCNAPI std::string $getFullName() const;

    MCNAPI ::ItemDescriptor::ItemEntry $getItem() const;

    MCNAPI std::map<std::string, std::string> $toMap() const;

    MCNAPI std::optional<CompoundTag> $save() const;

    MCNAPI void $serialize(::BinaryStream&) const;

    MCNAPI ::ItemDescriptor::InternalType $getType() const;

    MCNAPI ulong $getHash() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
