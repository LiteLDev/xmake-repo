#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/platform/Result.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class CompoundTag;
class Item;
class ReadOnlyBinaryStream;
// clang-format on

struct ComplexAliasDescriptor : public ::ItemDescriptor::BaseDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString> mFullName;
    ::ll::UntypedStorage<8, 16>               mDefaultItem;
    // NOLINTEND

public:
    // prevent constructor by default
    ComplexAliasDescriptor& operator=(ComplexAliasDescriptor const&);
    ComplexAliasDescriptor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual std::unique_ptr<ItemDescriptor::BaseDescriptor> clone() const;

    virtual ~ComplexAliasDescriptor();

    virtual bool sameItems(::ItemDescriptor::BaseDescriptor const&, bool) const;

    virtual bool sameItem(::ItemDescriptor::ItemEntry const&, bool) const;

    virtual std::string getFullName() const;

    virtual ::ItemDescriptor::ItemEntry getItem() const;

    virtual bool forEachItemUntil(::brstd::function_ref<bool(const Item&, short)>) const;

    virtual std::map<std::string, std::string> toMap() const;

    virtual std::optional<CompoundTag> save() const;

    virtual void serialize(::BinaryStream&) const;

    virtual ::ItemDescriptor::InternalType getType() const;

    virtual ulong getHash() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ComplexAliasDescriptor(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&);
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

    MCNAPI ::ItemDescriptor::ItemEntry $getItem() const;

    MCNAPI bool $forEachItemUntil(::brstd::function_ref<bool(const Item&, short)>) const;

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
