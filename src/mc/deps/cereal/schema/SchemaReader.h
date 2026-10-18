#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaRWType.h"
#include "mc/deps/cereal/schema/SerializationTraitsSupport.h"
#include "mc/platform/Result.h"

namespace cereal {

struct SchemaReader : public ::cereal::SerializationTraitsSupport {
public:
    // SchemaReader inner types declare
    // clang-format off
    struct ScopedPop;
    // clang-format on

    // SchemaReader inner types define
    struct ScopedPop {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::cereal::SchemaReader*> mAdaptor;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        ScopedPop();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isValid() const = 0;

    virtual ::cereal::SchemaRWType expectedType() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> asNull() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<void> asNull() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<bool, std::error_code> asBool() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<bool> asBool() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<schar, std::error_code> asInt8() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<schar> asInt8() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<uchar, std::error_code> asUInt8() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<uchar> asUInt8() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<short, std::error_code> asInt16() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<short> asInt16() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<ushort, std::error_code> asUInt16() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<ushort> asUInt16() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<int, std::error_code> asInt32() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<int> asInt32() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<uint, std::error_code> asUInt32() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<uint> asUInt32() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<long, std::error_code> asInt64() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<int64> asInt64() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<ulong, std::error_code> asUInt64() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<uint64> asUInt64() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<float, std::error_code> asFloat() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<float> asFloat() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<double, std::error_code> asDouble() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<double> asDouble() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<std::string, std::error_code> asString(ulong) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<::std::string> asString(uint64 maxInputLength) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> asRawBytes(std::function<gsl::span<uchar>(ulong)>, ulong) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<void>
    asRawBytes(::std::function<::gsl::span<uchar>(uint64)> storage, uint64 maxInputLength) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<bool> additionalDataAsBool() = 0;
#else // @header-generator platform
    virtual ::std::optional<bool> additionalDataAsBool() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<uint> additionalDataAsUInt32() = 0;
#else // @header-generator platform
    virtual ::std::optional<uint> additionalDataAsUInt32() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<std::string> additionalDataAsString(ulong) = 0;
#else // @header-generator platform
    virtual ::std::optional<::std::string> additionalDataAsString(uint64 maxInputLength) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong members() = 0;
#else // @header-generator platform
    virtual uint64 members() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong length(ulong) = 0;
#else // @header-generator platform
    virtual uint64 length(uint64 expectedSize) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool pushMember(std::string_view const) = 0;
#else // @header-generator platform
    virtual bool pushMember(::std::string_view const name) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string_view pushNextMember() = 0;
#else // @header-generator platform
    virtual ::std::string_view pushNextMember() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void pushElement(ulong) = 0;
#else // @header-generator platform
    virtual void pushElement(uint64 index) = 0;
#endif // @header-generator platform

    virtual void pop() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::cereal::SchemaReader::ScopedPop scopedPop();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cereal
