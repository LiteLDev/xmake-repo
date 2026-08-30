#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemComponent.h"
#include "mc/world/item/components/ItemCustomComponentData.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
template<typename T0, typename T1, typename T2> class iterator_impl;
namespace ScriptModuleMinecraft { class ScriptCustomComponentParameterCache; }
namespace SharedTypes::v1_21_60 { struct CustomComponentsItemComponent; }
namespace SharedTypes::v1_26_30 { struct ItemCustomComponent; }
namespace brstd { template<typename T0, typename T1, typename T2, typename T3, typename T4> class associative_adapter; }
namespace cereal { class DynamicValue; }
namespace cereal { struct ComponentStorageSentinelType; }
namespace cereal::internal { template<typename T0, typename T1> class ComponentStorageIterator; }
// clang-format on

class CustomComponentsItemComponent : public ::ItemComponent {
public:
    // CustomComponentsItemComponent inner types define
    using LegacyCustomComponents = ::SharedTypes::v1_21_60::CustomComponentsItemComponent;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mComponents;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomComponentsItemComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CustomComponentsItemComponent(::SharedTypes::v1_21_60::CustomComponentsItemComponent const&);

    MCNAPI explicit CustomComponentsItemComponent(
        ::entt::iterable_adaptor<
            cereal::internal::ComponentStorageIterator<
                brstd::associative_adapter<
                    std::string,
                    entt::meta_any,
                    std::less<void>,
                    std::vector<std::string>,
                    std::vector<entt::meta_any>>::
                    iterator_impl<std::string*, entt::meta_any*, std::pair<const std::string&, entt::meta_any&>>,
                SharedTypes::v1_26_30::ItemCustomComponent>,
            cereal::ComponentStorageSentinelType>
    );

    MCNAPI void _addComponent(::HashedString, ::cereal::DynamicValue);

    MCNAPI void finalize(::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&);

    MCNAPI std::vector<ItemCustomComponentData> const& getComponents() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& getIdentifier();

    MCNAPI static ::SemVersion getV2ReleaseVersion();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_60::CustomComponentsItemComponent const&);

    MCNAPI void* $ctor(
        ::entt::iterable_adaptor<
            cereal::internal::ComponentStorageIterator<
                brstd::associative_adapter<
                    std::string,
                    entt::meta_any,
                    std::less<void>,
                    std::vector<std::string>,
                    std::vector<entt::meta_any>>::
                    iterator_impl<std::string*, entt::meta_any*, std::pair<const std::string&, entt::meta_any&>>,
                SharedTypes::v1_26_30::ItemCustomComponent>,
            cereal::ComponentStorageSentinelType>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
