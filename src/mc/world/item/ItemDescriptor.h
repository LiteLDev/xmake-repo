#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class Block;
class BlockType;
class CompoundTag;
class Item;
class ItemInstance;
class ItemStack;
class ReadOnlyBinaryStream;
struct ItemTag;
namespace Json { class Value; }
namespace SharedTypes::Legacy { struct ItemDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ItemDescriptor {
public:
    // ItemDescriptor inner types declare
    // clang-format off
    struct ItemEntry;
    struct BaseDescriptor;
    // clang-format on

    // ItemDescriptor inner types define
    enum class InternalType : uchar {
        Invalid      = 0,
        Default      = 1,
        Molang       = 2,
        ItemTag      = 3,
        Deferred     = 4,
        ComplexAlias = 5,
    };

    struct ItemEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Item const*> mItem;
        ::ll::TypedStorage<2, 2, short>         mAuxValue;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        ItemEntry();
#else // @header-generator platform
#endif // @header-generator platform
    };

    struct BaseDescriptor {
    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::unique_ptr<ItemDescriptor::BaseDescriptor> clone() const = 0;
#else // @header-generator platform
        virtual ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> clone() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~BaseDescriptor();
#else // @header-generator platform
        virtual bool sameItems(::ItemDescriptor::BaseDescriptor const& otherDescriptor, bool compareAux) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual bool sameItems(::ItemDescriptor::BaseDescriptor const&, bool) const;
#else // @header-generator platform
        virtual bool sameItem(::ItemDescriptor::ItemEntry const& otherItem, bool compareAux) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual bool sameItem(::ItemDescriptor::ItemEntry const&, bool) const = 0;
#else // @header-generator platform
        virtual ::std::string getFullName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::string getFullName() const;

        virtual std::string toString() const;
#else // @header-generator platform
        virtual ::std::string toString() const;
#endif // @header-generator platform

        virtual ::ItemDescriptor::ItemEntry getItem() const;

#if defined(LL_PLAT_A) // @header-generator platform
        virtual bool forEachItemUntil(::brstd::function_ref<bool(const Item&, short)>) const;
#else // @header-generator platform
        virtual bool forEachItemUntil(::brstd::function_ref<bool(::Item const&, short)> func) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::map<std::string, std::string> toMap() const = 0;
#else // @header-generator platform
        virtual ::std::map<::std::string, ::std::string> toMap() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::optional<CompoundTag> save() const = 0;
#else // @header-generator platform
        virtual ::std::optional<::CompoundTag> save() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual void serialize(::BinaryStream&) const = 0;
#else // @header-generator platform
        virtual void serialize(::Json::Value& val) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual void serialize(::Json::Value&) const;
#else // @header-generator platform
        virtual void serialize(::BinaryStream& stream) const = 0;
#endif // @header-generator platform

        virtual ::ItemDescriptor::InternalType getType() const = 0;

        virtual bool isValid() const;

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ulong getHash() const = 0;
#else // @header-generator platform
        virtual uint64 getHash() const = 0;
#endif // @header-generator platform

        virtual bool shouldResolve() const;

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::unique_ptr<ItemDescriptor::BaseDescriptor> resolve() const;
        // NOLINTEND
#else // @header-generator platform
        virtual ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> resolve() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual ~BaseDescriptor() = default;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool $sameItems(::ItemDescriptor::BaseDescriptor const&, bool) const;
#else // @header-generator platform
        MCAPI bool $sameItems(::ItemDescriptor::BaseDescriptor const& otherDescriptor, bool compareAux) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::string $toString() const;
#else // @header-generator platform
        MCAPI ::std::string $toString() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::ItemDescriptor::ItemEntry $getItem() const;
#else // @header-generator platform
        MCFOLD ::ItemDescriptor::ItemEntry $getItem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool $forEachItemUntil(::brstd::function_ref<bool(const Item&, short)>) const;
#else // @header-generator platform
        MCAPI bool $forEachItemUntil(::brstd::function_ref<bool(::Item const&, short)> func) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $serialize(::Json::Value&) const;
#else // @header-generator platform
        MCAPI void $serialize(::Json::Value& val) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool $isValid() const;
#else // @header-generator platform
        MCFOLD bool $isValid() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool $shouldResolve() const;
#else // @header-generator platform
        MCFOLD bool $shouldResolve() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::unique_ptr<ItemDescriptor::BaseDescriptor> $resolve() const;
#else // @header-generator platform
        MCFOLD ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> $resolve() const;


#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<ItemDescriptor::BaseDescriptor>> mImpl;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemDescriptor::BaseDescriptor>> mImpl;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ItemDescriptor(ItemDescriptor const&);
    ItemDescriptor() { mImpl = nullptr; }
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ItemDescriptor();
#else // @header-generator platform
    virtual ~ItemDescriptor() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void serialize(::BinaryStream&) const;
#else // @header-generator platform
    virtual void serialize(::Json::Value& val) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void serialize(::Json::Value&) const;
#else // @header-generator platform
    virtual void serialize(::BinaryStream& stream) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ItemDescriptor(::Block const&);
#else // @header-generator platform
    MCAPI explicit ItemDescriptor(::Block const& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ItemDescriptor(::BlockType const&);
#else // @header-generator platform
    MCAPI explicit ItemDescriptor(::BlockType const& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ItemDescriptor(::ItemTag const&);
#else // @header-generator platform
    MCAPI explicit ItemDescriptor(::ItemTag const& itemTag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ItemDescriptor(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    MCAPI explicit ItemDescriptor(::ReadOnlyBinaryStream& stream);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ItemDescriptor(::SharedTypes::Legacy::ItemDescriptor const&);
#else // @header-generator platform
    MCAPI ItemDescriptor(::std::string_view fullName, int itemAux);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemDescriptor(::ItemDescriptor const&);
#else // @header-generator platform
    MCAPI ItemDescriptor(::Item const& item, int auxValue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemDescriptor(::ItemDescriptor&&);
#else // @header-generator platform
    MCAPI ItemDescriptor(::Json::Value const& val, ::MolangVersion molangVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemDescriptor(::Item const&, int);
#else // @header-generator platform
    MCAPI bool forEachItemUntil(::brstd::function_ref<bool(::Item const&, short)> func) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemDescriptor(::Json::Value const&, ::MolangVersion);
#else // @header-generator platform
    MCAPI short getAuxValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool forEachItemUntil(::brstd::function_ref<bool(const Item&, short)>) const;
#else // @header-generator platform
    MCAPI ::Block const* getBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI short getAuxValue() const;
#else // @header-generator platform
    MCAPI ::WeakPtr<::BlockType const> const& getBlockType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* getBlock() const;
#else // @header-generator platform
    MCAPI int getIdAux() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakPtr<const BlockType> const& getBlockType() const;
#else // @header-generator platform
    MCAPI ::Item const* getItem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getFullName() const;
#else // @header-generator platform
    MCAPI ::std::string getRawNameId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getHash() const;
#else // @header-generator platform
    MCAPI ::std::string getSerializedNameAndAux(bool removeInvalidAux) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI short getId() const;
#else // @header-generator platform
    MCAPI bool isNull() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getIdAux() const;
#else // @header-generator platform
    MCAPI bool isValid(bool shouldResolve) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Item const* getItem() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI explicit operator ::ItemInstance() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getRawNameId() const;
#else // @header-generator platform
    MCAPI void operator=(::ItemDescriptor const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getSerializedNameAndAux(bool) const;
#else // @header-generator platform
    MCAPI bool sameItem(::ItemStack const& item, bool compareAux) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isDefinedAsItemName() const;

    MCNAPI bool isNull() const;

    MCNAPI bool isValid(bool) const;

    MCNAPI explicit operator ItemInstance() const;

    MCNAPI bool operator!=(::ItemDescriptor const&) const;

    MCNAPI void operator=(::ItemDescriptor const&);

    MCNAPI void operator=(::ItemDescriptor&&);

    MCNAPI bool operator==(::ItemDescriptor const&) const;

    MCNAPI bool sameItem(::ItemStack const&, bool) const;

    MCNAPI bool sameItem(::ItemDescriptor const&, bool) const;

    MCNAPI std::optional<CompoundTag> save() const;

    MCNAPI std::string toString() const;
#else // @header-generator platform
    MCAPI bool sameItem(::ItemDescriptor const& otherItemDescriptor, bool compareAux) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void fromSharedTypes(::ItemDescriptor&, ::SharedTypes::Legacy::ItemDescriptor const&);
#else // @header-generator platform
    MCAPI static void fromSharedTypes(::ItemDescriptor& instance, ::SharedTypes::Legacy::ItemDescriptor const& desc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<ItemDescriptor> fromTag(::CompoundTag const*);

    MCNAPI static ::SharedTypes::Legacy::ItemDescriptor toSharedTypes(::ItemDescriptor const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& ANY_AUX_VALUE();
#else // @header-generator platform
    MCAPI static ::std::optional<::ItemDescriptor> fromTag(::CompoundTag const* tag);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Block const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Block const& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockType const&);
#else // @header-generator platform
    MCAPI void* $ctor(::BlockType const& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ItemTag const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ItemTag const& itemTag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    MCAPI void* $ctor(::ReadOnlyBinaryStream& stream);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::Legacy::ItemDescriptor const&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string_view fullName, int itemAux);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ItemDescriptor const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Item const& item, int auxValue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ItemDescriptor&&);

    MCNAPI void* $ctor(::Item const&, int);

    MCNAPI void* $ctor(::Json::Value const&, ::MolangVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Json::Value const& val, ::MolangVersion molangVersion);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
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
