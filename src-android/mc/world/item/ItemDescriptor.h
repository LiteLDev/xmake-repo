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

    public:
        // prevent constructor by default
        ItemEntry();
    };

    struct BaseDescriptor {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual std::unique_ptr<ItemDescriptor::BaseDescriptor> clone() const = 0;

        virtual ~BaseDescriptor();

        virtual bool sameItems(::ItemDescriptor::BaseDescriptor const&, bool) const;

        virtual bool sameItem(::ItemDescriptor::ItemEntry const&, bool) const = 0;

        virtual std::string getFullName() const;

        virtual std::string toString() const;

        virtual ::ItemDescriptor::ItemEntry getItem() const;

        virtual bool forEachItemUntil(::brstd::function_ref<bool(const Item&, short)>) const;

        virtual std::map<std::string, std::string> toMap() const = 0;

        virtual std::optional<CompoundTag> save() const = 0;

        virtual void serialize(::BinaryStream&) const = 0;

        virtual void serialize(::Json::Value&) const;

        virtual ::ItemDescriptor::InternalType getType() const = 0;

        virtual bool isValid() const;

        virtual ulong getHash() const = 0;

        virtual bool shouldResolve() const;

        virtual std::unique_ptr<ItemDescriptor::BaseDescriptor> resolve() const;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI bool $sameItems(::ItemDescriptor::BaseDescriptor const&, bool) const;

        MCNAPI std::string $toString() const;

        MCNAPI ::ItemDescriptor::ItemEntry $getItem() const;

        MCNAPI bool $forEachItemUntil(::brstd::function_ref<bool(const Item&, short)>) const;

        MCNAPI void $serialize(::Json::Value&) const;

        MCNAPI bool $isValid() const;

        MCNAPI bool $shouldResolve() const;

        MCNAPI std::unique_ptr<ItemDescriptor::BaseDescriptor> $resolve() const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ItemDescriptor::BaseDescriptor>> mImpl;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemDescriptor();

    virtual void serialize(::BinaryStream&) const;

    virtual void serialize(::Json::Value&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ItemDescriptor(::Block const&);

    MCNAPI explicit ItemDescriptor(::BlockType const&);

    MCNAPI explicit ItemDescriptor(::ItemTag const&);

    MCNAPI explicit ItemDescriptor(::ReadOnlyBinaryStream&);

    MCNAPI explicit ItemDescriptor(::SharedTypes::Legacy::ItemDescriptor const&);

    MCNAPI ItemDescriptor(::ItemDescriptor const&);

    MCNAPI ItemDescriptor(::ItemDescriptor&&);

    MCNAPI ItemDescriptor(::Item const&, int);

    MCNAPI ItemDescriptor(::Json::Value const&, ::MolangVersion);

    MCNAPI bool forEachItemUntil(::brstd::function_ref<bool(const Item&, short)>) const;

    MCNAPI short getAuxValue() const;

    MCNAPI ::Block const* getBlock() const;

    MCNAPI ::WeakPtr<const BlockType> const& getBlockType() const;

    MCNAPI std::string getFullName() const;

    MCNAPI ulong getHash() const;

    MCNAPI short getId() const;

    MCNAPI int getIdAux() const;

    MCNAPI ::Item const* getItem() const;

    MCNAPI std::string getRawNameId() const;

    MCNAPI std::string getSerializedNameAndAux(bool) const;

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);

    MCNAPI static void fromSharedTypes(::ItemDescriptor&, ::SharedTypes::Legacy::ItemDescriptor const&);

    MCNAPI static std::optional<ItemDescriptor> fromTag(::CompoundTag const*);

    MCNAPI static ::SharedTypes::Legacy::ItemDescriptor toSharedTypes(::ItemDescriptor const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& ANY_AUX_VALUE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Block const&);

    MCNAPI void* $ctor(::BlockType const&);

    MCNAPI void* $ctor(::ItemTag const&);

    MCNAPI void* $ctor(::ReadOnlyBinaryStream&);

    MCNAPI void* $ctor(::SharedTypes::Legacy::ItemDescriptor const&);

    MCNAPI void* $ctor(::ItemDescriptor const&);

    MCNAPI void* $ctor(::ItemDescriptor&&);

    MCNAPI void* $ctor(::Item const&, int);

    MCNAPI void* $ctor(::Json::Value const&, ::MolangVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $serialize(::BinaryStream&) const;

    MCNAPI void $serialize(::Json::Value&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
