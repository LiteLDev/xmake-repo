#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaRWType.h"
#include "mc/deps/cereal/schema/SchemaWriter.h"
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct NullType; }
// clang-format on

namespace cereal {

class DynamicValueSchemaWriter : public ::cereal::SchemaWriter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue>                                    mData;
    ::ll::TypedStorage<8, 8, ulong>                                                      mExpectedSize;
    ::ll::TypedStorage<8, 24, std::vector<std::reference_wrapper<cereal::DynamicValue>>> mStack;
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue>                                          mData;
    ::ll::TypedStorage<8, 8, uint64>                                                           mExpectedSize;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::cereal::DynamicValue>>> mStack;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DynamicValueSchemaWriter();
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
    virtual bool write(schar value) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool write(double);
#else // @header-generator platform
    virtual bool write(uchar value) /*override*/;
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
    virtual bool pushMember(::std::string_view const value) /*override*/;
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::DynamicValue& value();

    MCNAPI bool write(::cereal::DynamicValue);
#else // @header-generator platform
    MCAPI bool write(::cereal::DynamicValue value);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $write(::gsl::span<const uchar>);
#else // @header-generator platform
    MCAPI bool $write(::cereal::NullType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $write(std::string_view const);
#else // @header-generator platform
    MCAPI bool $write(bool value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $write(double);
#else // @header-generator platform
    MCAPI bool $write(schar value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $write(float);
#else // @header-generator platform
    MCAPI bool $write(uchar value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $write(ulong);
#else // @header-generator platform
    MCAPI bool $write(short value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $write(long);
#else // @header-generator platform
    MCAPI bool $write(ushort value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $write(uint);
#else // @header-generator platform
    MCAPI bool $write(int value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $write(int);
#else // @header-generator platform
    MCAPI bool $write(uint value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $write(ushort);
#else // @header-generator platform
    MCFOLD bool $write(int64 value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $write(short);
#else // @header-generator platform
    MCFOLD bool $write(uint64 value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $write(uchar);
#else // @header-generator platform
    MCAPI bool $write(float value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $write(schar);
#else // @header-generator platform
    MCAPI bool $write(double value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $write(bool);
#else // @header-generator platform
    MCAPI bool $write(::std::string_view const value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $write(::cereal::NullType);
#else // @header-generator platform
    MCAPI bool $write(::gsl::span<uchar const> view);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeAdditionalData(std::string_view const);
#else // @header-generator platform
    MCAPI void $writeAdditionalData(bool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeAdditionalData(uint);
#else // @header-generator platform
    MCFOLD void $writeAdditionalData(uint);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeAdditionalData(bool);
#else // @header-generator platform
    MCFOLD void $writeAdditionalData(::std::string_view const);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $pushMember(std::string_view const);
#else // @header-generator platform
    MCAPI bool $pushMember(::std::string_view const value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $popMember();
#else // @header-generator platform
    MCAPI void $popMember();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::SchemaRWType $openObject();
#else // @header-generator platform
    MCAPI ::cereal::SchemaRWType $openObject();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::SchemaRWType $openArray(bool, ulong);
#else // @header-generator platform
    MCAPI ::cereal::SchemaRWType $openArray(bool isDynamicExtent, uint64 length);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $close();
#else // @header-generator platform
    MCAPI void $close();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
