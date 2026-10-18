#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaRWType.h"
#include "mc/deps/cereal/schema/SchemaReader.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/json/Value.h"
#include "mc/deps/json/ValueConstIterator.h"
#endif // @header-generator platform
#include "mc/platform/Result.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace Json { class ValueConstIterator; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace cereal {

class JSONCppSchemaReaderBase : public ::cereal::SchemaReader {
public:
    // JSONCppSchemaReaderBase inner types declare
    // clang-format off
    struct State;
    // clang-format on

    // JSONCppSchemaReaderBase inner types define
    struct State {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::Json::Value const*> mValue;
        ::ll::UntypedStorage<8, 16>                    mIt;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::Json::Value const*>        mValue;
        ::ll::TypedStorage<8, 16, ::Json::ValueConstIterator> mIt;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        State& operator=(State const&);
        State();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<cereal::JSONCppSchemaReaderBase::State>> mState;
    ::ll::UntypedStorage<8, 16>                                                    mValue;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::cereal::JSONCppSchemaReaderBase::State>> mState;
    ::ll::TypedStorage<8, 16, ::Json::Value>                                           mValue;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    JSONCppSchemaReaderBase();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~JSONCppSchemaReaderBase();
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

    virtual void pop();
#else // @header-generator platform
    virtual void pop() /*override*/;
#endif // @header-generator platform

    virtual bool _allowAsBool() = 0;

    virtual bool _allowAsInt8() = 0;

    virtual bool _allowAsUInt8() = 0;

    virtual bool _allowAsInt16() = 0;

    virtual bool _allowAsUInt16() = 0;

    virtual bool _allowAsInt32() = 0;

    virtual bool _allowAsUInt32() = 0;

    virtual bool _allowAsInt64() = 0;

    virtual bool _allowAsUInt64() = 0;

    virtual bool _allowAsFloat() = 0;

    virtual bool _allowAsDouble() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual ~JSONCppSchemaReaderBase() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit JSONCppSchemaReaderBase(std::string const&);
#else // @header-generator platform
    MCAPI explicit JSONCppSchemaReaderBase(::std::string const& data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit JSONCppSchemaReaderBase(std::reference_wrapper<const Json::Value>);
#else // @header-generator platform
    MCAPI explicit JSONCppSchemaReaderBase(::std::reference_wrapper<::Json::Value const> value);
#endif // @header-generator platform
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
    MCNAPI void* $ctor(std::reference_wrapper<const Json::Value>);
#else // @header-generator platform
    MCAPI void* $ctor(::std::reference_wrapper<::Json::Value const> value);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValid() const;
#else // @header-generator platform
    MCAPI bool $isValid() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::SchemaRWType $expectedType() const;
#else // @header-generator platform
    MCAPI ::cereal::SchemaRWType $expectedType() const;
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
    MCAPI bool $pushMember(::std::string_view const name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string_view $pushNextMember();
#else // @header-generator platform
    MCAPI ::std::string_view $pushNextMember();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $pushElement(ulong);
#else // @header-generator platform
    MCAPI void $pushElement(uint64 index);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $pop();
#else // @header-generator platform
    MCAPI void $pop();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
