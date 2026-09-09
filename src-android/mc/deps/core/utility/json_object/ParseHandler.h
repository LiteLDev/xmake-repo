#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class Document; }
namespace Bedrock::JSONObject { class MemoryPage; }
namespace Bedrock::JSONObject { struct Collection; }
// clang-format on

namespace Bedrock::JSONObject {

class ParseHandler : public ::rapidjson::BaseReaderHandler<rapidjson::UTF8<char>, Bedrock::JSONObject::ParseHandler> {
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
        ::ll::TypedStorage<8, 8, ::Bedrock::JSONObject::MemoryPage*>               mOwningPage;
        ::ll::TypedStorage<8, 8, ::Bedrock::JSONObject::ParseHandler::StackEntry*> mParent;
        ::ll::TypedStorage<8, 8, ::Bedrock::JSONObject::Collection*>               mCollection;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Bedrock::JSONObject::Document*>>  mDocument;
    ::ll::TypedStorage<8, 8, ::Bedrock::JSONObject::ParseHandler::StackEntry*> mStack;
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
