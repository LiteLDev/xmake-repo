#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemComponent.h"
#include "mc/world/item/components/ItemCustomComponentData.h"

// auto generated forward declare list
// clang-format off
class HashedString;
#if defined(LL_PLAT_A) // @header-generator platform
class SemVersion;
template<typename T0, typename T1, typename T2> class iterator_impl;
namespace ScriptModuleMinecraft { class ScriptCustomComponentParameterCache; }
#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_21_60 { struct CustomComponentsItemComponent; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace SharedTypes::v1_26_30 { struct ItemCustomComponent; }
namespace brstd { template<typename T0, typename T1, typename T2, typename T3, typename T4> class associative_adapter; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { class DynamicValue; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ComponentStorageSentinelType; }
namespace cereal::internal { template<typename T0, typename T1> class ComponentStorageIterator; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class CustomComponentsItemComponent : public ::ItemComponent {
public:
    // CustomComponentsItemComponent inner types define
    using LegacyCustomComponents = ::SharedTypes::v1_21_60::CustomComponentsItemComponent;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mComponents;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemCustomComponentData>> mComponents;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomComponentsItemComponent();
    // NOLINTEND

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    CustomComponentsItemComponent();

#else // LL_PLAT_C
#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CustomComponentsItemComponent(::SharedTypes::v1_21_60::CustomComponentsItemComponent const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI explicit CustomComponentsItemComponent(
        ::SharedTypes::v1_21_60::CustomComponentsItemComponent const& component
    );

    MCAPI explicit CustomComponentsItemComponent(
        ::entt::iterable_adaptor<
            ::cereal::internal::ComponentStorageIterator<
                ::brstd::associative_adapter<
                    ::std::string,
                    ::entt::meta_any,
                    ::std::less<void>,
                    ::std::vector<::std::string>,
                    ::std::vector<::entt::meta_any>>::
                    iterator_impl<
                        ::std::_Vector_iterator<::std::_Vector_val<::std::_Simple_types<::std::string>>>,
                        ::std::_Vector_iterator<::std::_Vector_val<::std::_Simple_types<::entt::meta_any>>>,
                        ::std::pair<::std::string const&, ::entt::meta_any&>>,
                ::SharedTypes::v1_26_30::ItemCustomComponent>,
            ::cereal::ComponentStorageSentinelType> customComponentsData
    );

    MCAPI void _addComponent(::HashedString compName, ::cereal::DynamicValue data);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _addComponent(::HashedString compName, ::cereal::DynamicValue data);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void* $ctor(::SharedTypes::v1_21_60::CustomComponentsItemComponent const& component);

    MCAPI void* $ctor(
        ::entt::iterable_adaptor<
            ::cereal::internal::ComponentStorageIterator<
                ::brstd::associative_adapter<
                    ::std::string,
                    ::entt::meta_any,
                    ::std::less<void>,
                    ::std::vector<::std::string>,
                    ::std::vector<::entt::meta_any>>::
                    iterator_impl<
                        ::std::_Vector_iterator<::std::_Vector_val<::std::_Simple_types<::std::string>>>,
                        ::std::_Vector_iterator<::std::_Vector_val<::std::_Simple_types<::entt::meta_any>>>,
                        ::std::pair<::std::string const&, ::entt::meta_any&>>,
                ::SharedTypes::v1_26_30::ItemCustomComponent>,
            ::cereal::ComponentStorageSentinelType> customComponentsData
    );
#endif
#endif // @header-generator platform
    // NOLINTEND
};
