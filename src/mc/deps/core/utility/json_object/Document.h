#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/json_object/ArrayNode.h"
#include "mc/deps/core/utility/json_object/DocumentOptions.h"
#include "mc/deps/core/utility/json_object/ObjectNode.h"
#include "mc/deps/core/utility/json_object/ParseResult.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/container/list.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::JSONObject { class MemoryPage; }
namespace Bedrock::JSONObject { class Node; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::JSONObject { class NodeBase; }
namespace Bedrock::JSONObject { class OutputOptions; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::JSONObject { class StringNode; }
#else // @header-generator platform
namespace Bedrock::JSONObject { class ParseResult; }
#endif // @header-generator platform
namespace Bedrock::JSONObject { class ValueWrapper; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::Memory { class IMemoryAllocator; }
namespace Core { class FileStream; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<2, 8>                                   mFreeNullsOrBools;
        ::ll::UntypedStorage<2, 8>                                   mFreeNumbers;
        ::ll::UntypedStorage<2, 8>                                   mFreeCollections;
        ::ll::UntypedStorage<2, 8>                                   mFreeStringBuffers;
        ::ll::TypedStorage<4, 24, ::Bedrock::JSONObject::ArrayNode>  mNullArray;
        ::ll::TypedStorage<4, 24, ::Bedrock::JSONObject::ObjectNode> mNullObject;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>  mUnk99a043;
        ::ll::UntypedStorage<8, 8>  mUnk6a8ba6;
        ::ll::UntypedStorage<8, 8>  mUnkc51133;
        ::ll::UntypedStorage<8, 8>  mUnkd325ef;
        ::ll::UntypedStorage<8, 24> mUnka20474;
        ::ll::UntypedStorage<8, 24> mUnkfd6681;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        AllocatedResources& operator=(AllocatedResources const&);
        AllocatedResources(AllocatedResources const&);
#endif // @header-generator platform
        AllocatedResources();
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Bedrock::JSONObject::DocumentOptions>              mOptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::JSONObject::ParseResult>                  mParseResult;
    ::ll::TypedStorage<8, 8, ::Bedrock::Memory::IMemoryAllocator*>                 mAllocator;
    ::ll::TypedStorage<8, 8, ::Bedrock::JSONObject::MemoryPage*>                   mPageHead;
    ::ll::TypedStorage<8, 8, ::Bedrock::JSONObject::Node*>                         mRootNode;
    ::ll::TypedStorage<8, 8, ::Bedrock::JSONObject::Document::AllocatedResources*> mAllocatedResources;
    ::ll::TypedStorage<4, 4, uint>                                                 mPageCount;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk45fb0b;
    ::ll::UntypedStorage<8, 16> mUnk7bfcbb;
    ::ll::UntypedStorage<8, 8>  mUnkb7a8b7;
    ::ll::UntypedStorage<8, 8>  mUnkf31ba7;
    ::ll::UntypedStorage<8, 8>  mUnk51b6a2;
    ::ll::UntypedStorage<8, 8>  mUnk9edefa;
    ::ll::UntypedStorage<4, 4>  mUnkfc6168;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Document& operator=(Document const&);
    Document(Document const&);
#endif // @header-generator platform
    Document();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit Document(::Bedrock::JSONObject::DocumentOptions const&);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI void* _acquireNode(
        ::Bedrock::Intrusive::
#if defined(LL_PLAT_A) // @header-generator platform
            list<Bedrock::JSONObject::NodeBase, Bedrock::JSONObject::NodeBase, Bedrock::JSONObject::NodeBase>&,
        ulong,
        ulong
#else // @header-generator platform
            list<::Bedrock::JSONObject::NodeBase, ::Bedrock::JSONObject::NodeBase, ::Bedrock::JSONObject::NodeBase>&
                freeList,
        uint64  size,
        uint64  alignment
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::JSONObject::NodeBase* _createNode(::Bedrock::JSONObject::ValueWrapper const&);

    MCNAPI ::Bedrock::JSONObject::MemoryPage& _getMemoryPage();
#else // @header-generator platform
    MCNAPI ::Bedrock::JSONObject::NodeBase* _createNode(::Bedrock::JSONObject::ValueWrapper const& value);
#endif // @header-generator platform

    MCNAPI void _initialize();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _releaseNode(::Bedrock::JSONObject::NodeBase&);
#else // @header-generator platform
    MCNAPI void _releaseNode(::Bedrock::JSONObject::NodeBase& node);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setRoot(::Bedrock::JSONObject::NodeBase*);
#else // @header-generator platform
    MCNAPI ::Bedrock::JSONObject::ParseResult const& loadString(::std::string_view str);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::JSONObject::ParseResult const& loadString(std::string_view);

    MCNAPI void reset();

    MCNAPI void setOptions(::Bedrock::JSONObject::DocumentOptions const&);

    MCNAPI ::Bedrock::JSONObject::Node* setRoot(::Bedrock::JSONObject::ValueWrapper const&);

    MCNAPI void
    writeStream(std::basic_ostream<char, std::char_traits<char>>&, ::Bedrock::JSONObject::OutputOptions const&) const;

    MCNAPI void writeString(std::string&, ::Bedrock::JSONObject::OutputOptions const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void writeStream(::std::ostream& out, ::Bedrock::JSONObject::OutputOptions const& outputOptions) const;

    MCNAPI void writeString(::std::string& dest, ::Bedrock::JSONObject::OutputOptions const& outputOptions) const;
#endif
#endif // @header-generator platform

    MCNAPI ~Document();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::JSONObject::DocumentOptions const&);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
