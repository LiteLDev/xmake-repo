#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/block/BlockDescriptor.h"
#endif // @header-generator platform
#include "mc/world/level/block/block_descriptor_serializer/StatesProxy.h"
#include "mc/world/level/block/block_descriptor_serializer/TagsProxy.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct BlockDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace BlockDescriptorSerializer {

struct BlockDescriptorProxy {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                              mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                            mName;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 24, ::BlockDescriptorSerializer::StatesProxy> mStates;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::BlockDescriptorSerializer::TagsProxy>   mTags;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::BlockDescriptorSerializer::TagsProxy>   mTags;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDescriptorProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockDescriptorProxy(::SharedTypes::Legacy::BlockDescriptor desc);

    MCAPI BlockDescriptorProxy(::std::string name, ::std::vector<::BlockDescriptor::State> states, ::std::string tags);

    MCAPI ~BlockDescriptorProxy();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::Legacy::BlockDescriptor desc);

    MCAPI void* $ctor(::std::string name, ::std::vector<::BlockDescriptor::State> states, ::std::string tags);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace BlockDescriptorSerializer
