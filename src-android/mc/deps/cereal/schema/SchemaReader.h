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

    public:
        // prevent constructor by default
        ScopedPop();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isValid() const = 0;

    virtual ::cereal::SchemaRWType expectedType() const = 0;

    virtual ::Bedrock::Result<void, std::error_code> asNull() = 0;

    virtual ::Bedrock::Result<bool, std::error_code> asBool() = 0;

    virtual ::Bedrock::Result<schar, std::error_code> asInt8() = 0;

    virtual ::Bedrock::Result<uchar, std::error_code> asUInt8() = 0;

    virtual ::Bedrock::Result<short, std::error_code> asInt16() = 0;

    virtual ::Bedrock::Result<ushort, std::error_code> asUInt16() = 0;

    virtual ::Bedrock::Result<int, std::error_code> asInt32() = 0;

    virtual ::Bedrock::Result<uint, std::error_code> asUInt32() = 0;

    virtual ::Bedrock::Result<long, std::error_code> asInt64() = 0;

    virtual ::Bedrock::Result<ulong, std::error_code> asUInt64() = 0;

    virtual ::Bedrock::Result<float, std::error_code> asFloat() = 0;

    virtual ::Bedrock::Result<double, std::error_code> asDouble() = 0;

    virtual ::Bedrock::Result<std::string, std::error_code> asString(ulong) = 0;

    virtual ::Bedrock::Result<void, std::error_code> asRawBytes(std::function<gsl::span<uchar>(ulong)>, ulong) = 0;

    virtual std::optional<bool> additionalDataAsBool() = 0;

    virtual std::optional<uint> additionalDataAsUInt32() = 0;

    virtual std::optional<std::string> additionalDataAsString(ulong) = 0;

    virtual ulong members() = 0;

    virtual ulong length(ulong) = 0;

    virtual bool pushMember(std::string_view const) = 0;

    virtual std::string_view pushNextMember() = 0;

    virtual void pushElement(ulong) = 0;

    virtual void pop() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::cereal::SchemaReader::ScopedPop scopedPop();
    // NOLINTEND
};

} // namespace cereal
