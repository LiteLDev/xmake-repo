#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/ArrayNode.h"
#include "mc/deps/core/utility/json_object/DocumentOptions.h"
#include "mc/deps/core/utility/json_object/ObjectNode.h"
#include "mc/deps/core/utility/json_object/ParseResult.h"
#include "mc/platform/container/list.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class MemoryPage; }
namespace Bedrock::JSONObject { class Node; }
namespace Bedrock::JSONObject { class NodeBase; }
namespace Bedrock::JSONObject { class OutputOptions; }
namespace Bedrock::JSONObject { class StringNode; }
namespace Bedrock::JSONObject { class ValueWrapper; }
namespace Bedrock::Memory { class IMemoryAllocator; }
namespace Core { class FileStream; }
// clang-format on

namespace Bedrock::JSONObject {

class Document {
public:
    // Document inner types declare
    // clang-format off
    struct AllocatedResources;
    // clang-format on

    // Document inner types define
    struct AllocatedResources {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 8>                                   mFreeNullsOrBools;
        ::ll::UntypedStorage<2, 8>                                   mFreeNumbers;
        ::ll::UntypedStorage<2, 8>                                   mFreeCollections;
        ::ll::UntypedStorage<2, 8>                                   mFreeStringBuffers;
        ::ll::TypedStorage<4, 24, ::Bedrock::JSONObject::ArrayNode>  mNullArray;
        ::ll::TypedStorage<4, 24, ::Bedrock::JSONObject::ObjectNode> mNullObject;
        // NOLINTEND

    public:
        // prevent constructor by default
        AllocatedResources();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Bedrock::JSONObject::DocumentOptions>              mOptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::JSONObject::ParseResult>                  mParseResult;
    ::ll::TypedStorage<8, 8, ::Bedrock::Memory::IMemoryAllocator*>                 mAllocator;
    ::ll::TypedStorage<8, 8, ::Bedrock::JSONObject::MemoryPage*>                   mPageHead;
    ::ll::TypedStorage<8, 8, ::Bedrock::JSONObject::Node*>                         mRootNode;
    ::ll::TypedStorage<8, 8, ::Bedrock::JSONObject::Document::AllocatedResources*> mAllocatedResources;
    ::ll::TypedStorage<4, 4, uint>                                                 mPageCount;
    // NOLINTEND

public:
    // prevent constructor by default
    Document();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Document(::Bedrock::JSONObject::DocumentOptions const&);

    MCNAPI void* _acquireNode(
        ::Bedrock::Intrusive::
            list<Bedrock::JSONObject::NodeBase, Bedrock::JSONObject::NodeBase, Bedrock::JSONObject::NodeBase>&,
        ulong,
        ulong
    );

    MCNAPI ::Bedrock::JSONObject::NodeBase* _createNode(::Bedrock::JSONObject::ValueWrapper const&);

    MCNAPI ::Bedrock::JSONObject::MemoryPage& _getMemoryPage();

    MCNAPI void _initialize();

    MCNAPI void _releaseNode(::Bedrock::JSONObject::NodeBase&);

    MCNAPI void _setRoot(::Bedrock::JSONObject::NodeBase*);

    MCNAPI ::Bedrock::JSONObject::ParseResult const& loadString(std::string_view);

    MCNAPI void reset();

    MCNAPI void setOptions(::Bedrock::JSONObject::DocumentOptions const&);

    MCNAPI ::Bedrock::JSONObject::Node* setRoot(::Bedrock::JSONObject::ValueWrapper const&);

    MCNAPI void
    writeStream(std::basic_ostream<char, std::char_traits<char>>&, ::Bedrock::JSONObject::OutputOptions const&) const;

    MCNAPI void writeString(std::string&, ::Bedrock::JSONObject::OutputOptions const&) const;

    MCNAPI ~Document();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::JSONObject::DocumentOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
