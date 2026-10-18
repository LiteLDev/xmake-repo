#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/list_standard_operations.h"

namespace Bedrock::JSONObject {

#if defined(LL_PLAT_A) // @header-generator platform
class NodeBase
: public ::Bedrock::Intrusive::list_standard_operations<Bedrock::JSONObject::NodeBase, Bedrock::JSONObject::NodeBase> {
#else // @header-generator platform
class NodeBase : public ::Bedrock::Intrusive::
                     list_standard_operations<::Bedrock::JSONObject::NodeBase, ::Bedrock::JSONObject::NodeBase> {
#endif // @header-generator platform
public:
    // NodeBase inner types declare
    // clang-format off
    class Offset;
    // clang-format on

    // NodeBase inner types define
    class Offset {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<2, 2> mField_619fdc6e;
#else // @header-generator platform
        union {
            ::ll::UntypedStorage<2, 2> mUnkd0ad5a;
            ::ll::UntypedStorage<2, 2> mUnk5228a0;
        };
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        Offset& operator=(Offset const&);
        Offset(Offset const&);
        Offset();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<2, 8> mField_1c93ce94;
#else // @header-generator platform
    union {
        struct {
            ::ll::UntypedStorage<2, 2> mUnke7d0a5;
            ::ll::UntypedStorage<2, 2> mUnkab13d6;
            ::ll::UntypedStorage<2, 2> mUnk78a983;
            ::ll::UntypedStorage<1, 1> mUnk58fbd6;
            ::ll::UntypedStorage<1, 1> mUnkfe6bdf;
        };
        ::ll::UntypedStorage<8, 8> mUnk58ae72;
    };
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    NodeBase& operator=(NodeBase const&);
    NodeBase(NodeBase const&);
    NodeBase();
#endif // @header-generator platform
};

} // namespace Bedrock::JSONObject
