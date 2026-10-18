#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::JSONObject { class Document; }
namespace Bedrock::JSONObject { class MemoryPage; }
namespace Bedrock::JSONObject { struct Collection; }
#else // @header-generator platform
namespace Bedrock::JSONObject { class ValueWrapper; }
#endif // @header-generator platform
// clang-format on

namespace Bedrock::JSONObject {

#if defined(LL_PLAT_A) // @header-generator platform
class ParseHandler : public ::rapidjson::BaseReaderHandler<rapidjson::UTF8<char>, Bedrock::JSONObject::ParseHandler> {
#else // @header-generator platform
class ParseHandler
: public ::rapidjson::BaseReaderHandler<::rapidjson::UTF8<char>, ::Bedrock::JSONObject::ParseHandler> {
#endif // @header-generator platform
public:
    // ParseHandler inner types declare
    // clang-format off
    struct StackEntry;
    // clang-format on

    // ParseHandler inner types define
    struct StackEntry {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::Bedrock::JSONObject::MemoryPage*>               mOwningPage;
        ::ll::TypedStorage<8, 8, ::Bedrock::JSONObject::ParseHandler::StackEntry*> mParent;
        ::ll::TypedStorage<8, 8, ::Bedrock::JSONObject::Collection*>               mCollection;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnk69c924;
        ::ll::UntypedStorage<8, 8> mUnkf7a1f4;
        ::ll::UntypedStorage<8, 8> mUnk8e9ec9;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        StackEntry& operator=(StackEntry const&);
        StackEntry(StackEntry const&);
        StackEntry();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Bedrock::JSONObject::Document*>>  mDocument;
    ::ll::TypedStorage<8, 8, ::Bedrock::JSONObject::ParseHandler::StackEntry*> mStack;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk20ca89;
    ::ll::UntypedStorage<8, 8> mUnk660ee3;
    // NOLINTEND

public:
    // prevent constructor by default
    ParseHandler& operator=(ParseHandler const&);
    ParseHandler(ParseHandler const&);
    ParseHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool Bool(bool b);

    MCNAPI bool Double(double d);

    MCNAPI bool Int(int i);

    MCNAPI bool Int64(int64 i);

    MCNAPI bool Key(char const* str, uint length, bool copy);

    MCNAPI bool Null();

    MCNAPI bool String(char const* str, uint length, bool copy);

    MCNAPI bool Uint(uint u);

    MCNAPI bool Uint64(uint64 u);

    MCNAPI bool _addObjectOrArray(::Bedrock::JSONObject::ValueWrapper const& value);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
