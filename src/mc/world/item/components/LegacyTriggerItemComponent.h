#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Connector.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class DefinitionTrigger;
class ItemStackBase;
class RenderParams;
struct ItemOnUseResult;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class LegacyTriggerItemComponent : public ::ItemComponent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mOnTriggerPublisher;
    // NOLINTEND
#else // @header-generator platform
    // LegacyTriggerItemComponent inner types define
    using TriggerSignature = void(::ItemOnUseResult&, ::ItemStackBase&, ::DefinitionTrigger const&, ::RenderParams&);
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
#else // @header-generator platform
    // member variables
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LegacyTriggerItemComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::ItemOnUseResult&, ::ItemStackBase&, ::DefinitionTrigger const&, ::RenderParams&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mOnTriggerPublisher;
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
