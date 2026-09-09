#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaRWType.h"
#include "mc/deps/cereal/schema/SchemaWriter.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Tag;
namespace cereal { struct NullType; }
// clang-format on

class NBTSchemaWriter : public ::cereal::SchemaWriter {
public:
    // NBTSchemaWriter inner types declare
    // clang-format off
    struct StackNode;
    // clang-format on

    // NBTSchemaWriter inner types define
    struct StackNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<Tag>> tag;
        ::ll::TypedStorage<8, 24, std::string>         name;
        // NOLINTEND

    public:
        // prevent constructor by default
        StackNode& operator=(StackNode const&);
        StackNode(StackNode const&);
        StackNode();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~StackNode();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<NBTSchemaWriter::StackNode>> mStack;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NBTSchemaWriter();

    virtual bool write(::gsl::span<const uchar>);

    virtual bool write(std::string_view const);

    virtual bool write(double);

    virtual bool write(float);

    virtual bool write(ulong);

    virtual bool write(long);

    virtual bool write(uint);

    virtual bool write(int);

    virtual bool write(ushort);

    virtual bool write(short);

    virtual bool write(uchar);

    virtual bool write(schar);

    virtual bool write(bool);

    virtual bool write(::cereal::NullType);

    virtual void writeAdditionalData(std::string_view const);

    virtual void writeAdditionalData(uint);

    virtual void writeAdditionalData(bool);

    virtual bool pushMember(std::string_view const);

    virtual void popMember();

    virtual ::cereal::SchemaRWType openObject();

    virtual ::cereal::SchemaRWType openArray(bool, ulong);

    virtual void close();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NBTSchemaWriter();

    MCNAPI ::CompoundTag getSavedCompoundTag();

    MCNAPI std::unique_ptr<Tag> getSavedTag();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $write(::gsl::span<const uchar>);

    MCNAPI bool $write(std::string_view const);

    MCNAPI bool $write(double);

    MCNAPI bool $write(float);

    MCNAPI bool $write(ulong);

    MCNAPI bool $write(long);

    MCNAPI bool $write(uint);

    MCNAPI bool $write(int);

    MCNAPI bool $write(ushort);

    MCNAPI bool $write(short);

    MCNAPI bool $write(uchar);

    MCNAPI bool $write(schar);

    MCNAPI bool $write(bool);

    MCNAPI bool $write(::cereal::NullType);

    MCNAPI void $writeAdditionalData(std::string_view const);

    MCNAPI void $writeAdditionalData(uint);

    MCNAPI void $writeAdditionalData(bool);

    MCNAPI bool $pushMember(std::string_view const);

    MCNAPI void $popMember();

    MCNAPI ::cereal::SchemaRWType $openObject();

    MCNAPI ::cereal::SchemaRWType $openArray(bool, ulong);

    MCNAPI void $close();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
