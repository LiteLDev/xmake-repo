#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/platform/Result.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockType;
class CompoundTag;
class Item;
class ReadOnlyBinaryStream;
// clang-format on

struct DeferredDescriptor : public ::ItemDescriptor::BaseDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mFullName;
    ::ll::TypedStorage<2, 2, short>        mAuxValue;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredDescriptor& operator=(DeferredDescriptor const&);
    DeferredDescriptor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual std::unique_ptr<ItemDescriptor::BaseDescriptor> clone() const;

    virtual ~DeferredDescriptor();

    virtual bool sameItem(::ItemDescriptor::ItemEntry const&, bool) const;

    virtual std::string getFullName() const;

    virtual std::map<std::string, std::string> toMap() const;

    virtual std::optional<CompoundTag> save() const;

    virtual void serialize(::BinaryStream&) const;

    virtual ::ItemDescriptor::InternalType getType() const;

    virtual ulong getHash() const;

    virtual bool shouldResolve() const;

    virtual std::unique_ptr<ItemDescriptor::BaseDescriptor> resolve() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<ItemDescriptor::BaseDescriptor>
           _initFromBlockType(::BlockType const&, ::WeakPtr<Item>&&) const;
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

    MCNAPI std::map<std::string, std::string> $toMap() const;

    MCNAPI std::optional<CompoundTag> $save() const;

    MCNAPI void $serialize(::BinaryStream&) const;

    MCNAPI ::ItemDescriptor::InternalType $getType() const;

    MCNAPI ulong $getHash() const;

    MCNAPI bool $shouldResolve() const;

    MCNAPI std::unique_ptr<ItemDescriptor::BaseDescriptor> $resolve() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
