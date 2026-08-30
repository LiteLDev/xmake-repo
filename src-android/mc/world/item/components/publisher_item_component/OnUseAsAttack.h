#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/SingleThreaded.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/item/components/ItemComponent.h"

namespace PublisherItemComponent {

struct OnUseAsAttack : public ::ItemComponent,
                       public ::Bedrock::PubSub::Publisher<
                           void(ItemStack&, Player&, const Vec3&),
                           Bedrock::PubSub::ThreadModel::SingleThreaded,
                           (Bedrock::PubSub::ReturnPolicyType)0> {};

} // namespace PublisherItemComponent
