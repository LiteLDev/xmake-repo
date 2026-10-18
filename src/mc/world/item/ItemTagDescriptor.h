#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/Result.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/item/ItemDescriptor.h"
#include "mc/world/item/ItemTag.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class CompoundTag;
class Item;
#if defined(LL_PLAT_A) // @header-generator platform
class ReadOnlyBinaryStream;
#else // @header-generator platform
#endif // @header-generator platform
namespace Json { class Value; }
// clang-format on

struct ItemTagDescriptor : public ::ItemDescriptor::BaseDescriptor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::ItemTag> mItemTag;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::ItemTag> mItemTag;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ItemTagDescriptor& operator=(ItemTagDescriptor const&);
    ItemTagDescriptor();
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
    virtual ~ItemTagDescriptor();
#else // @header-generator platform
    virtual bool sameItems(::ItemDescriptor::BaseDescriptor const& otherDescriptor, bool compareAux) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool sameItems(::ItemDescriptor::BaseDescriptor const&, bool) const;
#else // @header-generator platform
    virtual bool sameItem(::ItemDescriptor::ItemEntry const& otherItem, bool) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool sameItem(::ItemDescriptor::ItemEntry const&, bool) const;
#else // @header-generator platform
    virtual bool forEachItemUntil(::brstd::function_ref<bool(::Item const&, short)> func) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getFullName() const;
#else // @header-generator platform
    virtual ::std::string getFullName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string toString() const;
#else // @header-generator platform
    virtual ::std::string toString() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemDescriptor::ItemEntry getItem() const;
#else // @header-generator platform
    virtual ::ItemDescriptor::ItemEntry getItem() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool forEachItemUntil(::brstd::function_ref<bool(const Item&, short)>) const;
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
    virtual void serialize(::Json::Value& val) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void serialize(::BinaryStream&) const;
#else // @header-generator platform
    virtual void serialize(::BinaryStream& stream) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void serialize(::Json::Value&) const;
#else // @header-generator platform
    virtual ::ItemDescriptor::InternalType getType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemDescriptor::InternalType getType() const;

    virtual ulong getHash() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual uint64 getHash() const /*override*/;
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
    MCNAPI bool $sameItems(::ItemDescriptor::BaseDescriptor const&, bool) const;
#else // @header-generator platform
    MCAPI bool $sameItems(::ItemDescriptor::BaseDescriptor const& otherDescriptor, bool compareAux) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $sameItem(::ItemDescriptor::ItemEntry const&, bool) const;
#else // @header-generator platform
    MCAPI bool $sameItem(::ItemDescriptor::ItemEntry const& otherItem, bool) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getFullName() const;
#else // @header-generator platform
    MCAPI bool $forEachItemUntil(::brstd::function_ref<bool(::Item const&, short)> func) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $toString() const;
#else // @header-generator platform
    MCAPI ::std::string $getFullName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemDescriptor::ItemEntry $getItem() const;
#else // @header-generator platform
    MCAPI ::std::string $toString() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $forEachItemUntil(::brstd::function_ref<bool(const Item&, short)>) const;
#else // @header-generator platform
    MCFOLD ::ItemDescriptor::ItemEntry $getItem() const;
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
    MCAPI void $serialize(::Json::Value& val) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $serialize(::Json::Value&) const;
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
    MCAPI uint64 $getHash() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
