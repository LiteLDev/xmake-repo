#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/platform/Result.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class CompoundTag;
class ExpressionNode;
class ReadOnlyBinaryStream;
namespace Json { class Value; }
// clang-format on

struct MolangDescriptor : public ::ItemDescriptor::BaseDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<ExpressionNode>> mExpressionTags;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangDescriptor& operator=(MolangDescriptor const&);
    MolangDescriptor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual std::unique_ptr<ItemDescriptor::BaseDescriptor> clone() const;

    virtual ~MolangDescriptor();

    virtual bool sameItems(::ItemDescriptor::BaseDescriptor const&, bool) const;

    virtual bool sameItem(::ItemDescriptor::ItemEntry const&, bool) const;

    virtual std::string getFullName() const;

    virtual std::map<std::string, std::string> toMap() const;

    virtual std::optional<CompoundTag> save() const;

    virtual void serialize(::BinaryStream&) const;

    virtual void serialize(::Json::Value&) const;

    virtual ::ItemDescriptor::InternalType getType() const;

    virtual ulong getHash() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<MolangDescriptor> fromExpressionTag(std::string const&, ::MolangVersion const);
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
