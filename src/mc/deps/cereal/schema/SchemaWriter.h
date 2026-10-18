#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaRWType.h"
#include "mc/deps/cereal/schema/SerializationTraitsSupport.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct NullType; }
// clang-format on

namespace cereal {

struct SchemaWriter : public ::cereal::SerializationTraitsSupport {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool write(::gsl::span<const uchar>) = 0;

    virtual bool write(std::string_view const) = 0;

    virtual bool write(double) = 0;

    virtual bool write(float) = 0;

    virtual bool write(ulong) = 0;

    virtual bool write(long) = 0;

    virtual bool write(uint) = 0;

    virtual bool write(int) = 0;

    virtual bool write(ushort) = 0;

    virtual bool write(short) = 0;

    virtual bool write(uchar) = 0;

    virtual bool write(schar) = 0;

    virtual bool write(bool) = 0;

#else // @header-generator platform
#endif // @header-generator platform
    virtual bool write(::cereal::NullType) = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeAdditionalData(std::string_view const) = 0;
#else // @header-generator platform
    virtual bool write(bool value) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeAdditionalData(uint) = 0;
#else // @header-generator platform
    virtual bool write(schar value) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeAdditionalData(bool) = 0;
#else // @header-generator platform
    virtual bool write(uchar value) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool pushMember(std::string_view const) = 0;
#else // @header-generator platform
    virtual bool write(short value) = 0;

    virtual bool write(ushort value) = 0;

    virtual bool write(int value) = 0;

    virtual bool write(uint value) = 0;

    virtual bool write(int64 value) = 0;

    virtual bool write(uint64 value) = 0;

    virtual bool write(float value) = 0;

    virtual bool write(double value) = 0;

    virtual bool write(::std::string_view const value) = 0;

    virtual bool write(::gsl::span<uchar const> view) = 0;

    virtual void writeAdditionalData(bool value) = 0;

    virtual void writeAdditionalData(uint value) = 0;

    virtual void writeAdditionalData(::std::string_view const value) = 0;

    virtual bool pushMember(::std::string_view const value) = 0;
#endif // @header-generator platform

    virtual void popMember() = 0;

    virtual ::cereal::SchemaRWType openObject() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::cereal::SchemaRWType openArray(bool, ulong) = 0;
#else // @header-generator platform
    virtual ::cereal::SchemaRWType openArray(bool isDynamicExtent, uint64 length) = 0;
#endif // @header-generator platform

    virtual void close() = 0;
    // NOLINTEND
};

} // namespace cereal
