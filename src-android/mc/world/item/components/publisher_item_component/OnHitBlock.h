#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/SingleThreaded.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/item/components/ItemComponent.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/Block.h"

namespace PublisherItemComponent {

struct OnHitBlock : public ::ItemComponent,
                    public ::Bedrock::PubSub::Publisher<
                        void(ItemStack&, const Block&, const BlockPos&, Mob&),
                        Bedrock::PubSub::ThreadModel::SingleThreaded,
                        (Bedrock::PubSub::ReturnPolicyType)0> {};

} // namespace PublisherItemComponent
