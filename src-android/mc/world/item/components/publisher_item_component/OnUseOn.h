#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/SingleThreaded.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/item/components/ItemComponent.h"
#include "mc/world/level/BlockPos.h"

namespace PublisherItemComponent {

struct OnUseOn : public ::ItemComponent,
                 public ::Bedrock::PubSub::Publisher<
                     void(bool&, const ItemStack&, ItemStack&, Actor&, BlockPos, uchar, const Vec3&),
                     Bedrock::PubSub::ThreadModel::SingleThreaded,
                     (Bedrock::PubSub::ReturnPolicyType)0> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mAutoSucceedOnClient;
    // NOLINTEND
};

} // namespace PublisherItemComponent
