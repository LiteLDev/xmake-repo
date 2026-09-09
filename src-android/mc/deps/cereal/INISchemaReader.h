#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/INISection.h"
#include "mc/deps/cereal/schema/SchemaRWType.h"
#include "mc/deps/cereal/schema/SchemaReader.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class INIProperty; }
// clang-format on

namespace cereal {

class INISchemaReader : public ::cereal::SchemaReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::cereal::INISection>  mData;
    ::ll::TypedStorage<8, 8, ::cereal::INIProperty*> mCurrentProp;
    ::ll::UntypedStorage<8, 8>                       mIt;
    // NOLINTEND

public:
    // prevent constructor by default
    INISchemaReader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isValid() const;

    virtual ::cereal::SchemaRWType expectedType() const;

    virtual ::Bedrock::Result<void, std::error_code> asNull();

    virtual ::Bedrock::Result<bool, std::error_code> asBool();

    virtual ::Bedrock::Result<schar, std::error_code> asInt8();

    virtual ::Bedrock::Result<uchar, std::error_code> asUInt8();

    virtual ::Bedrock::Result<short, std::error_code> asInt16();

    virtual ::Bedrock::Result<ushort, std::error_code> asUInt16();

    virtual ::Bedrock::Result<int, std::error_code> asInt32();

    virtual ::Bedrock::Result<uint, std::error_code> asUInt32();

    virtual ::Bedrock::Result<long, std::error_code> asInt64();

    virtual ::Bedrock::Result<ulong, std::error_code> asUInt64();

    virtual ::Bedrock::Result<float, std::error_code> asFloat();

    virtual ::Bedrock::Result<double, std::error_code> asDouble();

    virtual ::Bedrock::Result<std::string, std::error_code> asString(ulong);

    virtual ::Bedrock::Result<void, std::error_code> asRawBytes(std::function<gsl::span<uchar>(ulong)>, ulong);

    virtual std::optional<bool> additionalDataAsBool();

    virtual std::optional<uint> additionalDataAsUInt32();

    virtual std::optional<std::string> additionalDataAsString(ulong);

    virtual ulong members();

    virtual ulong length(ulong);

    virtual bool pushMember(std::string_view const);

    virtual std::string_view pushNextMember();

    virtual void pushElement(ulong);

    virtual void pop();
    // NOLINTEND
};

} // namespace cereal
