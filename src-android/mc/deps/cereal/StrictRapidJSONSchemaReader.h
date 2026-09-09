#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaRWType.h"
#include "mc/deps/cereal/schema/SchemaReader.h"
#include "mc/platform/Result.h"

namespace cereal {

class StrictRapidJSONSchemaReader : public ::cereal::SchemaReader {
public:
    // StrictRapidJSONSchemaReader inner types declare
    // clang-format off
    struct State;
    // clang-format on

    // StrictRapidJSONSchemaReader inner types define
    struct State {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, ::rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const*> mValue;
        ::ll::UntypedStorage<8, 8> mIt;
        // clang-format on
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<cereal::StrictRapidJSONSchemaReader::State>> mState;
    ::ll::TypedStorage<8, 104, ::rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>> mDoc;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    StrictRapidJSONSchemaReader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StrictRapidJSONSchemaReader();

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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StrictRapidJSONSchemaReader(std::string const&);

    MCNAPI explicit StrictRapidJSONSchemaReader(
        ::rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&);

    MCNAPI void* $ctor(
        ::rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isValid() const;

    MCNAPI ::cereal::SchemaRWType $expectedType() const;

    MCNAPI ::Bedrock::Result<void, std::error_code> $asNull();

    MCNAPI ::Bedrock::Result<bool, std::error_code> $asBool();

    MCNAPI ::Bedrock::Result<schar, std::error_code> $asInt8();

    MCNAPI ::Bedrock::Result<uchar, std::error_code> $asUInt8();

    MCNAPI ::Bedrock::Result<short, std::error_code> $asInt16();

    MCNAPI ::Bedrock::Result<ushort, std::error_code> $asUInt16();

    MCNAPI ::Bedrock::Result<int, std::error_code> $asInt32();

    MCNAPI ::Bedrock::Result<uint, std::error_code> $asUInt32();

    MCNAPI ::Bedrock::Result<long, std::error_code> $asInt64();

    MCNAPI ::Bedrock::Result<ulong, std::error_code> $asUInt64();

    MCNAPI ::Bedrock::Result<float, std::error_code> $asFloat();

    MCNAPI ::Bedrock::Result<double, std::error_code> $asDouble();

    MCNAPI ::Bedrock::Result<std::string, std::error_code> $asString(ulong);

    MCNAPI ::Bedrock::Result<void, std::error_code> $asRawBytes(std::function<gsl::span<uchar>(ulong)>, ulong);

    MCNAPI std::optional<bool> $additionalDataAsBool();

    MCNAPI std::optional<uint> $additionalDataAsUInt32();

    MCNAPI std::optional<std::string> $additionalDataAsString(ulong);

    MCNAPI ulong $members();

    MCNAPI ulong $length(ulong);

    MCNAPI bool $pushMember(std::string_view const);

    MCNAPI std::string_view $pushNextMember();

    MCNAPI void $pushElement(ulong);

    MCNAPI void $pop();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
