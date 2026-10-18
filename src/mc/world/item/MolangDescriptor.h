#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/Result.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class CompoundTag;
class ExpressionNode;
#if defined(LL_PLAT_A) // @header-generator platform
class ReadOnlyBinaryStream;
#else // @header-generator platform
#endif // @header-generator platform
namespace Json { class Value; }
// clang-format on

struct MolangDescriptor : public ::ItemDescriptor::BaseDescriptor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<ExpressionNode>> mExpressionTags;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ExpressionNode>> mExpressionTags;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    MolangDescriptor& operator=(MolangDescriptor const&);
    MolangDescriptor();
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
    virtual ~MolangDescriptor();
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
#else // @header-generator platform
    virtual uint64 getHash() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<MolangDescriptor> fromExpressionTag(std::string const&, ::MolangVersion const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::MolangDescriptor>
    fromExpressionTag(::std::string const& tagExpression, ::MolangVersion molangVersion);
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
    MCAPI ::std::string $getFullName() const;
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
    // NOLINTEND
#else // @header-generator platform
    MCAPI uint64 $getHash() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
