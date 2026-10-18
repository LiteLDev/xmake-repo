#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/Result.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockType;
class CompoundTag;
class Item;
#if defined(LL_PLAT_A) // @header-generator platform
class ReadOnlyBinaryStream;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct DeferredDescriptor : public ::ItemDescriptor::BaseDescriptor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mFullName;
    ::ll::TypedStorage<2, 2, short>        mAuxValue;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mFullName;
    ::ll::TypedStorage<2, 2, short>          mAuxValue;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DeferredDescriptor& operator=(DeferredDescriptor const&);
    DeferredDescriptor();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<ItemDescriptor::BaseDescriptor> clone() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> clone() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DeferredDescriptor();
#else // @header-generator platform
    virtual bool sameItem(::ItemDescriptor::ItemEntry const&, bool) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool sameItem(::ItemDescriptor::ItemEntry const&, bool) const;
#else // @header-generator platform
    virtual ::std::string getFullName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getFullName() const;
#else // @header-generator platform
    virtual ::std::map<::std::string, ::std::string> toMap() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::map<std::string, std::string> toMap() const;
#else // @header-generator platform
    virtual ::std::optional<::CompoundTag> save() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<CompoundTag> save() const;
#else // @header-generator platform
    virtual void serialize(::BinaryStream& stream) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void serialize(::BinaryStream&) const;
#else // @header-generator platform
    virtual ::ItemDescriptor::InternalType getType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemDescriptor::InternalType getType() const;
#else // @header-generator platform
    virtual uint64 getHash() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getHash() const;
#else // @header-generator platform
    virtual bool shouldResolve() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldResolve() const;

    virtual std::unique_ptr<ItemDescriptor::BaseDescriptor> resolve() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> resolve() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<ItemDescriptor::BaseDescriptor>
           _initFromBlockType(::BlockType const&, ::WeakPtr<Item>&&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::ItemDescriptor::BaseDescriptor>
    _initFromBlockType(::BlockType const& block, ::WeakPtr<::Item>&& item) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<ItemDescriptor::BaseDescriptor> $clone() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> $clone() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $sameItem(::ItemDescriptor::ItemEntry const&, bool) const;
#else // @header-generator platform
    MCFOLD bool $sameItem(::ItemDescriptor::ItemEntry const&, bool) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getFullName() const;
#else // @header-generator platform
    MCFOLD ::std::string $getFullName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::map<std::string, std::string> $toMap() const;
#else // @header-generator platform
    MCAPI ::std::map<::std::string, ::std::string> $toMap() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<CompoundTag> $save() const;
#else // @header-generator platform
    MCAPI ::std::optional<::CompoundTag> $save() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $serialize(::BinaryStream&) const;
#else // @header-generator platform
    MCAPI void $serialize(::BinaryStream& stream) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemDescriptor::InternalType $getType() const;
#else // @header-generator platform
    MCFOLD ::ItemDescriptor::InternalType $getType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getHash() const;
#else // @header-generator platform
    MCFOLD uint64 $getHash() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldResolve() const;
#else // @header-generator platform
    MCFOLD bool $shouldResolve() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<ItemDescriptor::BaseDescriptor> $resolve() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> $resolve() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
