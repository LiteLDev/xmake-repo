#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/SingleThreaded.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/components/ItemComponent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
class Mob;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on
#endif // @header-generator platform

namespace PublisherItemComponent {

#if defined(LL_PLAT_A) // @header-generator platform
struct OnHurtActor : public ::ItemComponent,
                     public ::Bedrock::PubSub::Publisher<
                         void(ItemStack&, Actor&, Mob&),
                         Bedrock::PubSub::ThreadModel::SingleThreaded,
                         (Bedrock::PubSub::ReturnPolicyType)0> {};
#else // @header-generator platform
struct OnHurtActor
: public ::ItemComponent,
  public ::Bedrock::PubSub::
      Publisher<void(::ItemStack&, ::Actor&, ::Mob&), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0> {};
#endif // @header-generator platform

} // namespace PublisherItemComponent
