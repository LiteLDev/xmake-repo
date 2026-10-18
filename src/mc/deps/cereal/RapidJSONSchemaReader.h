#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaRWType.h"
#include "mc/deps/cereal/schema/SchemaReader.h"
#include "mc/platform/Result.h"

namespace cereal {

class RapidJSONSchemaReader : public ::cereal::SchemaReader {
public:
    // RapidJSONSchemaReader inner types declare
    // clang-format off
    struct State;
    // clang-format on

    // RapidJSONSchemaReader inner types define
    struct State {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 8, ::rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const*> mValue;
        ::ll::UntypedStorage<8, 8> mIt;
        // clang-format on
#else // @header-generator platform
        ::ll::TypedStorage<
            8,
            8,
            ::rapidjson::GenericValue<
                ::rapidjson::UTF8<char>,
                ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const*>
            mValue;
        ::ll::TypedStorage<
            8,
            8,
            ::rapidjson::GenericMemberIterator<
                1,
                ::rapidjson::UTF8<char>,
                ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>>
            mIt;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<cereal::RapidJSONSchemaReader::State>> mState;
    ::ll::TypedStorage<8, 104, ::rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>> mDoc;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::cereal::RapidJSONSchemaReader::State>> mState;
    ::ll::TypedStorage<
        8,
        96,
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>>
        mDoc;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RapidJSONSchemaReader();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RapidJSONSchemaReader();
#else // @header-generator platform
    virtual bool isValid() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValid() const;
#else // @header-generator platform
    virtual ::cereal::SchemaRWType expectedType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::cereal::SchemaRWType expectedType() const;
#else // @header-generator platform
    virtual ::Bedrock::Result<void> asNull() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> asNull();
#else // @header-generator platform
    virtual ::Bedrock::Result<bool> asBool() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<bool, std::error_code> asBool();
#else // @header-generator platform
    virtual ::Bedrock::Result<schar> asInt8() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<schar, std::error_code> asInt8();
#else // @header-generator platform
    virtual ::Bedrock::Result<uchar> asUInt8() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<uchar, std::error_code> asUInt8();
#else // @header-generator platform
    virtual ::Bedrock::Result<short> asInt16() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<short, std::error_code> asInt16();
#else // @header-generator platform
    virtual ::Bedrock::Result<ushort> asUInt16() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<ushort, std::error_code> asUInt16();
#else // @header-generator platform
    virtual ::Bedrock::Result<int> asInt32() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<int, std::error_code> asInt32();
#else // @header-generator platform
    virtual ::Bedrock::Result<uint> asUInt32() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<uint, std::error_code> asUInt32();
#else // @header-generator platform
    virtual ::Bedrock::Result<int64> asInt64() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<long, std::error_code> asInt64();
#else // @header-generator platform
    virtual ::Bedrock::Result<uint64> asUInt64() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<ulong, std::error_code> asUInt64();
#else // @header-generator platform
    virtual ::Bedrock::Result<float> asFloat() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<float, std::error_code> asFloat();
#else // @header-generator platform
    virtual ::Bedrock::Result<double> asDouble() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<double, std::error_code> asDouble();
#else // @header-generator platform
    virtual ::Bedrock::Result<::std::string> asString(uint64 maxInputLength) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<std::string, std::error_code> asString(ulong);
#else // @header-generator platform
    virtual ::Bedrock::Result<void>
    asRawBytes(::std::function<::gsl::span<uchar>(uint64)> storage, uint64 maxInputLength) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> asRawBytes(std::function<gsl::span<uchar>(ulong)>, ulong);
#else // @header-generator platform
    virtual ::std::optional<bool> additionalDataAsBool() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<bool> additionalDataAsBool();
#else // @header-generator platform
    virtual ::std::optional<uint> additionalDataAsUInt32() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<uint> additionalDataAsUInt32();
#else // @header-generator platform
    virtual ::std::optional<::std::string> additionalDataAsString(uint64) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<std::string> additionalDataAsString(ulong);
#else // @header-generator platform
    virtual uint64 members() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong members();
#else // @header-generator platform
    virtual uint64 length(uint64 expectedSize) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong length(ulong);
#else // @header-generator platform
    virtual bool pushMember(::std::string_view const name) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool pushMember(std::string_view const);
#else // @header-generator platform
    virtual ::std::string_view pushNextMember() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string_view pushNextMember();
#else // @header-generator platform
    virtual void pushElement(uint64 index) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void pushElement(ulong);
#else // @header-generator platform
    virtual void pop() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void pop();
#else // @header-generator platform
    virtual ~RapidJSONSchemaReader() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit RapidJSONSchemaReader(std::string const&);
#else // @header-generator platform
    MCAPI explicit RapidJSONSchemaReader(::std::string const& data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit RapidJSONSchemaReader(
        ::rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
#else // @header-generator platform
    MCAPI explicit RapidJSONSchemaReader(
        ::rapidjson::GenericValue<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::rapidjson::GenericValue<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValid() const;
#else // @header-generator platform
    MCFOLD bool $isValid() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::SchemaRWType $expectedType() const;
#else // @header-generator platform
    MCFOLD ::cereal::SchemaRWType $expectedType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $asNull();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> $asNull();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<bool, std::error_code> $asBool();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<bool> $asBool();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<schar, std::error_code> $asInt8();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<schar> $asInt8();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<uchar, std::error_code> $asUInt8();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<uchar> $asUInt8();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<short, std::error_code> $asInt16();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<short> $asInt16();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<ushort, std::error_code> $asUInt16();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<ushort> $asUInt16();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<int, std::error_code> $asInt32();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<int> $asInt32();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<uint, std::error_code> $asUInt32();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<uint> $asUInt32();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<long, std::error_code> $asInt64();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<int64> $asInt64();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<ulong, std::error_code> $asUInt64();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<uint64> $asUInt64();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<float, std::error_code> $asFloat();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<float> $asFloat();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<double, std::error_code> $asDouble();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<double> $asDouble();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<std::string, std::error_code> $asString(ulong);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<::std::string> $asString(uint64 maxInputLength);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $asRawBytes(std::function<gsl::span<uchar>(ulong)>, ulong);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void>
    $asRawBytes(::std::function<::gsl::span<uchar>(uint64)> storage, uint64 maxInputLength);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<bool> $additionalDataAsBool();
#else // @header-generator platform
    MCFOLD ::std::optional<bool> $additionalDataAsBool();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<uint> $additionalDataAsUInt32();
#else // @header-generator platform
    MCFOLD ::std::optional<uint> $additionalDataAsUInt32();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::string> $additionalDataAsString(ulong);
#else // @header-generator platform
    MCFOLD ::std::optional<::std::string> $additionalDataAsString(uint64);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $members();
#else // @header-generator platform
    MCFOLD uint64 $members();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $length(ulong);
#else // @header-generator platform
    MCFOLD uint64 $length(uint64 expectedSize);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $pushMember(std::string_view const);
#else // @header-generator platform
    MCFOLD bool $pushMember(::std::string_view const name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string_view $pushNextMember();
#else // @header-generator platform
    MCFOLD ::std::string_view $pushNextMember();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $pushElement(ulong);
#else // @header-generator platform
    MCFOLD void $pushElement(uint64 index);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $pop();
#else // @header-generator platform
    MCFOLD void $pop();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
