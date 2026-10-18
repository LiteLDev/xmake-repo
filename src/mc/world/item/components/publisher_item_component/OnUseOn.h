#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/math/Vec3.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/SingleThreaded.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/components/ItemComponent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/BlockPos.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CompoundTag;
class ItemStack;
class Vec3;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace PublisherItemComponent {

struct OnUseOn : public ::ItemComponent,
                 public ::Bedrock::PubSub::Publisher<
#if defined(LL_PLAT_A) // @header-generator platform
                     void(bool&, const ItemStack&, ItemStack&, Actor&, BlockPos, uchar, const Vec3&),
                     Bedrock::PubSub::ThreadModel::SingleThreaded,
                     (Bedrock::PubSub::ReturnPolicyType)0> {
#else // @header-generator platform
                     void(bool&, ::ItemStack const&, ::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&),
                     ::Bedrock::PubSub::ThreadModel::SingleThreaded,
                     0> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mAutoSucceedOnClient;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isNetworkComponent() const /*override*/;

    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const /*override*/;

    virtual bool initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isNetworkComponent() const;

    MCAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    MCAPI bool $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);


    // NOLINTEND
#endif // @header-generator platform
};

} // namespace PublisherItemComponent
