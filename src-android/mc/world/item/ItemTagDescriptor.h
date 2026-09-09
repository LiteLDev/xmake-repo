#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/item/ItemDescriptor.h"
#include "mc/world/item/ItemTag.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class CompoundTag;
class Item;
class ReadOnlyBinaryStream;
namespace Json { class Value; }
// clang-format on

struct ItemTagDescriptor : public ::ItemDescriptor::BaseDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::ItemTag> mItemTag;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemTagDescriptor& operator=(ItemTagDescriptor const&);
    ItemTagDescriptor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual std::unique_ptr<ItemDescriptor::BaseDescriptor> clone() const;

    virtual ~ItemTagDescriptor();

    virtual bool sameItems(::ItemDescriptor::BaseDescriptor const&, bool) const;

    virtual bool sameItem(::ItemDescriptor::ItemEntry const&, bool) const;

    virtual std::string getFullName() const;

    virtual std::string toString() const;

    virtual ::ItemDescriptor::ItemEntry getItem() const;

    virtual bool forEachItemUntil(::brstd::function_ref<bool(const Item&, short)>) const;

    virtual std::map<std::string, std::string> toMap() const;

    virtual std::optional<CompoundTag> save() const;

    virtual void serialize(::BinaryStream&) const;

    virtual void serialize(::Json::Value&) const;

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

    MCNAPI bool $sameItems(::ItemDescriptor::BaseDescriptor const&, bool) const;

    MCNAPI bool $sameItem(::ItemDescriptor::ItemEntry const&, bool) const;

    MCNAPI std::string $getFullName() const;

    MCNAPI std::string $toString() const;

    MCNAPI ::ItemDescriptor::ItemEntry $getItem() const;

    MCNAPI bool $forEachItemUntil(::brstd::function_ref<bool(const Item&, short)>) const;

    MCNAPI std::map<std::string, std::string> $toMap() const;

    MCNAPI std::optional<CompoundTag> $save() const;

    MCNAPI void $serialize(::BinaryStream&) const;

    MCNAPI void $serialize(::Json::Value&) const;

    MCNAPI ::ItemDescriptor::InternalType $getType() const;

    MCNAPI ulong $getHash() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
