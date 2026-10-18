#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/item/ItemDescriptor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/components/IFoodItemComponent.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class CerealSchemaUpgradeSet;
#else // @header-generator platform
#endif // @header-generator platform
class ComponentItem;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class Item;
class ItemStack;
class Level;
class Player;
class SemVersion;
struct ItemOnUseResult;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace SharedTypes::v1_20_50 { struct FoodItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class FoodItemComponent : public ::NetworkedItemComponent<FoodItemComponent>, public ::IFoodItemComponent {
#else // @header-generator platform
class FoodItemComponent : public ::NetworkedItemComponent<::FoodItemComponent>, public ::IFoodItemComponent {
public:
    // FoodItemComponent inner types define
    using ConsumeSignature = void(::ItemStack const&, ::ItemStack&, ::Actor&);

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 4, int> mNutrition;
    ::ll::TypedStorage<4, 4, float> mSaturationModifier;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>               mNutrition;
    ::ll::TypedStorage<4, 4, float>             mSaturationModifier;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ItemDescriptor> mUsingConvertsTo;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mCanAlwaysEat;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::PubSub::Publisher<void (const ItemStack&, ItemStack&, Actor&), Bedrock::PubSub::ThreadModel::MultiThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> mOnConsumePublisher;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>              mCanAlwaysEat;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::Bedrock::PubSub::Publisher<
            void(::ItemStack const&, ::ItemStack&, ::Actor&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>>
                                                               mOnConsumePublisher;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnUseTimeDepletedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnUseSubscription;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    FoodItemComponent& operator=(FoodItemComponent const&);
    FoodItemComponent(FoodItemComponent const&);

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    FoodItemComponent();

#else // LL_PLAT_C
#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FoodItemComponent();
#else // @header-generator platform
    virtual ~FoodItemComponent() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _initializeComponent(::ComponentItem&);
#else // @header-generator platform
    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getNutrition() const;
#else // @header-generator platform
    virtual int getNutrition() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getSaturationModifier() const;
#else // @header-generator platform
    virtual float getSaturationModifier() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canAlwaysEat() const;
#else // @header-generator platform
    virtual bool canAlwaysEat() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Item const* eatItem(::ItemStack&, ::Actor&, ::Level&);
#else // @header-generator platform
    virtual ::Item const* eatItem(::ItemStack& instance, ::Actor& actor, ::Level& level) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void use(::ItemOnUseResult&, ::ItemStack&, ::Player&);
#else // @header-generator platform
    virtual void use(::ItemOnUseResult& result, ::ItemStack& instance, ::Player& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Item const* useTimeDepleted(::ItemUseMethod&, ::ItemStack const&, ::ItemStack&, ::Player&, ::Level&);
#else // @header-generator platform
    virtual ::Item const* useTimeDepleted(
        ::ItemUseMethod&   itemUseMethod,
        ::ItemStack const& initialInstance,
        ::ItemStack&       instance,
        ::Player&          player,
        ::Level&           level
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit FoodItemComponent(::SharedTypes::v1_20_50::FoodItemComponent);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI explicit FoodItemComponent(::SharedTypes::v1_20_50::FoodItemComponent component);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemDescriptor getUsingConvertsToItemDescriptor() const;

    MCNAPI ::Bedrock::PubSub::Connector<void(const ItemStack&, ItemStack&, Actor&)>& onConsume();
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Connector<void(::ItemStack const&, ::ItemStack&, ::Actor&)>& onConsume();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);

    MCNAPI static ::HashedString const& getIdentifier();

    MCNAPI static void registerVersionUpgrades(::CerealSchemaUpgradeSet&);
#else // @header-generator platform
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_20_50::FoodItemComponent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void* $ctor(::SharedTypes::v1_20_50::FoodItemComponent component);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_initializeComponent(::ComponentItem&);
#else // @header-generator platform
    MCAPI void $_initializeComponent(::ComponentItem& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getNutrition() const;
#else // @header-generator platform
    MCFOLD int $getNutrition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getSaturationModifier() const;
#else // @header-generator platform
    MCFOLD float $getSaturationModifier() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canAlwaysEat() const;
#else // @header-generator platform
    MCFOLD bool $canAlwaysEat() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Item const* $eatItem(::ItemStack&, ::Actor&, ::Level&);
#else // @header-generator platform
    MCAPI ::Item const* $eatItem(::ItemStack& instance, ::Actor& actor, ::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $use(::ItemOnUseResult&, ::ItemStack&, ::Player&);
#else // @header-generator platform
    MCAPI void $use(::ItemOnUseResult& result, ::ItemStack& instance, ::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Item const* $useTimeDepleted(::ItemUseMethod&, ::ItemStack const&, ::ItemStack&, ::Player&, ::Level&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::Item const* $useTimeDepleted(
        ::ItemUseMethod&   itemUseMethod,
        ::ItemStack const& initialInstance,
        ::ItemStack&       instance,
        ::Player&          player,
        ::Level&           level
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
