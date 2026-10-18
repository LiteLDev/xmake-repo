#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/SingleThreaded.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/components/ItemComponent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/Block.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class ItemStack;
class Mob;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on
#endif // @header-generator platform

namespace PublisherItemComponent {

struct OnHitBlock : public ::ItemComponent,
                    public ::Bedrock::PubSub::Publisher<
#if defined(LL_PLAT_A) // @header-generator platform
                        void(ItemStack&, const Block&, const BlockPos&, Mob&),
                        Bedrock::PubSub::ThreadModel::SingleThreaded,
                        (Bedrock::PubSub::ReturnPolicyType)0> {};
#else // @header-generator platform
                        void(::ItemStack&, ::Block const&, ::BlockPos const&, ::Mob&),
                        ::Bedrock::PubSub::ThreadModel::SingleThreaded,
                        0> {};
#endif // @header-generator platform

} // namespace PublisherItemComponent
