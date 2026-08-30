#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/SingleThreaded.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/components/ItemComponent.h"
#include "mc/world/level/Level.h"

namespace PublisherItemComponent {

struct UseTimeDepleted : public ::ItemComponent,
                         public ::Bedrock::PubSub::Publisher<
                             void(ItemUseMethod&, const ItemStack&, ItemStack&, Player&, Level&),
                             Bedrock::PubSub::ThreadModel::SingleThreaded,
                             (Bedrock::PubSub::ReturnPolicyType)0> {};

} // namespace PublisherItemComponent
