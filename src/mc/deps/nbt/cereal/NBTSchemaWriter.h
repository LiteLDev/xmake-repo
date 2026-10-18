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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, std::unique_ptr<Tag>> tag;
        ::ll::TypedStorage<8, 24, std::string>         name;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>  mUnkc1be29;
        ::ll::UntypedStorage<8, 32> mUnk7ad4e4;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<NBTSchemaWriter::StackNode>> mStack;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkc969d0;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    NBTSchemaWriter& operator=(NBTSchemaWriter const&);
    NBTSchemaWriter(NBTSchemaWriter const&);
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NBTSchemaWriter();
#else // @header-generator platform
    virtual bool write(::cereal::NullType) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool write(::gsl::span<const uchar>);
#else // @header-generator platform
    virtual bool write(bool value) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool write(std::string_view const);
#else // @header-generator platform
    virtual bool write(schar) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool write(double);
#else // @header-generator platform
    virtual bool write(uchar) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool write(float);
#else // @header-generator platform
    virtual bool write(short value) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool write(ulong);
#else // @header-generator platform
    virtual bool write(ushort value) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool write(long);
#else // @header-generator platform
    virtual bool write(int value) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool write(uint);
#else // @header-generator platform
    virtual bool write(uint value) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool write(int);
#else // @header-generator platform
    virtual bool write(int64 value) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool write(ushort);
#else // @header-generator platform
    virtual bool write(uint64 value) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool write(short);
#else // @header-generator platform
    virtual bool write(float value) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool write(uchar);
#else // @header-generator platform
    virtual bool write(double value) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool write(schar);
#else // @header-generator platform
    virtual bool write(::std::string_view const value) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool write(bool);
#else // @header-generator platform
    virtual bool write(::gsl::span<uchar const> view) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool write(::cereal::NullType);
#else // @header-generator platform
    virtual void writeAdditionalData(bool) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeAdditionalData(std::string_view const);
#else // @header-generator platform
    virtual void writeAdditionalData(uint) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeAdditionalData(uint);
#else // @header-generator platform
    virtual void writeAdditionalData(::std::string_view const) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeAdditionalData(bool);
#else // @header-generator platform
    virtual bool pushMember(::std::string_view const memberName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool pushMember(std::string_view const);
#else // @header-generator platform
    virtual void popMember() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void popMember();
#else // @header-generator platform
    virtual ::cereal::SchemaRWType openObject() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::cereal::SchemaRWType openObject();
#else // @header-generator platform
    virtual ::cereal::SchemaRWType openArray(bool isDynamicExtent, uint64 length) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::cereal::SchemaRWType openArray(bool, ulong);

    virtual void close();
#else // @header-generator platform
    virtual void close() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NBTSchemaWriter();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTag getSavedCompoundTag();
#else // @header-generator platform
    MCNAPI bool _serializeTag(::std::unique_ptr<::Tag> tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Tag> getSavedTag();
#else // @header-generator platform
    MCNAPI ::CompoundTag getSavedCompoundTag();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $write(::gsl::span<const uchar>);
#else // @header-generator platform
    MCNAPI bool $write(::cereal::NullType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI bool $write(bool value);
#endif // @header-generator platform

    MCNAPI bool $write(schar);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $write(bool);
#else // @header-generator platform
    MCNAPI bool $write(uchar);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $write(::cereal::NullType);
#else // @header-generator platform
    MCNAPI bool $write(short value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeAdditionalData(std::string_view const);
#else // @header-generator platform
    MCNAPI bool $write(ushort value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeAdditionalData(uint);
#else // @header-generator platform
    MCNAPI bool $write(int value);

    MCNAPI bool $write(uint value);

    MCNAPI bool $write(int64 value);

    MCNAPI bool $write(uint64 value);

    MCNAPI bool $write(float value);

    MCNAPI bool $write(double value);

    MCNAPI bool $write(::std::string_view const value);

    MCNAPI bool $write(::gsl::span<uchar const> view);
#endif // @header-generator platform

    MCNAPI void $writeAdditionalData(bool);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $pushMember(std::string_view const);
#else // @header-generator platform
    MCNAPI void $writeAdditionalData(uint);

    MCNAPI void $writeAdditionalData(::std::string_view const);

    MCNAPI bool $pushMember(::std::string_view const memberName);
#endif // @header-generator platform

    MCNAPI void $popMember();

    MCNAPI ::cereal::SchemaRWType $openObject();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::SchemaRWType $openArray(bool, ulong);
#else // @header-generator platform
    MCNAPI ::cereal::SchemaRWType $openArray(bool isDynamicExtent, uint64 length);
#endif // @header-generator platform

    MCNAPI void $close();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
