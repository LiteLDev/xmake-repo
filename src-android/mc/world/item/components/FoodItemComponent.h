#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/item/ItemDescriptor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/components/IFoodItemComponent.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CerealSchemaUpgradeSet;
class ComponentItem;
class HashedString;
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

class FoodItemComponent : public ::NetworkedItemComponent<FoodItemComponent>, public ::IFoodItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, int> mNutrition;
    ::ll::TypedStorage<4, 4, float> mSaturationModifier;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor> mUsingConvertsTo;
    ::ll::TypedStorage<1, 1, bool> mCanAlwaysEat;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::PubSub::Publisher<void (const ItemStack&, ItemStack&, Actor&), Bedrock::PubSub::ThreadModel::MultiThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> mOnConsumePublisher;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnUseTimeDepletedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnUseSubscription;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    FoodItemComponent& operator=(FoodItemComponent const&);
    FoodItemComponent(FoodItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FoodItemComponent();

    virtual void _initializeComponent(::ComponentItem&);

    virtual int getNutrition() const;

    virtual float getSaturationModifier() const;

    virtual bool canAlwaysEat() const;

    virtual ::Item const* eatItem(::ItemStack&, ::Actor&, ::Level&);

    virtual void use(::ItemOnUseResult&, ::ItemStack&, ::Player&);

    virtual ::Item const* useTimeDepleted(::ItemUseMethod&, ::ItemStack const&, ::ItemStack&, ::Player&, ::Level&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FoodItemComponent(::SharedTypes::v1_20_50::FoodItemComponent);

    MCNAPI ::ItemDescriptor getUsingConvertsToItemDescriptor() const;

    MCNAPI ::Bedrock::PubSub::Connector<void(const ItemStack&, ItemStack&, Actor&)>& onConsume();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);

    MCNAPI static ::HashedString const& getIdentifier();

    MCNAPI static void registerVersionUpgrades(::CerealSchemaUpgradeSet&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_50::FoodItemComponent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_initializeComponent(::ComponentItem&);

    MCNAPI int $getNutrition() const;

    MCNAPI float $getSaturationModifier() const;

    MCNAPI bool $canAlwaysEat() const;

    MCNAPI ::Item const* $eatItem(::ItemStack&, ::Actor&, ::Level&);

    MCNAPI void $use(::ItemOnUseResult&, ::ItemStack&, ::Player&);

    MCNAPI ::Item const* $useTimeDepleted(::ItemUseMethod&, ::ItemStack const&, ::ItemStack&, ::Player&, ::Level&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
