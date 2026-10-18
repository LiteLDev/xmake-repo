#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_21_40/clientbiome/components/ClientBiomeComponentVersion.h"
#include "mc/deps/shared_types/v1_21_40/clientbiome/components/IClientBiomeJsonComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_40 {

struct AmbientSoundsClientBiomeJsonComponent : public ::SharedTypes::v1_21_40::IClientBiomeJsonComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mAddition;
    ::ll::UntypedStorage<8, 24> mLoop;
    ::ll::UntypedStorage<8, 24> mMood;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<20>> mAddition;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<20>> mLoop;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<20>> mMood;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AmbientSoundsClientBiomeJsonComponent();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AmbientSoundsClientBiomeJsonComponent();
#else // @header-generator platform
    virtual ::ClientBiomeComponentVersion getType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ClientBiomeComponentVersion getType() const;
#else // @header-generator platform
    virtual ~AmbientSoundsClientBiomeJsonComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AmbientSoundsClientBiomeJsonComponent(::SharedTypes::v1_21_40::AmbientSoundsClientBiomeJsonComponent const&);

    MCFOLD ::SharedTypes::v1_21_40::AmbientSoundsClientBiomeJsonComponent&
    operator=(::SharedTypes::v1_21_40::AmbientSoundsClientBiomeJsonComponent&&);

    MCFOLD ::SharedTypes::v1_21_40::AmbientSoundsClientBiomeJsonComponent&
    operator=(::SharedTypes::v1_21_40::AmbientSoundsClientBiomeJsonComponent const&);
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
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
#else // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_40::AmbientSoundsClientBiomeJsonComponent const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
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

} // namespace SharedTypes::v1_21_40
