#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/Color255RGB.h"
#include "mc/deps/shared_types/v1_21_40/clientbiome/components/ClientBiomeComponentVersion.h"
#include "mc/deps/shared_types/v1_21_40/clientbiome/components/IClientBiomeJsonComponent.h"
#include "mc/deps/shared_types/v1_21_70/clientbiome/ClientBiomeFoliageColorMap.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace SharedTypes::v1_21_40 { struct FoliageAppearanceClientBiomeJsonComponent; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_70 {

struct FoliageAppearanceClientBiomeJsonComponent : public ::SharedTypes::v1_21_40::IClientBiomeJsonComponent {
public:
    // FoliageAppearanceClientBiomeJsonComponent inner types declare
    // clang-format off
    struct FoliageColorMapContainer;
    // clang-format on

    // FoliageAppearanceClientBiomeJsonComponent inner types define
    struct FoliageColorMapContainer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_70::ClientBiomeFoliageColorMap> mColorMap;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
        MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();

        MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
#else // @header-generator platform
        MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 24, std::optional<std::variant<SharedTypes::Color255RGB, SharedTypes::v1_21_70::FoliageAppearanceClientBiomeJsonComponent::FoliageColorMapContainer>>> mColor;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        4,
        24,
        ::std::optional<::std::variant<
            ::SharedTypes::Color255RGB,
            ::SharedTypes::v1_21_70::FoliageAppearanceClientBiomeJsonComponent::FoliageColorMapContainer>>>
        mColor;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    FoliageAppearanceClientBiomeJsonComponent& operator=(FoliageAppearanceClientBiomeJsonComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FoliageAppearanceClientBiomeJsonComponent();

    virtual ::ClientBiomeComponentVersion getType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FoliageAppearanceClientBiomeJsonComponent(
        ::SharedTypes::v1_21_40::FoliageAppearanceClientBiomeJsonComponent const&
    );
#else // @header-generator platform
    virtual ::ClientBiomeComponentVersion getType() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_40::FoliageAppearanceClientBiomeJsonComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ClientBiomeComponentVersion $getType() const;
#else // @header-generator platform
    MCFOLD ::ClientBiomeComponentVersion $getType() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_70
